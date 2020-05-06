/* This file is autogenerated by tracetool, do not edit. */

#include "qemu/osdep.h"
#include "trace.h"

uint16_t _TRACE_NRF51_GPIO_READ_DSTATE;
uint16_t _TRACE_NRF51_GPIO_WRITE_DSTATE;
uint16_t _TRACE_NRF51_GPIO_SET_DSTATE;
uint16_t _TRACE_NRF51_GPIO_UPDATE_OUTPUT_IRQ_DSTATE;
TraceEvent _TRACE_NRF51_GPIO_READ_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "nrf51_gpio_read",
    .sstate = TRACE_NRF51_GPIO_READ_ENABLED,
    .dstate = &_TRACE_NRF51_GPIO_READ_DSTATE 
};
TraceEvent _TRACE_NRF51_GPIO_WRITE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "nrf51_gpio_write",
    .sstate = TRACE_NRF51_GPIO_WRITE_ENABLED,
    .dstate = &_TRACE_NRF51_GPIO_WRITE_DSTATE 
};
TraceEvent _TRACE_NRF51_GPIO_SET_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "nrf51_gpio_set",
    .sstate = TRACE_NRF51_GPIO_SET_ENABLED,
    .dstate = &_TRACE_NRF51_GPIO_SET_DSTATE 
};
TraceEvent _TRACE_NRF51_GPIO_UPDATE_OUTPUT_IRQ_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "nrf51_gpio_update_output_irq",
    .sstate = TRACE_NRF51_GPIO_UPDATE_OUTPUT_IRQ_ENABLED,
    .dstate = &_TRACE_NRF51_GPIO_UPDATE_OUTPUT_IRQ_DSTATE 
};
TraceEvent *hw_gpio_trace_events[] = {
    &_TRACE_NRF51_GPIO_READ_EVENT,
    &_TRACE_NRF51_GPIO_WRITE_EVENT,
    &_TRACE_NRF51_GPIO_SET_EVENT,
    &_TRACE_NRF51_GPIO_UPDATE_OUTPUT_IRQ_EVENT,
  NULL,
};

static void trace_hw_gpio_register_events(void)
{
    trace_event_register_group(hw_gpio_trace_events);
}
trace_init(trace_hw_gpio_register_events)
