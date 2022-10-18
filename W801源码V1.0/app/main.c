/***************************************************************************** 
* 
* File Name : main.c
* 
* Description: main 
* 
* Copyright (c) 2014 Winner Micro Electronic Design Co., Ltd. 
* All rights reserved. 
* 
* Author : dave
* 
* Date : 2014-6-14
*****************************************************************************/ 
#include "wm_include.h"
#include "wm_watchdog.h"
#include "user_pcap01.h"
#include "user_iic.h"
#include "wm_timer.h"
#include "cJSON.h"

#define WTD_FEED_INTERVAL 		(1000)
static tls_os_timer_t *gWatchDogFeed = NULL;

static void watchDogFeed(void *ptmr, void *parg)
{
	tls_watchdog_clr();
}
/*
*	初始化看门狗
*/
static void watchDogInit(void)
{
	// 初始化看门狗
	 tls_watchdog_init(5 * 1000 * 1000);
	// 创建喂狗定时器
	tls_os_timer_create(&gWatchDogFeed, watchDogFeed, NULL, WTD_FEED_INTERVAL, TRUE, NULL);
	// 启动喂狗定时器
	tls_os_timer_start(gWatchDogFeed);
}

void UserMain(void)
{	 
    u32 Cap_ref=1000;
	double cs;
	watchDogInit();//初始化看门狗
	printf("\r\n测试开始\r\n");	
	pcap01_init(); //初始化PCAP01	  
			
	while(1)
	{
		cs=(pcap01_read_res(1)/2097152)*Cap_ref;
		delay_us(20*1000);//10ms
		printf("$%f;\n", cs);

	}
}

