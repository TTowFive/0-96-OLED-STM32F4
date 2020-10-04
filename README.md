# 0-96-OLED-STM32F4
0,96“OLED STM32F4

## 平台：基于STM32F4系列芯片


<font color=red> 稍作更改可适用于其他系列芯片（例如F1）</font>

## 根据SD1306的芯片手册实现
## 使用硬件资源(硬件<font color=red>I2C1</font>)： 

###  <font color=red>PB6：SCL</font>
### <font color=red>PB7：SDA</font>
</font>

###  注：理论来说不同的芯片平台更改<font color=red>初始化函数</font>及<font color=red>"stm32f4xx_conf.h"</font>即可（本例程使用函数i2c_conf()初始化，如F1芯片改为<font color=red>"stm32f1xx_conf.h"</font>）,其他代码可以不用更改即可使用，硬件IIC速度最高400khz，单次刷新整个屏幕，肉眼几乎看不到延迟，速度很可观（前提：先将数据写入OLED_GRAM再进行刷新，且不要频繁刷新）。

<br><br>
# 效果图 和 逻辑分析仪时序图

![image](https://github.com/TTowFive/0-96-OLED-STM32F4/blob/main/effect.jpg)
![image](https://github.com/TTowFive/0-96-OLED-STM32F4/blob/main/logic.png)
