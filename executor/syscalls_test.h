// AUTOGENERATED FILE

#if 0
#define GOARCH "32"
#define SYZ_REVISION "bdaa89c6378138891b16bdae7dc50da273a1fa6f"
#define __NR_syz_test 1000000

unsigned syscall_count = 81;
call_t syscalls[] = {
	{"mmap", 0, (syscall_t)mmap},
	{"mutate0", 0, (syscall_t)mutate0},
	{"mutate1", 0, (syscall_t)mutate1},
	{"mutate2", 0, (syscall_t)mutate2},
	{"mutate3", 0, (syscall_t)mutate3},
	{"mutate4", 0, (syscall_t)mutate4},
	{"mutate5", 0, (syscall_t)mutate5},
	{"mutate6", 0, (syscall_t)mutate6},
	{"mutate7", 0, (syscall_t)mutate7},
	{"mutate8", 0, (syscall_t)mutate8},
	{"serialize0", 0, (syscall_t)serialize0},
	{"serialize1", 0, (syscall_t)serialize1},
	{"syz_test", 1000000, (syscall_t)syz_test},
	{"syz_test$align0", 1000000, (syscall_t)syz_test},
	{"syz_test$align1", 1000000, (syscall_t)syz_test},
	{"syz_test$align2", 1000000, (syscall_t)syz_test},
	{"syz_test$align3", 1000000, (syscall_t)syz_test},
	{"syz_test$align4", 1000000, (syscall_t)syz_test},
	{"syz_test$align5", 1000000, (syscall_t)syz_test},
	{"syz_test$align6", 1000000, (syscall_t)syz_test},
	{"syz_test$array0", 1000000, (syscall_t)syz_test},
	{"syz_test$array1", 1000000, (syscall_t)syz_test},
	{"syz_test$array2", 1000000, (syscall_t)syz_test},
	{"syz_test$bf0", 1000000, (syscall_t)syz_test},
	{"syz_test$bf1", 1000000, (syscall_t)syz_test},
	{"syz_test$csum_encode", 1000000, (syscall_t)syz_test},
	{"syz_test$csum_ipv4", 1000000, (syscall_t)syz_test},
	{"syz_test$csum_ipv4_tcp", 1000000, (syscall_t)syz_test},
	{"syz_test$csum_ipv4_udp", 1000000, (syscall_t)syz_test},
	{"syz_test$csum_ipv6_icmp", 1000000, (syscall_t)syz_test},
	{"syz_test$csum_ipv6_tcp", 1000000, (syscall_t)syz_test},
	{"syz_test$csum_ipv6_udp", 1000000, (syscall_t)syz_test},
	{"syz_test$end0", 1000000, (syscall_t)syz_test},
	{"syz_test$end1", 1000000, (syscall_t)syz_test},
	{"syz_test$hint_data", 1000000, (syscall_t)syz_test},
	{"syz_test$int", 1000000, (syscall_t)syz_test},
	{"syz_test$length0", 1000000, (syscall_t)syz_test},
	{"syz_test$length1", 1000000, (syscall_t)syz_test},
	{"syz_test$length10", 1000000, (syscall_t)syz_test},
	{"syz_test$length11", 1000000, (syscall_t)syz_test},
	{"syz_test$length12", 1000000, (syscall_t)syz_test},
	{"syz_test$length13", 1000000, (syscall_t)syz_test},
	{"syz_test$length14", 1000000, (syscall_t)syz_test},
	{"syz_test$length15", 1000000, (syscall_t)syz_test},
	{"syz_test$length16", 1000000, (syscall_t)syz_test},
	{"syz_test$length17", 1000000, (syscall_t)syz_test},
	{"syz_test$length18", 1000000, (syscall_t)syz_test},
	{"syz_test$length19", 1000000, (syscall_t)syz_test},
	{"syz_test$length2", 1000000, (syscall_t)syz_test},
	{"syz_test$length20", 1000000, (syscall_t)syz_test},
	{"syz_test$length21", 1000000, (syscall_t)syz_test},
	{"syz_test$length22", 1000000, (syscall_t)syz_test},
	{"syz_test$length3", 1000000, (syscall_t)syz_test},
	{"syz_test$length4", 1000000, (syscall_t)syz_test},
	{"syz_test$length5", 1000000, (syscall_t)syz_test},
	{"syz_test$length6", 1000000, (syscall_t)syz_test},
	{"syz_test$length7", 1000000, (syscall_t)syz_test},
	{"syz_test$length8", 1000000, (syscall_t)syz_test},
	{"syz_test$length9", 1000000, (syscall_t)syz_test},
	{"syz_test$missing_resource", 1000000, (syscall_t)syz_test},
	{"syz_test$opt0", 1000000, (syscall_t)syz_test},
	{"syz_test$opt1", 1000000, (syscall_t)syz_test},
	{"syz_test$opt2", 1000000, (syscall_t)syz_test},
	{"syz_test$opt3", 1000000, (syscall_t)syz_test},
	{"syz_test$recur0", 1000000, (syscall_t)syz_test},
	{"syz_test$recur1", 1000000, (syscall_t)syz_test},
	{"syz_test$recur2", 1000000, (syscall_t)syz_test},
	{"syz_test$regression0", 1000000, (syscall_t)syz_test},
	{"syz_test$regression1", 1000000, (syscall_t)syz_test},
	{"syz_test$regression2", 1000000, (syscall_t)syz_test},
	{"syz_test$res0", 1000000, (syscall_t)syz_test},
	{"syz_test$res1", 1000000, (syscall_t)syz_test},
	{"syz_test$struct", 1000000, (syscall_t)syz_test},
	{"syz_test$text_x86_16", 1000000, (syscall_t)syz_test},
	{"syz_test$text_x86_32", 1000000, (syscall_t)syz_test},
	{"syz_test$text_x86_64", 1000000, (syscall_t)syz_test},
	{"syz_test$text_x86_real", 1000000, (syscall_t)syz_test},
	{"syz_test$union0", 1000000, (syscall_t)syz_test},
	{"syz_test$union1", 1000000, (syscall_t)syz_test},
	{"syz_test$union2", 1000000, (syscall_t)syz_test},
	{"syz_test$vma0", 1000000, (syscall_t)syz_test},

};
#endif

#if 0
#define GOARCH "64"
#define SYZ_REVISION "1a34f1204c41f7e31560335cd00119045c30dd16"
#define __NR_syz_test 1000000

unsigned syscall_count = 81;
call_t syscalls[] = {
	{"mmap", 0, (syscall_t)mmap},
	{"mutate0", 0, (syscall_t)mutate0},
	{"mutate1", 0, (syscall_t)mutate1},
	{"mutate2", 0, (syscall_t)mutate2},
	{"mutate3", 0, (syscall_t)mutate3},
	{"mutate4", 0, (syscall_t)mutate4},
	{"mutate5", 0, (syscall_t)mutate5},
	{"mutate6", 0, (syscall_t)mutate6},
	{"mutate7", 0, (syscall_t)mutate7},
	{"mutate8", 0, (syscall_t)mutate8},
	{"serialize0", 0, (syscall_t)serialize0},
	{"serialize1", 0, (syscall_t)serialize1},
	{"syz_test", 1000000, (syscall_t)syz_test},
	{"syz_test$align0", 1000000, (syscall_t)syz_test},
	{"syz_test$align1", 1000000, (syscall_t)syz_test},
	{"syz_test$align2", 1000000, (syscall_t)syz_test},
	{"syz_test$align3", 1000000, (syscall_t)syz_test},
	{"syz_test$align4", 1000000, (syscall_t)syz_test},
	{"syz_test$align5", 1000000, (syscall_t)syz_test},
	{"syz_test$align6", 1000000, (syscall_t)syz_test},
	{"syz_test$array0", 1000000, (syscall_t)syz_test},
	{"syz_test$array1", 1000000, (syscall_t)syz_test},
	{"syz_test$array2", 1000000, (syscall_t)syz_test},
	{"syz_test$bf0", 1000000, (syscall_t)syz_test},
	{"syz_test$bf1", 1000000, (syscall_t)syz_test},
	{"syz_test$csum_encode", 1000000, (syscall_t)syz_test},
	{"syz_test$csum_ipv4", 1000000, (syscall_t)syz_test},
	{"syz_test$csum_ipv4_tcp", 1000000, (syscall_t)syz_test},
	{"syz_test$csum_ipv4_udp", 1000000, (syscall_t)syz_test},
	{"syz_test$csum_ipv6_icmp", 1000000, (syscall_t)syz_test},
	{"syz_test$csum_ipv6_tcp", 1000000, (syscall_t)syz_test},
	{"syz_test$csum_ipv6_udp", 1000000, (syscall_t)syz_test},
	{"syz_test$end0", 1000000, (syscall_t)syz_test},
	{"syz_test$end1", 1000000, (syscall_t)syz_test},
	{"syz_test$hint_data", 1000000, (syscall_t)syz_test},
	{"syz_test$int", 1000000, (syscall_t)syz_test},
	{"syz_test$length0", 1000000, (syscall_t)syz_test},
	{"syz_test$length1", 1000000, (syscall_t)syz_test},
	{"syz_test$length10", 1000000, (syscall_t)syz_test},
	{"syz_test$length11", 1000000, (syscall_t)syz_test},
	{"syz_test$length12", 1000000, (syscall_t)syz_test},
	{"syz_test$length13", 1000000, (syscall_t)syz_test},
	{"syz_test$length14", 1000000, (syscall_t)syz_test},
	{"syz_test$length15", 1000000, (syscall_t)syz_test},
	{"syz_test$length16", 1000000, (syscall_t)syz_test},
	{"syz_test$length17", 1000000, (syscall_t)syz_test},
	{"syz_test$length18", 1000000, (syscall_t)syz_test},
	{"syz_test$length19", 1000000, (syscall_t)syz_test},
	{"syz_test$length2", 1000000, (syscall_t)syz_test},
	{"syz_test$length20", 1000000, (syscall_t)syz_test},
	{"syz_test$length21", 1000000, (syscall_t)syz_test},
	{"syz_test$length22", 1000000, (syscall_t)syz_test},
	{"syz_test$length3", 1000000, (syscall_t)syz_test},
	{"syz_test$length4", 1000000, (syscall_t)syz_test},
	{"syz_test$length5", 1000000, (syscall_t)syz_test},
	{"syz_test$length6", 1000000, (syscall_t)syz_test},
	{"syz_test$length7", 1000000, (syscall_t)syz_test},
	{"syz_test$length8", 1000000, (syscall_t)syz_test},
	{"syz_test$length9", 1000000, (syscall_t)syz_test},
	{"syz_test$missing_resource", 1000000, (syscall_t)syz_test},
	{"syz_test$opt0", 1000000, (syscall_t)syz_test},
	{"syz_test$opt1", 1000000, (syscall_t)syz_test},
	{"syz_test$opt2", 1000000, (syscall_t)syz_test},
	{"syz_test$opt3", 1000000, (syscall_t)syz_test},
	{"syz_test$recur0", 1000000, (syscall_t)syz_test},
	{"syz_test$recur1", 1000000, (syscall_t)syz_test},
	{"syz_test$recur2", 1000000, (syscall_t)syz_test},
	{"syz_test$regression0", 1000000, (syscall_t)syz_test},
	{"syz_test$regression1", 1000000, (syscall_t)syz_test},
	{"syz_test$regression2", 1000000, (syscall_t)syz_test},
	{"syz_test$res0", 1000000, (syscall_t)syz_test},
	{"syz_test$res1", 1000000, (syscall_t)syz_test},
	{"syz_test$struct", 1000000, (syscall_t)syz_test},
	{"syz_test$text_x86_16", 1000000, (syscall_t)syz_test},
	{"syz_test$text_x86_32", 1000000, (syscall_t)syz_test},
	{"syz_test$text_x86_64", 1000000, (syscall_t)syz_test},
	{"syz_test$text_x86_real", 1000000, (syscall_t)syz_test},
	{"syz_test$union0", 1000000, (syscall_t)syz_test},
	{"syz_test$union1", 1000000, (syscall_t)syz_test},
	{"syz_test$union2", 1000000, (syscall_t)syz_test},
	{"syz_test$vma0", 1000000, (syscall_t)syz_test},

};
#endif
