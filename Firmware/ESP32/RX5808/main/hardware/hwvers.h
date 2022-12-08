#ifndef __RX5808_DIV_HW_VERS_H
#define __RX5808_DIV_HW_VERS_H
/* 原版:
#define VBAT_RATE 6.8
//#define D0WDQ6_VER
//#define SPI_LOW_SPEED
//#define BETTER_KEY_VRANGE
#define Beep_IS_SRC
#define REVERS_GPIO19
#define START_LOGO "RX5808"
*/
/* 旋风V3版:
#define VBAT_RATE 53.3375
//#define D0WDQ6_VER
//#define SPI_LOW_SPEED
//优化了按键分压
#define BETTER_KEY_VRANGE
// 无源蜂鸣器
//#define Beep_IS_SRC
//默认OSD关闭时,开关为低电平
//#define REVERS_GPIO19
#define START_LOGO "CYCLONE"
*/
/* STARFISH模组版:
#define VBAT_RATE 6.8
#define D0WDQ6_VER
#define SPI_LOW_SPEED
//#define BETTER_KEY_VRANGE
#define Beep_IS_SRC
#define REVERS_GPIO19
#define START_LOGO "STARFISH"
*/

// 默认为原版
#define VBAT_RATE 6.8
//#define D0WDQ6_VER
//#define SPI_LOW_SPEED
//#define BETTER_KEY_VRANGE
#define Beep_IS_SRC
#define REVERS_GPIO19
#define START_LOGO "RX5808"
//#define DISABLE_OSD
#endif