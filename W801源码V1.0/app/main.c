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
	float cs;
	//float ran[10]={1.5,1.5,1.6,1.5,1.5,4.5,4.5,4.5,4.5,5.6};
	//watchDogInit();//初始化看门狗
	printf("\r\n测试开始\r\n");	
	pcap01_init(); //初始化PCAP01	  
	float last_cs= 0;		
	while(1)
	{
		cs=(pcap01_read_res(1)/2097152)*Cap_ref;//0.66ms的测量周期
		if(cs!=last_cs)
		printf("%f\n",cs);
		last_cs=cs;
		delay_us(1000);//1ms

		/*for(int i=0;i<10;i++)
		{
		if(ran[i]!=last_cs)
           printf("$%f;\n", ran[i]);
	       last_cs=ran[i];
		}
		delay_us(1000);//1ms*/
		//printf("$%f;\n", cs);

	}
}

