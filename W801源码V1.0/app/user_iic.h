#ifndef _USER_IIC_H_
#define _USER_IIC_H_

#include "wm_type_def.h"
#include "wm_osal.h"

#define delay_us(a)     tls_os_time_delay(a/10000)


void user_iic_start(void);
void user_iic_stop(void);
void user_iic_send_byte(uint8_t data);
uint8_t user_iic_wait_ack(void);
uint8_t user_iic_read_byte(bool ack);
void user_iic_pin_cfg(uint8_t sda_pin, uint8_t scl_pin);

#endif
