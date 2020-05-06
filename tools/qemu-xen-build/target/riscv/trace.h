/* This file is autogenerated by tracetool, do not edit. */

#ifndef TRACE_TARGET_RISCV_GENERATED_TRACERS_H
#define TRACE_TARGET_RISCV_GENERATED_TRACERS_H

#include "trace/control.h"

extern TraceEvent _TRACE_RISCV_TRAP_EVENT;
extern uint16_t _TRACE_RISCV_TRAP_DSTATE;
#define TRACE_RISCV_TRAP_ENABLED 1
#include "qemu/log-for-trace.h"


#define TRACE_RISCV_TRAP_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_RISCV_TRAP) || \
    false)

static inline void _nocheck__trace_riscv_trap(uint64_t hartid, bool async, uint64_t cause, uint64_t epc, uint64_t tval, const char * desc)
{
    if (trace_event_get_state(TRACE_RISCV_TRAP) && qemu_loglevel_mask(LOG_TRACE)) {
        struct timeval _now;
        gettimeofday(&_now, NULL);
        qemu_log("%d@%zu.%06zu:riscv_trap " "hart:%"PRId64", async:%d, cause:%"PRId64", epc:0x%"PRIx64", tval:0x%"PRIx64", desc=%s" "\n",
                 qemu_get_thread_id(),
                 (size_t)_now.tv_sec, (size_t)_now.tv_usec
                 , hartid, async, cause, epc, tval, desc);
    }
}

static inline void trace_riscv_trap(uint64_t hartid, bool async, uint64_t cause, uint64_t epc, uint64_t tval, const char * desc)
{
    if (true) {
        _nocheck__trace_riscv_trap(hartid, async, cause, epc, tval, desc);
    }
}
#endif /* TRACE_TARGET_RISCV_GENERATED_TRACERS_H */
