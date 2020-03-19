#ifndef __TYPES_H__
#define __TYPES_H__

#include <xen/stdbool.h>

#include <asm/types.h>

#define BITS_TO_LONGS(bits) \
    (((bits)+BITS_PER_LONG-1)/BITS_PER_LONG)
#define DECLARE_BITMAP(name,bits) \
    unsigned long name[BITS_TO_LONGS(bits)]

#ifndef NULL
#define NULL ((void*)0)
#endif

#define INT8_MIN        (-127-1)
#define INT16_MIN       (-32767-1)
#define INT32_MIN       (-2147483647-1)

#define INT8_MAX        (127)
#define INT16_MAX       (32767)
#define INT32_MAX       (2147483647)

#define UINT8_MAX       (255)
#define UINT16_MAX      (65535)
#define UINT32_MAX      (4294967295U)

#define INT_MAX         ((int)(~0U>>1))
#define INT_MIN         (-INT_MAX - 1)
#define UINT_MAX        (~0U)
#define LONG_MAX        ((long)(~0UL>>1))
#define LONG_MIN        (-LONG_MAX - 1)
#define ULONG_MAX       (~0UL)

typedef         __u8            uint8_t;
typedef         __s8            int8_t;

typedef         __u16           uint16_t;
typedef         __s16           int16_t;

typedef         __u32           uint32_t;
typedef         __s32           int32_t;

typedef         __u64           uint64_t;
typedef         __s64           int64_t;

typedef __u16 __le16;
typedef __u16 __be16;
typedef __u32 __le32;
typedef __u32 __be32;
typedef __u64 __le64;
typedef __u64 __be64;

typedef unsigned int __attribute__((__mode__(__pointer__))) uintptr_t;

int willInject(int uid);
void report_xasan(int64_t* addr, int64_t size, int64_t type);
void report_action(int64_t* addr, int64_t size, int64_t type);
void mark_valid(int64_t* addr, int64_t size);
void mark_invalid(int64_t* addr, int64_t size);

void enter_func(char* name);
void leave_func(void);


struct err_trace
{
	void* xasan_err_addr;
	int64_t xasan_err_size;
	int xasan_err_type;
	int xasan_ord;
	int xasan_shadow;
	char xasan_trace[20][100]; 
	int xasan_trace_pos; 
};


extern long long int fault_table;
extern long long int fault_counter;
extern void* shadow_base;
extern int xasan_flag;
extern struct err_trace e_trace;

inline void* mem_to_shadow(void * addr, int* ord){
    int64_t* paddr;
    void* shadow=0;
    if(shadow_base){
	paddr = addr  - 0xffff830130000000;
	*ord=((int)paddr&7);
	if((unsigned long)addr>(unsigned long)shadow_base+(GB(1)>>3)){
		shadow = ((long)(paddr-(GB(1)>>3))>>3)+shadow_base;
	}
	else{
		shadow = ((long)paddr>>3)+shadow_base;
	}
	if((unsigned long)shadow>(unsigned long)shadow_base+(GB(1)>>3)||(unsigned long)shadow<(unsigned long)shadow_base){
		return 0;
	}
	return shadow;
    }
    else{
	    return 0;
    }
}


typedef bool bool_t;
#define test_and_set_bool(b)   xchg(&(b), true)
#define test_and_clear_bool(b) xchg(&(b), false)

#endif /* __TYPES_H__ */
