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

#define  BITS_PRE_WORD 32
#define CMASK 0x1f
#define CSHIFT 5
#define cover_len 150000
#define fault_len 100

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

void fault_func_l1(void);

int willInject(int uid);
void report_xasan(char* addr, int64_t size, int64_t type);
void mark_valid(char* addr, int64_t size);
void mark_init_global(char* addr, int64_t size, int64_t hasInit);
void mark_hp_flag(char* addr, int64_t size);
void mark_hp_flag_r(char* addr, int64_t size);
void mark_invalid(char* addr, int64_t size, char type);
void mark_write_flag(char* addr, int64_t size);
void mark_write_flag_r(char* addr, int64_t size);

void enter_func(char* name, char* file);
void leave_func(void);

void* mem_to_shadow(void * addr, int* ord);
void* mem_to_mem_shadow(void * addr, int* ord);
void* mem_to_hp_flag_shadow(void * addr, int* ord);

struct err_trace
{
	int id;
	void* xasan_err_addr;
	int64_t xasan_err_size;
	int xasan_err_type;
	int xasan_ord;
	int xasan_shadow;
	char xasan_trace[20][100]; 
	int xasan_trace_pos; 
	int is_write;
};


extern int* fault_table;
extern int* fault_site;

extern void* shadow_base;
extern void* mem_shadow_base;
extern void* hp_flag_shadow_base;
extern int xasan_flag;
extern struct err_trace e_trace[20];
extern int e_id;
extern int size_flag;
extern char ary[5];
void add_cov(int uid);
extern long long int cover_index;

extern int* cover; 



typedef bool bool_t;
#define test_and_set_bool(b)   xchg(&(b), true)
#define test_and_clear_bool(b) xchg(&(b), false)

#endif /* __TYPES_H__ */
