#ifndef _USER_BLE_H_
#define _USER_BLE_H_

#include "wm_type_def.h"


typedef void (*ble_server_event_callback_t)(uint8_t*, int);
typedef void (*ble_scan_event_callback_t)(uint8_t*);

void user_ble_enable(void);

void user_ble_server_send_data(uint8_t *data, int length);
void user_ble_server_start(ble_server_event_callback_t callback);

void user_ble_scan_start(ble_scan_event_callback_t callback);

#endif
