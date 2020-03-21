	.text
	.file	"asm-offsets.c"
                                        # Start of file scope inline assembly
.equ X86_FEATURE_FPU, 0*32+ 0
.equ X86_FEATURE_VME, 0*32+ 1
.equ X86_FEATURE_DE, 0*32+ 2
.equ X86_FEATURE_PSE, 0*32+ 3
.equ X86_FEATURE_TSC, 0*32+ 4
.equ X86_FEATURE_MSR, 0*32+ 5
.equ X86_FEATURE_PAE, 0*32+ 6
.equ X86_FEATURE_MCE, 0*32+ 7
.equ X86_FEATURE_CX8, 0*32+ 8
.equ X86_FEATURE_APIC, 0*32+ 9
.equ X86_FEATURE_SEP, 0*32+11
.equ X86_FEATURE_MTRR, 0*32+12
.equ X86_FEATURE_PGE, 0*32+13
.equ X86_FEATURE_MCA, 0*32+14
.equ X86_FEATURE_CMOV, 0*32+15
.equ X86_FEATURE_PAT, 0*32+16
.equ X86_FEATURE_PSE36, 0*32+17
.equ X86_FEATURE_CLFLUSH, 0*32+19
.equ X86_FEATURE_DS, 0*32+21
.equ X86_FEATURE_ACPI, 0*32+22
.equ X86_FEATURE_MMX, 0*32+23
.equ X86_FEATURE_FXSR, 0*32+24
.equ X86_FEATURE_SSE, 0*32+25
.equ X86_FEATURE_SSE2, 0*32+26
.equ X86_FEATURE_SS, 0*32+27
.equ X86_FEATURE_HTT, 0*32+28
.equ X86_FEATURE_TM1, 0*32+29
.equ X86_FEATURE_PBE, 0*32+31
.equ X86_FEATURE_SSE3, 1*32+ 0
.equ X86_FEATURE_PCLMULQDQ, 1*32+ 1
.equ X86_FEATURE_DTES64, 1*32+ 2
.equ X86_FEATURE_MONITOR, 1*32+ 3
.equ X86_FEATURE_DSCPL, 1*32+ 4
.equ X86_FEATURE_VMX, 1*32+ 5
.equ X86_FEATURE_SMX, 1*32+ 6
.equ X86_FEATURE_EIST, 1*32+ 7
.equ X86_FEATURE_TM2, 1*32+ 8
.equ X86_FEATURE_SSSE3, 1*32+ 9
.equ X86_FEATURE_FMA, 1*32+12
.equ X86_FEATURE_CX16, 1*32+13
.equ X86_FEATURE_XTPR, 1*32+14
.equ X86_FEATURE_PDCM, 1*32+15
.equ X86_FEATURE_PCID, 1*32+17
.equ X86_FEATURE_DCA, 1*32+18
.equ X86_FEATURE_SSE4_1, 1*32+19
.equ X86_FEATURE_SSE4_2, 1*32+20
.equ X86_FEATURE_X2APIC, 1*32+21
.equ X86_FEATURE_MOVBE, 1*32+22
.equ X86_FEATURE_POPCNT, 1*32+23
.equ X86_FEATURE_TSC_DEADLINE, 1*32+24
.equ X86_FEATURE_AESNI, 1*32+25
.equ X86_FEATURE_XSAVE, 1*32+26
.equ X86_FEATURE_OSXSAVE, 1*32+27
.equ X86_FEATURE_AVX, 1*32+28
.equ X86_FEATURE_F16C, 1*32+29
.equ X86_FEATURE_RDRAND, 1*32+30
.equ X86_FEATURE_HYPERVISOR, 1*32+31
.equ X86_FEATURE_SYSCALL, 2*32+11
.equ X86_FEATURE_NX, 2*32+20
.equ X86_FEATURE_MMXEXT, 2*32+22
.equ X86_FEATURE_FFXSR, 2*32+25
.equ X86_FEATURE_PAGE1GB, 2*32+26
.equ X86_FEATURE_RDTSCP, 2*32+27
.equ X86_FEATURE_LM, 2*32+29
.equ X86_FEATURE_3DNOWEXT, 2*32+30
.equ X86_FEATURE_3DNOW, 2*32+31
.equ X86_FEATURE_LAHF_LM, 3*32+ 0
.equ X86_FEATURE_CMP_LEGACY, 3*32+ 1
.equ X86_FEATURE_SVM, 3*32+ 2
.equ X86_FEATURE_EXTAPIC, 3*32+ 3
.equ X86_FEATURE_CR8_LEGACY, 3*32+ 4
.equ X86_FEATURE_ABM, 3*32+ 5
.equ X86_FEATURE_SSE4A, 3*32+ 6
.equ X86_FEATURE_MISALIGNSSE, 3*32+ 7
.equ X86_FEATURE_3DNOWPREFETCH, 3*32+ 8
.equ X86_FEATURE_OSVW, 3*32+ 9
.equ X86_FEATURE_IBS, 3*32+10
.equ X86_FEATURE_XOP, 3*32+11
.equ X86_FEATURE_SKINIT, 3*32+12
.equ X86_FEATURE_WDT, 3*32+13
.equ X86_FEATURE_LWP, 3*32+15
.equ X86_FEATURE_FMA4, 3*32+16
.equ X86_FEATURE_NODEID_MSR, 3*32+19
.equ X86_FEATURE_TBM, 3*32+21
.equ X86_FEATURE_TOPOEXT, 3*32+22
.equ X86_FEATURE_DBEXT, 3*32+26
.equ X86_FEATURE_MONITORX, 3*32+29
.equ X86_FEATURE_XSAVEOPT, 4*32+ 0
.equ X86_FEATURE_XSAVEC, 4*32+ 1
.equ X86_FEATURE_XGETBV1, 4*32+ 2
.equ X86_FEATURE_XSAVES, 4*32+ 3
.equ X86_FEATURE_FSGSBASE, 5*32+ 0
.equ X86_FEATURE_TSC_ADJUST, 5*32+ 1
.equ X86_FEATURE_SGX, 5*32+ 2
.equ X86_FEATURE_BMI1, 5*32+ 3
.equ X86_FEATURE_HLE, 5*32+ 4
.equ X86_FEATURE_AVX2, 5*32+ 5
.equ X86_FEATURE_FDP_EXCP_ONLY, 5*32+ 6
.equ X86_FEATURE_SMEP, 5*32+ 7
.equ X86_FEATURE_BMI2, 5*32+ 8
.equ X86_FEATURE_ERMS, 5*32+ 9
.equ X86_FEATURE_INVPCID, 5*32+10
.equ X86_FEATURE_RTM, 5*32+11
.equ X86_FEATURE_PQM, 5*32+12
.equ X86_FEATURE_NO_FPU_SEL, 5*32+13
.equ X86_FEATURE_MPX, 5*32+14
.equ X86_FEATURE_PQE, 5*32+15
.equ X86_FEATURE_AVX512F, 5*32+16
.equ X86_FEATURE_AVX512DQ, 5*32+17
.equ X86_FEATURE_RDSEED, 5*32+18
.equ X86_FEATURE_ADX, 5*32+19
.equ X86_FEATURE_SMAP, 5*32+20
.equ X86_FEATURE_AVX512_IFMA, 5*32+21
.equ X86_FEATURE_CLFLUSHOPT, 5*32+23
.equ X86_FEATURE_CLWB, 5*32+24
.equ X86_FEATURE_AVX512PF, 5*32+26
.equ X86_FEATURE_AVX512ER, 5*32+27
.equ X86_FEATURE_AVX512CD, 5*32+28
.equ X86_FEATURE_SHA, 5*32+29
.equ X86_FEATURE_AVX512BW, 5*32+30
.equ X86_FEATURE_AVX512VL, 5*32+31
.equ X86_FEATURE_PREFETCHWT1, 6*32+ 0
.equ X86_FEATURE_AVX512_VBMI, 6*32+ 1
.equ X86_FEATURE_UMIP, 6*32+ 2
.equ X86_FEATURE_PKU, 6*32+ 3
.equ X86_FEATURE_OSPKE, 6*32+ 4
.equ X86_FEATURE_AVX512_VBMI2, 6*32+ 6
.equ X86_FEATURE_GFNI, 6*32+ 8
.equ X86_FEATURE_VAES, 6*32+ 9
.equ X86_FEATURE_VPCLMULQDQ, 6*32+10
.equ X86_FEATURE_AVX512_VNNI, 6*32+11
.equ X86_FEATURE_AVX512_BITALG, 6*32+12
.equ X86_FEATURE_AVX512_VPOPCNTDQ, 6*32+14
.equ X86_FEATURE_RDPID, 6*32+22
.equ X86_FEATURE_CLDEMOTE, 6*32+25
.equ X86_FEATURE_ITSC, 7*32+ 8
.equ X86_FEATURE_EFRO, 7*32+10
.equ X86_FEATURE_CLZERO, 8*32+ 0
.equ X86_FEATURE_RSTR_FP_ERR_PTRS, 8*32+ 2
.equ X86_FEATURE_WBNOINVD, 8*32+ 9
.equ X86_FEATURE_IBPB, 8*32+12
.equ X86_FEATURE_AVX512_4VNNIW, 9*32+ 2
.equ X86_FEATURE_AVX512_4FMAPS, 9*32+ 3
.equ X86_FEATURE_MD_CLEAR, 9*32+10
.equ X86_FEATURE_TSX_FORCE_ABORT, 9*32+13
.equ X86_FEATURE_IBRSB, 9*32+26
.equ X86_FEATURE_STIBP, 9*32+27
.equ X86_FEATURE_L1D_FLUSH, 9*32+28
.equ X86_FEATURE_ARCH_CAPS, 9*32+29
.equ X86_FEATURE_SSBD, 9*32+31
.equ X86_FEATURE_AVX512_BF16, 10*32+ 5
.equ X86_FEATURE_CONSTANT_TSC, (11 * 32 + (0))
.equ X86_FEATURE_NONSTOP_TSC, (11 * 32 + (1))
.equ X86_FEATURE_ARAT, (11 * 32 + (2))
.equ X86_FEATURE_ARCH_PERFMON, (11 * 32 + (3))
.equ X86_FEATURE_TSC_RELIABLE, (11 * 32 + (4))
.equ X86_FEATURE_XTOPOLOGY, (11 * 32 + (5))
.equ X86_FEATURE_CPUID_FAULTING, (11 * 32 + (6))
.equ X86_FEATURE_CLFLUSH_MONITOR, (11 * 32 + (7))
.equ X86_FEATURE_APERFMPERF, (11 * 32 + (8))
.equ X86_FEATURE_MFENCE_RDTSC, (11 * 32 + (9))
.equ X86_FEATURE_XEN_SMEP, (11 * 32 + (10))
.equ X86_FEATURE_XEN_SMAP, (11 * 32 + (11))
.equ X86_FEATURE_LFENCE_DISPATCH, (11 * 32 + (12))
.equ X86_FEATURE_IND_THUNK_LFENCE, (11 * 32 + (13))
.equ X86_FEATURE_IND_THUNK_JMP, (11 * 32 + (14))
.equ X86_FEATURE_SC_BRANCH_HARDEN, (11 * 32 + (15))
.equ X86_FEATURE_SC_MSR_PV, (11 * 32 + (16))
.equ X86_FEATURE_SC_MSR_HVM, (11 * 32 + (17))
.equ X86_FEATURE_SC_RSB_PV, (11 * 32 + (18))
.equ X86_FEATURE_SC_RSB_HVM, (11 * 32 + (19))
.equ X86_FEATURE_XEN_SELFSNOOP, (11 * 32 + (20))
.equ X86_FEATURE_SC_MSR_IDLE, (11 * 32 + (21))
.equ X86_FEATURE_XEN_LBR, (11 * 32 + (22))
.equ X86_FEATURE_SC_VERW_PV, (11 * 32 + (23))
.equ X86_FEATURE_SC_VERW_HVM, (11 * 32 + (24))
.equ X86_FEATURE_SC_VERW_IDLE, (11 * 32 + (25))
.include "/root/faultxen/xen/include/asm-x86/asm-macros.h"
	.equ CONFIG_INDIRECT_THUNK, 0
	.include "asm/indirect_thunk_asm.h"

                                        # End of file scope inline assembly
	.hidden	__dummy__               # -- Begin function __dummy__
	.globl	__dummy__
	.p2align	4, 0x90
	.type	__dummy__,@function
__dummy__:                              # @__dummy__
# %bb.0:
	#APP
	
.ascii"==>#define UREGS_r15 $0 /* offsetof(struct cpu_user_regs, r15) */<=="
	#NO_APP
	#APP
	
.ascii"==>#define UREGS_r14 $8 /* offsetof(struct cpu_user_regs, r14) */<=="
	#NO_APP
	#APP
	
.ascii"==>#define UREGS_r13 $16 /* offsetof(struct cpu_user_regs, r13) */<=="
	#NO_APP
	#APP
	
.ascii"==>#define UREGS_r12 $24 /* offsetof(struct cpu_user_regs, r12) */<=="
	#NO_APP
	#APP
	
.ascii"==>#define UREGS_rbp $32 /* offsetof(struct cpu_user_regs, rbp) */<=="
	#NO_APP
	#APP
	
.ascii"==>#define UREGS_rbx $40 /* offsetof(struct cpu_user_regs, rbx) */<=="
	#NO_APP
	#APP
	
.ascii"==>#define UREGS_r11 $48 /* offsetof(struct cpu_user_regs, r11) */<=="
	#NO_APP
	#APP
	
.ascii"==>#define UREGS_r10 $56 /* offsetof(struct cpu_user_regs, r10) */<=="
	#NO_APP
	#APP
	
.ascii"==>#define UREGS_r9 $64 /* offsetof(struct cpu_user_regs, r9) */<=="
	#NO_APP
	#APP
	
.ascii"==>#define UREGS_r8 $72 /* offsetof(struct cpu_user_regs, r8) */<=="
	#NO_APP
	#APP
	
.ascii"==>#define UREGS_rax $80 /* offsetof(struct cpu_user_regs, rax) */<=="
	#NO_APP
	#APP
	
.ascii"==>#define UREGS_rcx $88 /* offsetof(struct cpu_user_regs, rcx) */<=="
	#NO_APP
	#APP
	
.ascii"==>#define UREGS_rdx $96 /* offsetof(struct cpu_user_regs, rdx) */<=="
	#NO_APP
	#APP
	
.ascii"==>#define UREGS_rsi $104 /* offsetof(struct cpu_user_regs, rsi) */<=="
	#NO_APP
	#APP
	
.ascii"==>#define UREGS_rdi $112 /* offsetof(struct cpu_user_regs, rdi) */<=="
	#NO_APP
	#APP
	
.ascii"==>#define UREGS_error_code $120 /* offsetof(struct cpu_user_regs, error_code) */<=="
	#NO_APP
	#APP
	
.ascii"==>#define UREGS_entry_vector $124 /* offsetof(struct cpu_user_regs, entry_vector) */<=="
	#NO_APP
	#APP
	
.ascii"==>#define UREGS_rip $128 /* offsetof(struct cpu_user_regs, rip) */<=="
	#NO_APP
	#APP
	
.ascii"==>#define UREGS_cs $136 /* offsetof(struct cpu_user_regs, cs) */<=="
	#NO_APP
	#APP
	
.ascii"==>#define UREGS_eflags $144 /* offsetof(struct cpu_user_regs, rflags) */<=="
	#NO_APP
	#APP
	
.ascii"==>#define UREGS_rsp $152 /* offsetof(struct cpu_user_regs, rsp) */<=="
	#NO_APP
	#APP
	
.ascii"==>#define UREGS_ss $160 /* offsetof(struct cpu_user_regs, ss) */<=="
	#NO_APP
	#APP
	
.ascii"==>#define UREGS_kernel_sizeof $168 /* offsetof(struct cpu_user_regs, es) */<=="
	#NO_APP
	#APP
	
.ascii"==><=="
	#NO_APP
	#APP
	
.ascii"==>#define VCPU_processor $4 /* offsetof(struct vcpu, processor) */<=="
	#NO_APP
	#APP
	
.ascii"==>#define VCPU_domain $16 /* offsetof(struct vcpu, domain) */<=="
	#NO_APP
	#APP
	
.ascii"==>#define VCPU_vcpu_info $8 /* offsetof(struct vcpu, vcpu_info) */<=="
	#NO_APP
	#APP
	
.ascii"==>#define VCPU_trap_bounce $1448 /* offsetof(struct vcpu, arch.pv.trap_bounce) */<=="
	#NO_APP
	#APP
	
.ascii"==>#define VCPU_thread_flags $904 /* offsetof(struct vcpu, arch.flags) */<=="
	#NO_APP
	#APP
	
.ascii"==>#define VCPU_event_addr $1376 /* offsetof(struct vcpu, arch.pv.event_callback_eip) */<=="
	#NO_APP
	#APP
	
.ascii"==>#define VCPU_event_sel $1392 /* offsetof(struct vcpu, arch.pv.event_callback_cs) */<=="
	#NO_APP
	#APP
	
.ascii"==>#define VCPU_syscall_addr $1392 /* offsetof(struct vcpu, arch.pv.syscall_callback_eip) */<=="
	#NO_APP
	#APP
	
.ascii"==>#define VCPU_syscall32_addr $1400 /* offsetof(struct vcpu, arch.pv.syscall32_callback_eip) */<=="
	#NO_APP
	#APP
	
.ascii"==>#define VCPU_syscall32_sel $1416 /* offsetof(struct vcpu, arch.pv.syscall32_callback_cs) */<=="
	#NO_APP
	#APP
	
.ascii"==>#define VCPU_syscall32_disables_events $1420 /* offsetof(struct vcpu, arch.pv.syscall32_disables_events) */<=="
	#NO_APP
	#APP
	
.ascii"==>#define VCPU_sysenter_addr $1408 /* offsetof(struct vcpu, arch.pv.sysenter_callback_eip) */<=="
	#NO_APP
	#APP
	
.ascii"==>#define VCPU_sysenter_sel $1418 /* offsetof(struct vcpu, arch.pv.sysenter_callback_cs) */<=="
	#NO_APP
	#APP
	
.ascii"==>#define VCPU_sysenter_disables_events $1421 /* offsetof(struct vcpu, arch.pv.sysenter_disables_events) */<=="
	#NO_APP
	#APP
	
.ascii"==>#define VCPU_trap_ctxt $1160 /* offsetof(struct vcpu, arch.pv.trap_ctxt) */<=="
	#NO_APP
	#APP
	
.ascii"==>#define VCPU_kernel_sp $1304 /* offsetof(struct vcpu, arch.pv.kernel_sp) */<=="
	#NO_APP
	#APP
	
.ascii"==>#define VCPU_kernel_ss $1296 /* offsetof(struct vcpu, arch.pv.kernel_ss) */<=="
	#NO_APP
	#APP
	
.ascii"==>#define VCPU_iopl $1476 /* offsetof(struct vcpu, arch.pv.iopl) */<=="
	#NO_APP
	#APP
	
.ascii"==>#define VCPU_guest_context_flags $648 /* offsetof(struct vcpu, arch.vgc_flags) */<=="
	#NO_APP
	#APP
	
.ascii"==>#define VCPU_cr3 $2960 /* offsetof(struct vcpu, arch.cr3) */<=="
	#NO_APP
	#APP
	
.ascii"==>#define VCPU_arch_msrs $3480 /* offsetof(struct vcpu, arch.msrs) */<=="
	#NO_APP
	#APP
	
.ascii"==>#define VCPU_nmi_pending $274 /* offsetof(struct vcpu, async_exception_state[(1)-1].pending) */<=="
	#NO_APP
	#APP
	
.ascii"==>#define VCPU_mce_pending $276 /* offsetof(struct vcpu, async_exception_state[(2)-1].pending) */<=="
	#NO_APP
	#APP
	
.ascii"==>#define VCPU_nmi_old_mask $275 /* offsetof(struct vcpu, async_exception_state[(1)-1].old_mask) */<=="
	#NO_APP
	#APP
	
.ascii"==>#define VCPU_mce_old_mask $277 /* offsetof(struct vcpu, async_exception_state[(2)-1].old_mask) */<=="
	#NO_APP
	#APP
	
.ascii"==>#define VCPU_async_exception_mask $278 /* offsetof(struct vcpu, async_exception_mask) */<=="
	#NO_APP
	#APP
	
.ascii"==>#define VCPU_TRAP_NMI $1 /* VCPU_TRAP_NMI */<=="
	#NO_APP
	#APP
	
.ascii"==>#define VCPU_TRAP_MCE $2 /* VCPU_TRAP_MCE */<=="
	#NO_APP
	#APP
	
.ascii"==>#define _VGCF_syscall_disables_events $4 /* _VGCF_syscall_disables_events */<=="
	#NO_APP
	#APP
	
.ascii"==><=="
	#NO_APP
	#APP
	
.ascii"==>#define VCPU_svm_vmcb_pa $1480 /* offsetof(struct vcpu, arch.hvm.svm.vmcb_pa) */<=="
	#NO_APP
	#APP
	
.ascii"==>#define VCPU_svm_vmcb $1472 /* offsetof(struct vcpu, arch.hvm.svm.vmcb) */<=="
	#NO_APP
	#APP
	
.ascii"==><=="
	#NO_APP
	#APP
	
.ascii"==>#define VCPU_vmx_launched $1516 /* offsetof(struct vcpu, arch.hvm.vmx.launched) */<=="
	#NO_APP
	#APP
	
.ascii"==>#define VCPU_vmx_realmode $1737 /* offsetof(struct vcpu, arch.hvm.vmx.vmx_realmode) */<=="
	#NO_APP
	#APP
	
.ascii"==>#define VCPU_vmx_emulate $1738 /* offsetof(struct vcpu, arch.hvm.vmx.vmx_emulate) */<=="
	#NO_APP
	#APP
	
.ascii"==>#define VCPU_vm86_seg_mask $1740 /* offsetof(struct vcpu, arch.hvm.vmx.vm86_segment_mask) */<=="
	#NO_APP
	#APP
	
.ascii"==>#define VCPU_hvm_guest_cr2 $1040 /* offsetof(struct vcpu, arch.hvm.guest_cr[2]) */<=="
	#NO_APP
	#APP
	
.ascii"==><=="
	#NO_APP
	#APP
	
.ascii"==>#define VCPU_nhvm_guestmode $1960 /* offsetof(struct vcpu, arch.hvm.nvcpu.nv_guestmode) */<=="
	#NO_APP
	#APP
	
.ascii"==>#define VCPU_nhvm_p2m $2192 /* offsetof(struct vcpu, arch.hvm.nvcpu.nv_p2m) */<=="
	#NO_APP
	#APP
	
.ascii"==>#define VCPU_nsvm_hap_enabled $2148 /* offsetof(struct vcpu, arch.hvm.nvcpu.u.nsvm.ns_hap_enabled) */<=="
	#NO_APP
	#APP
	
.ascii"==><=="
	#NO_APP
	#APP
	
.ascii"==>#define DOMAIN_is_32bit_pv $2248 /* offsetof(struct domain, arch.is_32bit_pv) */<=="
	#NO_APP
	#APP
	
.ascii"==><=="
	#NO_APP
	#APP
	
.ascii"==>#define VCPUINFO_upcall_pending $0 /* offsetof(struct vcpu_info, evtchn_upcall_pending) */<=="
	#NO_APP
	#APP
	
.ascii"==>#define VCPUINFO_upcall_mask $1 /* offsetof(struct vcpu_info, evtchn_upcall_mask) */<=="
	#NO_APP
	#APP
	
.ascii"==><=="
	#NO_APP
	#APP
	
.ascii"==>#define COMPAT_VCPUINFO_upcall_pending $0 /* offsetof(struct compat_vcpu_info, evtchn_upcall_pending) */<=="
	#NO_APP
	#APP
	
.ascii"==>#define COMPAT_VCPUINFO_upcall_mask $1 /* offsetof(struct compat_vcpu_info, evtchn_upcall_mask) */<=="
	#NO_APP
	#APP
	
.ascii"==><=="
	#NO_APP
	#APP
	
.ascii"==>#define CPUINFO_guest_cpu_user_regs $0 /* offsetof(struct cpu_info, guest_cpu_user_regs) */<=="
	#NO_APP
	#APP
	
.ascii"==>#define CPUINFO_verw_sel $204 /* offsetof(struct cpu_info, verw_sel) */<=="
	#NO_APP
	#APP
	
.ascii"==>#define CPUINFO_current_vcpu $208 /* offsetof(struct cpu_info, current_vcpu) */<=="
	#NO_APP
	#APP
	
.ascii"==>#define CPUINFO_cr4 $224 /* offsetof(struct cpu_info, cr4) */<=="
	#NO_APP
	#APP
	
.ascii"==>#define CPUINFO_xen_cr3 $232 /* offsetof(struct cpu_info, xen_cr3) */<=="
	#NO_APP
	#APP
	
.ascii"==>#define CPUINFO_pv_cr3 $240 /* offsetof(struct cpu_info, pv_cr3) */<=="
	#NO_APP
	#APP
	
.ascii"==>#define CPUINFO_shadow_spec_ctrl $248 /* offsetof(struct cpu_info, shadow_spec_ctrl) */<=="
	#NO_APP
	#APP
	
.ascii"==>#define CPUINFO_xen_spec_ctrl $252 /* offsetof(struct cpu_info, xen_spec_ctrl) */<=="
	#NO_APP
	#APP
	
.ascii"==>#define CPUINFO_spec_ctrl_flags $253 /* offsetof(struct cpu_info, spec_ctrl_flags) */<=="
	#NO_APP
	#APP
	
.ascii"==>#define CPUINFO_root_pgt_changed $254 /* offsetof(struct cpu_info, root_pgt_changed) */<=="
	#NO_APP
	#APP
	
.ascii"==>#define CPUINFO_use_pv_cr3 $255 /* offsetof(struct cpu_info, use_pv_cr3) */<=="
	#NO_APP
	#APP
	
.ascii"==>#define CPUINFO_sizeof $264 /* sizeof(struct cpu_info) */<=="
	#NO_APP
	#APP
	
.ascii"==><=="
	#NO_APP
	#APP
	
.ascii"==>#define TRAPINFO_eip $8 /* offsetof(struct trap_info, address) */<=="
	#NO_APP
	#APP
	
.ascii"==>#define TRAPINFO_cs $2 /* offsetof(struct trap_info, cs) */<=="
	#NO_APP
	#APP
	
.ascii"==>#define TRAPINFO_flags $1 /* offsetof(struct trap_info, flags) */<=="
	#NO_APP
	#APP
	
.ascii"==>#define TRAPINFO_sizeof $16 /* sizeof(struct trap_info) */<=="
	#NO_APP
	#APP
	
.ascii"==><=="
	#NO_APP
	#APP
	
.ascii"==>#define TRAPBOUNCE_error_code $0 /* offsetof(struct trap_bounce, error_code) */<=="
	#NO_APP
	#APP
	
.ascii"==>#define TRAPBOUNCE_flags $4 /* offsetof(struct trap_bounce, flags) */<=="
	#NO_APP
	#APP
	
.ascii"==>#define TRAPBOUNCE_cs $6 /* offsetof(struct trap_bounce, cs) */<=="
	#NO_APP
	#APP
	
.ascii"==>#define TRAPBOUNCE_eip $8 /* offsetof(struct trap_bounce, eip) */<=="
	#NO_APP
	#APP
	
.ascii"==><=="
	#NO_APP
	#APP
	
.ascii"==>#define VCPUMSR_spec_ctrl_raw $0 /* offsetof(struct vcpu_msrs, spec_ctrl.raw) */<=="
	#NO_APP
	#APP
	
.ascii"==><=="
	#NO_APP
	#APP
	
.ascii"==>#define IRQSTAT_shift $7 /* ilog2(sizeof(irq_cpustat_t)) */<=="
	#NO_APP
	#APP
	
.ascii"==>#define IRQSTAT_softirq_pending $0 /* offsetof(irq_cpustat_t, __softirq_pending) */<=="
	#NO_APP
	#APP
	
.ascii"==><=="
	#NO_APP
	#APP
	
.ascii"==>#define CPUINFO_features $12 /* offsetof(struct cpuinfo_x86, x86_capability) */<=="
	#NO_APP
	#APP
	
.ascii"==><=="
	#NO_APP
	#APP
	
.ascii"==>#define MB_flags $0 /* offsetof(multiboot_info_t, flags) */<=="
	#NO_APP
	#APP
	
.ascii"==>#define MB_cmdline $16 /* offsetof(multiboot_info_t, cmdline) */<=="
	#NO_APP
	#APP
	
.ascii"==>#define MB_mem_lower $4 /* offsetof(multiboot_info_t, mem_lower) */<=="
	#NO_APP
	#APP
	
.ascii"==><=="
	#NO_APP
	#APP
	
.ascii"==>#define MB2_fixed_sizeof $8 /* sizeof(multiboot2_fixed_t) */<=="
	#NO_APP
	#APP
	
.ascii"==>#define MB2_fixed_total_size $0 /* offsetof(multiboot2_fixed_t, total_size) */<=="
	#NO_APP
	#APP
	
.ascii"==>#define MB2_tag_type $0 /* offsetof(multiboot2_tag_t, type) */<=="
	#NO_APP
	#APP
	
.ascii"==>#define MB2_tag_size $4 /* offsetof(multiboot2_tag_t, size) */<=="
	#NO_APP
	#APP
	
.ascii"==>#define MB2_load_base_addr $8 /* offsetof(multiboot2_tag_load_base_addr_t, load_base_addr) */<=="
	#NO_APP
	#APP
	
.ascii"==>#define MB2_mem_lower $8 /* offsetof(multiboot2_tag_basic_meminfo_t, mem_lower) */<=="
	#NO_APP
	#APP
	
.ascii"==>#define MB2_efi64_st $8 /* offsetof(multiboot2_tag_efi64_t, pointer) */<=="
	#NO_APP
	#APP
	
.ascii"==>#define MB2_efi64_ih $8 /* offsetof(multiboot2_tag_efi64_ih_t, pointer) */<=="
	#NO_APP
	#APP
	
.ascii"==><=="
	#NO_APP
	#APP
	
.ascii"==>#define l2_identmap_sizeof $16384 /* sizeof(l2_identmap) */<=="
	#NO_APP
	#APP
	
.ascii"==><=="
	#NO_APP
	#APP
	
.ascii"==>#define DOMAIN_vm_assist $504 /* offsetof(struct domain, vm_assist) */<=="
	#NO_APP
	retq
.Lfunc_end0:
	.size	__dummy__, .Lfunc_end0-__dummy__
                                        # -- End function

	.ident	"clang version 9.0.1-+20191211082622+c1a0a213378-1~exp1~20191211193200.102 "
	.section	".note.GNU-stack","",@progbits
