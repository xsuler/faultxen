/*
 * Automatically generated by /root/xen-4.13.0/xen/../xen/tools/gen-cpuid.py - Do not edit!
 * Source data: /root/xen-4.13.0/xen/../xen/include/public/arch-x86/cpufeatureset.h
 */
#ifndef __XEN_X86__FEATURESET_DATA__
#define __XEN_X86__FEATURESET_DATA__

#define FEATURESET_NR_ENTRIES 11

#define CPUID_COMMON_1D_FEATURES 0x0183f3ffU

#define INIT_KNOWN_FEATURES { \
    0xbfebfbffU, \
    0xfffef3ffU, \
    0xee500800U, \
    0x2469bfffU, \
    0x0000000fU, \
    0xfdbfffffU, \
    0x02405f5fU, \
    0x00000500U, \
    0x00001205U, \
    0xbc00240cU, \
    0x00000020U, \
}

#define INIT_SPECIAL_FEATURES { \
    0x10000200U, \
    0x88200000U, \
    0x00000000U, \
    0x00000002U, \
    0x00000000U, \
    0x00002040U, \
    0x00000010U, \
    0x00000000U, \
    0x00000000U, \
    0x00000000U, \
    0x00000000U, \
}

#define INIT_PV_FEATURES { \
    0x1fc9cbf5U, \
    0xf6f83203U, \
    0xea500800U, \
    0x042109e3U, \
    0x00000007U, \
    0xfdaf0b39U, \
    0x02405f43U, \
    0x00000000U, \
    0x00001005U, \
    0x8c00040cU, \
    0x00000000U, \
}

#define INIT_HVM_SHADOW_FEATURES { \
    0x1fcbfbffU, \
    0xf7f83223U, \
    0xea500800U, \
    0x042109f7U, \
    0x0000000fU, \
    0xfdbf4bbbU, \
    0x02405f47U, \
    0x00000000U, \
    0x00001005U, \
    0x9c00040cU, \
    0x00000000U, \
}

#define INIT_HVM_HAP_FEATURES { \
    0x1fcbfbffU, \
    0xf7fa3223U, \
    0xee500800U, \
    0x042109f7U, \
    0x0000000fU, \
    0xfdbf4fbbU, \
    0x02405f4fU, \
    0x00000000U, \
    0x00001005U, \
    0x9c00040cU, \
    0x00000000U, \
}

#define NR_DEEP_DEPS 23U

#define INIT_DEEP_FEATURES { \
    0x07800259U, \
    0x16080203U, \
    0xa0100000U, \
    0x00000000U, \
    0x00000000U, \
    0x40010020U, \
    0x00000000U, \
    0x00000000U, \
    0x00000000U, \
    0x04000000U, \
    0x00000000U, \
}

#define INIT_DEEP_DEPS { \
    { 0x0U, /* FPU */ { \
        0x00800000U, \
        0x00000000U, \
        0xc0400000U, \
        0x00000000U, \
        0x00000000U, \
        0x00000000U, \
        0x00000000U, \
        0x00000000U, \
        0x00000000U, \
        0x00000000U, \
        0x00000000U, \
    }, }, \
    { 0x3U, /* PSE */ { \
        0x00020000U, \
        0x00000000U, \
        0x00000000U, \
        0x00000000U, \
        0x00000000U, \
        0x00000000U, \
        0x00000000U, \
        0x00000000U, \
        0x00000000U, \
        0x00000000U, \
        0x00000000U, \
    }, }, \
    { 0x4U, /* TSC */ { \
        0x00000000U, \
        0x01000000U, \
        0x08000000U, \
        0x00000000U, \
        0x00000000U, \
        0x00000002U, \
        0x00000000U, \
        0x00000100U, \
        0x00000000U, \
        0x00000000U, \
        0x00000000U, \
    }, }, \
    { 0x6U, /* PAE */ { \
        0x00000000U, \
        0x00022000U, \
        0x24100000U, \
        0x00000001U, \
        0x00000000U, \
        0x00100000U, \
        0x00000008U, \
        0x00000000U, \
        0x00000000U, \
        0x00000000U, \
        0x00000000U, \
    }, }, \
    { 0x9U, /* APIC */ { \
        0x00000000U, \
        0x01200000U, \
        0x00000000U, \
        0x00000008U, \
        0x00000000U, \
        0x00000000U, \
        0x00000000U, \
        0x00000000U, \
        0x00000000U, \
        0x00000000U, \
        0x00000000U, \
    }, }, \
    { 0x17U, /* MMX */ { \
        0x00000000U, \
        0x00000000U, \
        0xc0400000U, \
        0x00000000U, \
        0x00000000U, \
        0x00000000U, \
        0x00000000U, \
        0x00000000U, \
        0x00000000U, \
        0x00000000U, \
        0x00000000U, \
    }, }, \
    { 0x18U, /* FXSR */ { \
        0x06000000U, \
        0x021a2203U, \
        0x26000000U, \
        0x000000c1U, \
        0x00000000U, \
        0x20000000U, \
        0x00000708U, \
        0x00000000U, \
        0x00000000U, \
        0x00000000U, \
        0x00000000U, \
    }, }, \
    { 0x19U, /* SSE */ { \
        0x04000000U, \
        0x021a2203U, \
        0x24000000U, \
        0x000000c1U, \
        0x00000000U, \
        0x20000000U, \
        0x00000708U, \
        0x00000000U, \
        0x00000000U, \
        0x00000000U, \
        0x00000000U, \
    }, }, \
    { 0x1aU, /* SSE2 */ { \
        0x00000000U, \
        0x021a2203U, \
        0x24000000U, \
        0x00000041U, \
        0x00000000U, \
        0x20000000U, \
        0x00000708U, \
        0x00000000U, \
        0x00000000U, \
        0x00000000U, \
        0x00000000U, \
    }, }, \
    { 0x20U, /* SSE3 */ { \
        0x00000000U, \
        0x00180200U, \
        0x00000000U, \
        0x00000040U, \
        0x00000000U, \
        0x00000000U, \
        0x00000000U, \
        0x00000000U, \
        0x00000000U, \
        0x00000000U, \
        0x00000000U, \
    }, }, \
    { 0x21U, /* PCLMULQDQ */ { \
        0x00000000U, \
        0x00000000U, \
        0x00000000U, \
        0x00000000U, \
        0x00000000U, \
        0x00000000U, \
        0x00000400U, \
        0x00000000U, \
        0x00000000U, \
        0x00000000U, \
        0x00000000U, \
    }, }, \
    { 0x29U, /* SSSE3 */ { \
        0x00000000U, \
        0x00180000U, \
        0x00000000U, \
        0x00000000U, \
        0x00000000U, \
        0x00000000U, \
        0x00000000U, \
        0x00000000U, \
        0x00000000U, \
        0x00000000U, \
        0x00000000U, \
    }, }, \
    { 0x33U, /* SSE4_1 */ { \
        0x00000000U, \
        0x00100000U, \
        0x00000000U, \
        0x00000000U, \
        0x00000000U, \
        0x00000000U, \
        0x00000000U, \
        0x00000000U, \
        0x00000000U, \
        0x00000000U, \
        0x00000000U, \
    }, }, \
    { 0x39U, /* AESNI */ { \
        0x00000000U, \
        0x00000000U, \
        0x00000000U, \
        0x00000000U, \
        0x00000000U, \
        0x00000000U, \
        0x00000200U, \
        0x00000000U, \
        0x00000000U, \
        0x00000000U, \
        0x00000000U, \
    }, }, \
    { 0x3aU, /* XSAVE */ { \
        0x00000000U, \
        0x30001000U, \
        0x00000000U, \
        0x00018800U, \
        0x0000000fU, \
        0xdc234020U, \
        0x00005e4aU, \
        0x00000000U, \
        0x00000000U, \
        0x0000000cU, \
        0x00000020U, \
    }, }, \
    { 0x3cU, /* AVX */ { \
        0x00000000U, \
        0x20001000U, \
        0x00000000U, \
        0x00010800U, \
        0x00000000U, \
        0xdc230020U, \
        0x00005e42U, \
        0x00000000U, \
        0x00000000U, \
        0x0000000cU, \
        0x00000020U, \
    }, }, \
    { 0x54U, /* NX */ { \
        0x00000000U, \
        0x00000000U, \
        0x00000000U, \
        0x00000000U, \
        0x00000000U, \
        0x00100000U, \
        0x00000000U, \
        0x00000000U, \
        0x00000000U, \
        0x00000000U, \
        0x00000000U, \
    }, }, \
    { 0x5dU, /* LM */ { \
        0x00000000U, \
        0x00022000U, \
        0x04000000U, \
        0x00000001U, \
        0x00000000U, \
        0x00000000U, \
        0x00000008U, \
        0x00000000U, \
        0x00000000U, \
        0x00000000U, \
        0x00000000U, \
    }, }, \
    { 0x5fU, /* 3DNOW */ { \
        0x00000000U, \
        0x00000000U, \
        0x40000000U, \
        0x00000000U, \
        0x00000000U, \
        0x00000000U, \
        0x00000000U, \
        0x00000000U, \
        0x00000000U, \
        0x00000000U, \
        0x00000000U, \
    }, }, \
    { 0xa5U, /* AVX2 */ { \
        0x00000000U, \
        0x00000000U, \
        0x00000000U, \
        0x00000000U, \
        0x00000000U, \
        0xdc230000U, \
        0x00005e42U, \
        0x00000000U, \
        0x00000000U, \
        0x0000000cU, \
        0x00000020U, \
    }, }, \
    { 0xb0U, /* AVX512F */ { \
        0x00000000U, \
        0x00000000U, \
        0x00000000U, \
        0x00000000U, \
        0x00000000U, \
        0xdc220000U, \
        0x00005842U, \
        0x00000000U, \
        0x00000000U, \
        0x0000000cU, \
        0x00000020U, \
    }, }, \
    { 0xbeU, /* AVX512BW */ { \
        0x00000000U, \
        0x00000000U, \
        0x00000000U, \
        0x00000000U, \
        0x00000000U, \
        0x00000000U, \
        0x00001042U, \
        0x00000000U, \
        0x00000000U, \
        0x00000000U, \
        0x00000020U, \
    }, }, \
    { 0x13aU, /* IBRSB */ { \
        0x00000000U, \
        0x00000000U, \
        0x00000000U, \
        0x00000000U, \
        0x00000000U, \
        0x00000000U, \
        0x00000000U, \
        0x00000000U, \
        0x00000000U, \
        0x88000000U, \
        0x00000000U, \
    }, }, \
}

#define INIT_FEATURE_NAMES { \
    { "3dnow", 95U },\
    { "3dnowext", 94U },\
    { "3dnowprefetch", 104U },\
    { "abm", 101U },\
    { "acpi", 22U },\
    { "adx", 179U },\
    { "aesni", 57U },\
    { "apic", 9U },\
    { "arch-caps", 317U },\
    { "avx", 60U },\
    { "avx2", 165U },\
    { "avx512-4fmaps", 291U },\
    { "avx512-4vnniw", 290U },\
    { "avx512-bf16", 325U },\
    { "avx512-bitalg", 204U },\
    { "avx512-ifma", 181U },\
    { "avx512-vbmi", 193U },\
    { "avx512-vbmi2", 198U },\
    { "avx512-vnni", 203U },\
    { "avx512-vpopcntdq", 206U },\
    { "avx512bw", 190U },\
    { "avx512cd", 188U },\
    { "avx512dq", 177U },\
    { "avx512er", 187U },\
    { "avx512f", 176U },\
    { "avx512pf", 186U },\
    { "avx512vl", 191U },\
    { "bmi1", 163U },\
    { "bmi2", 168U },\
    { "cldemote", 217U },\
    { "clflush", 19U },\
    { "clflushopt", 183U },\
    { "clwb", 184U },\
    { "clzero", 256U },\
    { "cmov", 15U },\
    { "cmp-legacy", 97U },\
    { "cr8-legacy", 100U },\
    { "cx16", 45U },\
    { "cx8", 8U },\
    { "dbext", 122U },\
    { "dca", 50U },\
    { "de", 2U },\
    { "ds", 21U },\
    { "dscpl", 36U },\
    { "dtes64", 34U },\
    { "efro", 234U },\
    { "eist", 39U },\
    { "erms", 169U },\
    { "extapic", 99U },\
    { "f16c", 61U },\
    { "fdp-excp-only", 166U },\
    { "ffxsr", 89U },\
    { "fma", 44U },\
    { "fma4", 112U },\
    { "fpu", 0U },\
    { "fsgsbase", 160U },\
    { "fxsr", 24U },\
    { "gfni", 200U },\
    { "hle", 164U },\
    { "htt", 28U },\
    { "hypervisor", 63U },\
    { "ibpb", 268U },\
    { "ibrsb", 314U },\
    { "ibs", 106U },\
    { "invpcid", 170U },\
    { "itsc", 232U },\
    { "l1d-flush", 316U },\
    { "lahf-lm", 96U },\
    { "lm", 93U },\
    { "lwp", 111U },\
    { "mca", 14U },\
    { "mce", 7U },\
    { "md-clear", 298U },\
    { "misalignsse", 103U },\
    { "mmx", 23U },\
    { "mmxext", 86U },\
    { "monitor", 35U },\
    { "monitorx", 125U },\
    { "movbe", 54U },\
    { "mpx", 174U },\
    { "msr", 5U },\
    { "mtrr", 12U },\
    { "no-fpu-sel", 173U },\
    { "nodeid-msr", 115U },\
    { "nx", 84U },\
    { "ospke", 196U },\
    { "osvw", 105U },\
    { "osxsave", 59U },\
    { "pae", 6U },\
    { "page1gb", 90U },\
    { "pat", 16U },\
    { "pbe", 31U },\
    { "pcid", 49U },\
    { "pclmulqdq", 33U },\
    { "pdcm", 47U },\
    { "pge", 13U },\
    { "pku", 195U },\
    { "popcnt", 55U },\
    { "pqe", 175U },\
    { "pqm", 172U },\
    { "prefetchwt1", 192U },\
    { "pse", 3U },\
    { "pse36", 17U },\
    { "rdpid", 214U },\
    { "rdrand", 62U },\
    { "rdseed", 178U },\
    { "rdtscp", 91U },\
    { "rstr-fp-err-ptrs", 258U },\
    { "rtm", 171U },\
    { "sep", 11U },\
    { "sgx", 162U },\
    { "sha", 189U },\
    { "skinit", 108U },\
    { "smap", 180U },\
    { "smep", 167U },\
    { "smx", 38U },\
    { "ss", 27U },\
    { "ssbd", 319U },\
    { "sse", 25U },\
    { "sse2", 26U },\
    { "sse3", 32U },\
    { "sse4-1", 51U },\
    { "sse4-2", 52U },\
    { "sse4a", 102U },\
    { "ssse3", 41U },\
    { "stibp", 315U },\
    { "svm", 98U },\
    { "syscall", 75U },\
    { "tbm", 117U },\
    { "tm1", 29U },\
    { "tm2", 40U },\
    { "topoext", 118U },\
    { "tsc", 4U },\
    { "tsc-adjust", 161U },\
    { "tsc-deadline", 56U },\
    { "tsx-force-abort", 301U },\
    { "umip", 194U },\
    { "vaes", 201U },\
    { "vme", 1U },\
    { "vmx", 37U },\
    { "vpclmulqdq", 202U },\
    { "wbnoinvd", 265U },\
    { "wdt", 109U },\
    { "x2apic", 53U },\
    { "xgetbv1", 130U },\
    { "xop", 107U },\
    { "xsave", 58U },\
    { "xsavec", 129U },\
    { "xsaveopt", 128U },\
    { "xsaves", 131U },\
    { "xtpr", 46U },\
}

#define CPUID_BITFIELD_0 \
    bool fpu:1, vme:1, de:1, pse:1, tsc:1, msr:1, pae:1, mce:1, cx8:1, :1, :1, sep:1, mtrr:1, pge:1, mca:1, cmov:1, pat:1, pse36:1, :1, clflush:1, :1, ds:1, acpi:1, mmx:1, fxsr:1, sse:1, sse2:1, ss:1, htt:1, tm1:1, :1, pbe:1

#define CPUID_BITFIELD_1 \
    bool sse3:1, pclmulqdq:1, dtes64:1, monitor:1, dscpl:1, vmx:1, smx:1, eist:1, tm2:1, ssse3:1, :1, :1, fma:1, cx16:1, xtpr:1, pdcm:1, :1, pcid:1, dca:1, sse4_1:1, sse4_2:1, x2apic:1, movbe:1, popcnt:1, tsc_deadline:1, aesni:1, xsave:1, :1, avx:1, f16c:1, rdrand:1, hypervisor:1

#define CPUID_BITFIELD_2 \
    bool :1, :1, :1, :1, :1, :1, :1, :1, :1, :1, :1, syscall:1, :1, :1, :1, :1, :1, :1, :1, :1, nx:1, :1, mmxext:1, :1, :1, ffxsr:1, page1gb:1, rdtscp:1, :1, lm:1, _3dnowext:1, _3dnow:1

#define CPUID_BITFIELD_3 \
    bool lahf_lm:1, cmp_legacy:1, svm:1, extapic:1, cr8_legacy:1, abm:1, sse4a:1, misalignsse:1, _3dnowprefetch:1, osvw:1, ibs:1, xop:1, skinit:1, wdt:1, :1, lwp:1, fma4:1, :1, :1, nodeid_msr:1, :1, tbm:1, topoext:1, :1, :1, :1, dbext:1, :1, :1, monitorx:1, :1, :1

#define CPUID_BITFIELD_4 \
    bool xsaveopt:1, xsavec:1, xgetbv1:1, xsaves:1, :1, :1, :1, :1, :1, :1, :1, :1, :1, :1, :1, :1, :1, :1, :1, :1, :1, :1, :1, :1, :1, :1, :1, :1, :1, :1, :1, :1

#define CPUID_BITFIELD_5 \
    bool fsgsbase:1, tsc_adjust:1, sgx:1, bmi1:1, hle:1, avx2:1, fdp_excp_only:1, smep:1, bmi2:1, erms:1, invpcid:1, rtm:1, pqm:1, no_fpu_sel:1, mpx:1, pqe:1, avx512f:1, avx512dq:1, rdseed:1, adx:1, smap:1, avx512_ifma:1, :1, clflushopt:1, clwb:1, :1, avx512pf:1, avx512er:1, avx512cd:1, sha:1, avx512bw:1, avx512vl:1

#define CPUID_BITFIELD_6 \
    bool prefetchwt1:1, avx512_vbmi:1, umip:1, pku:1, :1, :1, avx512_vbmi2:1, :1, gfni:1, vaes:1, vpclmulqdq:1, avx512_vnni:1, avx512_bitalg:1, :1, avx512_vpopcntdq:1, :1, :1, :1, :1, :1, :1, :1, rdpid:1, :1, :1, cldemote:1, :1, :1, :1, :1, :1, :1

#define CPUID_BITFIELD_7 \
    bool :1, :1, :1, :1, :1, :1, :1, :1, itsc:1, :1, efro:1, :1, :1, :1, :1, :1, :1, :1, :1, :1, :1, :1, :1, :1, :1, :1, :1, :1, :1, :1, :1, :1

#define CPUID_BITFIELD_8 \
    bool clzero:1, :1, rstr_fp_err_ptrs:1, :1, :1, :1, :1, :1, :1, wbnoinvd:1, :1, :1, ibpb:1, :1, :1, :1, :1, :1, :1, :1, :1, :1, :1, :1, :1, :1, :1, :1, :1, :1, :1, :1

#define CPUID_BITFIELD_9 \
    bool :1, :1, avx512_4vnniw:1, avx512_4fmaps:1, :1, :1, :1, :1, :1, :1, md_clear:1, :1, :1, tsx_force_abort:1, :1, :1, :1, :1, :1, :1, :1, :1, :1, :1, :1, :1, ibrsb:1, stibp:1, l1d_flush:1, arch_caps:1, :1, ssbd:1

#define CPUID_BITFIELD_10 \
    bool :1, :1, :1, :1, :1, avx512_bf16:1, :1, :1, :1, :1, :1, :1, :1, :1, :1, :1, :1, :1, :1, :1, :1, :1, :1, :1, :1, :1, :1, :1, :1, :1, :1, :1


#endif /* __XEN_X86__FEATURESET_DATA__ */
