// Copyright 2017 syzkaller project authors. All rights reserved.
// Use of this source code is governed by Apache 2 LICENSE that can be found in the LICENSE file.

package dash

import (
	"encoding/json"
	"fmt"
	"net/http"

	"github.com/google/syzkaller/dashboard/dashapi"
	"golang.org/x/net/context"
	"google.golang.org/appengine/log"
)

// Interface with external reporting systems.
// The external system is meant to poll for new bugs with apiReportingPoll,
// and report back bug status updates with apiReportingUpdate.

type ExternalConfig struct {
	ID string
}

func (cfg *ExternalConfig) Type() string {
	return cfg.ID
}

func apiReportingPollBugs(c context.Context, r *http.Request) (interface{}, error) {
	req := new(dashapi.PollBugsRequest)
	if err := json.NewDecoder(r.Body).Decode(req); err != nil {
		return nil, fmt.Errorf("failed to unmarshal request: %v", err)
	}
	reports := reportingPollBugs(c, req.Type)
	resp := &dashapi.PollBugsResponse{
		Reports: reports,
	}
	return resp, nil
}

func apiReportingPollClosed(c context.Context, r *http.Request) (interface{}, error) {
	req := new(dashapi.PollClosedRequest)
	if err := json.NewDecoder(r.Body).Decode(req); err != nil {
		return nil, fmt.Errorf("failed to unmarshal request: %v", err)
	}
	ids, err := reportingPollClosed(c, req.IDs)
	if err != nil {
		log.Errorf(c, "failed to poll closed bugs: %v", err)
		return nil, err
	}
	resp := &dashapi.PollClosedResponse{
		IDs: ids,
	}
	return resp, nil
}

func apiReportingUpdate(c context.Context, r *http.Request) (interface{}, error) {
	req := new(dashapi.BugUpdate)
	if err := json.NewDecoder(r.Body).Decode(req); err != nil {
		return nil, fmt.Errorf("failed to unmarshal request: %v", err)
	}
	ok, reason, err := incomingCommand(c, req)
	return &dashapi.BugUpdateReply{
		OK:    ok,
		Error: err != nil,
		Text:  reason,
	}, nil
}
