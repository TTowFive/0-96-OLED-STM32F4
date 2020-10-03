#include "main.h"

/* 设备初始化 */
void device_init( void ) {
    NVIC_PriorityGroupConfig( NVIC_PriorityGroup_0 );
#if USER_USE_UCOS == 0
    delay_init();
#endif
    usart_conf( USART1, BAUDRATE );
    
    oled_i2c_init( I2C1, 400, 0x94 );
    
}


/* 主函数 */
int main () {
    device_init ();
    

    while(1);

}

