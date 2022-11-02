#ifndef _USER_PCAP01_H_
#define _USER_PCAP01_H_

#include "wm_type_def.h"

#define PCAP01_WRITE        0xA0    // PCAP01 写地址
#define PCAP01_READ         0xA1    // PCAP01 读地址

/* 8bit 操作指令*/
#define PCAP01_POWER_RESET  0x88    // 上电复位
#define PCAP01_SOFT_RESET   0x8A    // 软复位，SRAM和寄存器保持不变     
#define PCAP01_END_OTP      0x84    // 终止 write-to-OTP 进程
#define PCAP01_MEAS_CAP     0x8C    // 开始测量电容
#define PCAP01_MEAS_TEMP    0x8E    // 开始测量温度

/* 24bit 操作指令*/
#define PCAP01_WRITE_SRAM   0x9000  // 写Sram
#define PCAP01_READ_SRAM    0x1000  // 读Sram
#define PCAP01_WRITE_OTP    0x50    // 写OTP
#define PCAP01_READ_OTP     0x01    // 读OTP

/* 32bit 操作指令*/
#define PCAP01_WRITE_CFG    0xC0    // 写配置寄存器
#define PCAP01_READ_RES     0x40    // 读取测量结果


void pcap01_init(void);
float pcap01_read_res(uint8_t addr);

#endif
