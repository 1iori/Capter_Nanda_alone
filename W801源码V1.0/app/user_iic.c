#include "user_iic.h"
#include "wm_gpio.h"

static uint8_t IIC_SCL = 0;
static uint8_t IIC_SDA = 0;

#define SDA_OUT()       tls_gpio_cfg(IIC_SDA, WM_GPIO_DIR_OUTPUT, WM_GPIO_ATTR_PULLHIGH)    // SDA 配置为输出模式
#define SDA_IN()        tls_gpio_cfg(IIC_SDA, WM_GPIO_DIR_INPUT, WM_GPIO_ATTR_PULLHIGH)     // SDA 配置为输入模式
#define IIC_SCL_HIGH    tls_gpio_write(IIC_SCL, 1)
#define IIC_SCL_LOW     tls_gpio_write(IIC_SCL, 0)
#define IIC_SDA_HIGH    tls_gpio_write(IIC_SDA, 1)
#define IIC_SDA_LOW     tls_gpio_write(IIC_SDA, 0)
#define READ_SDA        tls_gpio_read(IIC_SDA)

/*
*   IIC 起始信号
*/
void user_iic_start(void)
{
    SDA_OUT();
    IIC_SDA_HIGH;	  	  
    IIC_SCL_HIGH;
    delay_us(4);
    IIC_SDA_LOW;
    delay_us(4);
    IIC_SCL_LOW;
}


/*
*   IIC 停止信号
*/
void user_iic_stop(void)
{
    SDA_OUT();
    IIC_SCL_LOW;
    IIC_SDA_LOW;
    delay_us(4);
    IIC_SCL_HIGH; 
    IIC_SDA_HIGH;
    delay_us(4);		
}


/*
*   IIC 等待应答信号
*/
uint8_t user_iic_wait_ack(void)
{
    uint8_t ucErrTime=0;
    SDA_IN();
    IIC_SDA_HIGH;
    delay_us(1);	   
    IIC_SCL_HIGH;
    delay_us(1);	 
    while(READ_SDA)
    {
        ucErrTime++;
        if(ucErrTime > 250)
        {
            user_iic_stop();
            return 1;
        }
    }
    IIC_SCL_LOW;   
		return 0;  
} 


/*
*   IIC 发送ack
*/
static void user_iic_ack(void)
{
    IIC_SCL_LOW;
    SDA_OUT();
    IIC_SDA_LOW;
    delay_us(2);
    IIC_SCL_HIGH;
    delay_us(2);
    IIC_SCL_LOW;
}


/*
*   IIC 发送nack
*/
static void user_iic_nack(void)
{
    IIC_SCL_LOW;
    SDA_OUT();
    IIC_SDA_HIGH;
    delay_us(2);
    IIC_SCL_HIGH;
    delay_us(2);
    IIC_SCL_LOW;
}	


/*
*   IIC 发送1字节数据
*/
void user_iic_send_byte(uint8_t data)
{
    uint8_t t;   

    SDA_OUT(); 	    
    IIC_SCL_LOW;
    for(t = 0; t < 8; t++)
    {              
        if((data & 0x80) >> 7)
            IIC_SDA_HIGH;
        else
            IIC_SDA_LOW;
        data <<= 1; 	  
        delay_us(2);
        IIC_SCL_HIGH;
        delay_us(2); 
        IIC_SCL_LOW;
        delay_us(2);
    }	   
}


/*
*   IIC 读取1字节数据
*/
uint8_t user_iic_read_byte(bool ack)
{
    uint8_t i, receive=0;

    SDA_IN();
    for(i = 0; i < 8; i++ )
    {
        IIC_SCL_LOW;
        delay_us(2);
        IIC_SCL_HIGH;
        receive <<= 1;
        if(READ_SDA) receive++;   
        delay_us(1); 
    }					 
    if (!ack)
        user_iic_nack();
    else
        user_iic_ack();

    return receive;
}


/*
*   IIC 配置IO
*/
void user_iic_pin_cfg(uint8_t sda_pin, uint8_t scl_pin)
{
    IIC_SCL = scl_pin;
    IIC_SDA = sda_pin;

    tls_gpio_cfg(IIC_SCL, WM_GPIO_DIR_OUTPUT, WM_GPIO_ATTR_PULLHIGH);
}
