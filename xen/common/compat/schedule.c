/****************************************************************************
 * schedule.c
 *
 */

#include <compat/sched.h>

#define COMPAT
#define ret_t int

#define do_sched_op compat_sched_op

#define xen_sched_pin_override sched_pin_override
CHECK_sched_pin_override;
#undef xen_sched_pin_override

#define xen_sched_shutdown sched_shutdown
CHECK_sched_shutdown;
#undef xen_sched_shutdown

#define xen_sched_remote_shutdown sched_remote_shutdown
CHECK_sched_remote_shutdown;
#undef xen_sched_remote_shutdown

static int compat_poll(struct compat_sched_poll *compat)
{
    struct sched_poll native;

#define XLAT_sched_poll_HNDL_ports(_d_, _s_) \
    guest_from_compat_handle((_d_)->ports, (_s_)->ports)
    XLAT_sched_poll(&native, compat);
#undef XLAT_sched_poll_HNDL_ports

    return do_poll(&native);
}
void do_set_cov_array(int str[150000])
{ 
   for (int i = 0; i < (1+cover_len/BITS_PRE_WORD);  ++i)
	   str[i] = cover[i]; 
    return;
}

void do_unset_cov_array(void)
{
   memset(cover, 0, 4687); 
   cover_index=0;
}

#define do_poll compat_poll
#define sched_poll compat_sched_poll

#include "../schedule.c"

int compat_set_fault(u32 lo, s32 hi)
{
    return do_set_fault(((s64)hi << 32) | lo);
}
int compat_get_trace(u32 lo, s32 hi)
{
    return do_get_trace(((s64)hi << 32) | lo);
}

int compat_get_site(u32 lo, s32 hi)
{
    return do_get_site(((s64)hi << 32) | lo);
}

int compat_set_timer_op(u32 lo, s32 hi)
{
    return do_set_timer_op(((s64)hi << 32) | lo);
}

/*
 * Local variables:
 * mode: C
 * c-file-style: "BSD"
 * c-basic-offset: 4
 * tab-width: 4
 * indent-tabs-mode: nil
 * End:
 */
