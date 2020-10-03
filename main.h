#ifndef MAIN_H
#define MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

#include "pro_conf.h"

/* device include files */
#include "stm32f4xx_conf.h"
#include "arm_math.h"
#include "usart.h"
#include "systick.h"
#include "screen_conf.h"
#include "key.h"
#include "sd.h"
#include "vs10xx.h"
#include "w25qxx.h"
#include "rtc.h"
#include "adc_bat.h"
#include "spi_conf.h"
#include "ff_user.h"
#include "nvic_conf.h"
#include "sd2spif.h"
#include "oled_096.h"

#if USER_USE_UCOS == 1
/* ucos */
#include "ucos_inc.h"
#endif

#if USER_USE_LVGL == 1
/* lvgl */
#include "lvgl.h"
#endif

#if USER_USE_APP == 1
/* app */
#include "app_main.h"
#endif

#if USER_USE_FATFS == 1
/* file system */
#include "ff.h"
#endif


/* definitions */                               //2000000
#define BAUDRATE                                1500000  //usart baud rates

/* gpio init */
typedef struct{
    void (*init_w25qxx_gpio)     ( void );
    void (*init_sd_gpio)         ( void );
} init_gpio;

/* functions */
void device_init( void );


#ifdef __cplusplus
}
#endif

#endif
