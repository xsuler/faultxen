/* This file is autogenerated by tracetool, do not edit. */

#include "qemu/osdep.h"
#include "trace.h"

uint16_t _TRACE_PVRDMA_REGS_READ_DSTATE;
uint16_t _TRACE_PVRDMA_REGS_WRITE_DSTATE;
uint16_t _TRACE_PVRDMA_UAR_WRITE_DSTATE;
uint16_t _TRACE_PVRDMA_MAP_TO_PDIR_HOST_VIRT_DSTATE;
uint16_t _TRACE_PVRDMA_MAP_TO_PDIR_NEXT_PAGE_DSTATE;
uint16_t _TRACE_PVRDMA_EXEC_CMD_DSTATE;
uint16_t _TRACE_PVRDMA_RING_NEXT_ELEM_READ_NO_DATA_DSTATE;
uint16_t _TRACE_PVRDMA_POST_CQE_DSTATE;
TraceEvent _TRACE_PVRDMA_REGS_READ_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "pvrdma_regs_read",
    .sstate = TRACE_PVRDMA_REGS_READ_ENABLED,
    .dstate = &_TRACE_PVRDMA_REGS_READ_DSTATE 
};
TraceEvent _TRACE_PVRDMA_REGS_WRITE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "pvrdma_regs_write",
    .sstate = TRACE_PVRDMA_REGS_WRITE_ENABLED,
    .dstate = &_TRACE_PVRDMA_REGS_WRITE_DSTATE 
};
TraceEvent _TRACE_PVRDMA_UAR_WRITE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "pvrdma_uar_write",
    .sstate = TRACE_PVRDMA_UAR_WRITE_ENABLED,
    .dstate = &_TRACE_PVRDMA_UAR_WRITE_DSTATE 
};
TraceEvent _TRACE_PVRDMA_MAP_TO_PDIR_HOST_VIRT_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "pvrdma_map_to_pdir_host_virt",
    .sstate = TRACE_PVRDMA_MAP_TO_PDIR_HOST_VIRT_ENABLED,
    .dstate = &_TRACE_PVRDMA_MAP_TO_PDIR_HOST_VIRT_DSTATE 
};
TraceEvent _TRACE_PVRDMA_MAP_TO_PDIR_NEXT_PAGE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "pvrdma_map_to_pdir_next_page",
    .sstate = TRACE_PVRDMA_MAP_TO_PDIR_NEXT_PAGE_ENABLED,
    .dstate = &_TRACE_PVRDMA_MAP_TO_PDIR_NEXT_PAGE_DSTATE 
};
TraceEvent _TRACE_PVRDMA_EXEC_CMD_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "pvrdma_exec_cmd",
    .sstate = TRACE_PVRDMA_EXEC_CMD_ENABLED,
    .dstate = &_TRACE_PVRDMA_EXEC_CMD_DSTATE 
};
TraceEvent _TRACE_PVRDMA_RING_NEXT_ELEM_READ_NO_DATA_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "pvrdma_ring_next_elem_read_no_data",
    .sstate = TRACE_PVRDMA_RING_NEXT_ELEM_READ_NO_DATA_ENABLED,
    .dstate = &_TRACE_PVRDMA_RING_NEXT_ELEM_READ_NO_DATA_DSTATE 
};
TraceEvent _TRACE_PVRDMA_POST_CQE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "pvrdma_post_cqe",
    .sstate = TRACE_PVRDMA_POST_CQE_ENABLED,
    .dstate = &_TRACE_PVRDMA_POST_CQE_DSTATE 
};
TraceEvent *hw_rdma_vmw_trace_events[] = {
    &_TRACE_PVRDMA_REGS_READ_EVENT,
    &_TRACE_PVRDMA_REGS_WRITE_EVENT,
    &_TRACE_PVRDMA_UAR_WRITE_EVENT,
    &_TRACE_PVRDMA_MAP_TO_PDIR_HOST_VIRT_EVENT,
    &_TRACE_PVRDMA_MAP_TO_PDIR_NEXT_PAGE_EVENT,
    &_TRACE_PVRDMA_EXEC_CMD_EVENT,
    &_TRACE_PVRDMA_RING_NEXT_ELEM_READ_NO_DATA_EVENT,
    &_TRACE_PVRDMA_POST_CQE_EVENT,
  NULL,
};

static void trace_hw_rdma_vmw_register_events(void)
{
    trace_event_register_group(hw_rdma_vmw_trace_events);
}
trace_init(trace_hw_rdma_vmw_register_events)
