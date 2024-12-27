// Dactyl Manuform Hotswap
#pragma once

// #include "config_common.h"
// Basic Config

#ifndef WYLD_QMK_FIRMWARE_CONFIG_H
#define WYLD_QMK_FIRMWARE_CONFIG_H

#endif // WYLD_QMK_FIRMWARE_CONFIG_H
 #define BOOTMAGIC_LITE_ROW 0        // TOP RIGHT KEY ON RIGHT SIDE, TOP LEFT KEY ON LEFT SIDE
 #define BOOTMAGIC_LITE_COLUMN 0

//#define PRODUCT_ID 0x0002

#define USE_SERIAL
//#define SPLIT_HAND_PIN      GP26  // high = left, low = right
#define	SPLIT_HAND_PIN_LOW_IS_LEFT
//#define SPLIT_HAND_MATRIX_GRID GP9, GP8
//#define MASTER_RIGHT
//#define MASTER_LEFT

// SPLIT sync options:
#define SPLIT_LAYER_STATE_ENABLE
#define SPLIT_LED_STATE_ENABLE


// Using Serial instead of I2C
#define SERIAL_USART_FULL_DUPLEX
#define SERIAL_USART_TX_PIN GP0
#define SERIAL_USART_RX_PIN GP1
#define SERIAL_PIO_USE_PIO0
#define SERIAL_USART_TIMEOUT     100  // USART driver timeout. default 100
#define SERIAL_USART_SPEED 921600

#define SPLIT_HAND_PIN GP10

//#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
//#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 200U
//#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED_MASK 0U

/* key matrix size */
// Columns are doubled-up
#define MATRIX_ROWS 14
#define MATRIX_COLS 6


#ifdef SPLIT_HAND_PIN_LOW_IS_LEFT

// LEFT
#define MATRIX_ROW_PINS { GP2,  GP3,  GP4,  GP5,  GP6, GP7, GP8 }
#else

// RIGHT
#define MATRIX_ROW_PINS { GP2,  GP8,  GP4,  GP5,  GP6, GP7, GP3 }
#endif


#define MATRIX_COL_PINS { GP9, GP12, GP13, GP14, GP15, GP16}
// #define DIODE_DIRECTION ROW2COL

#define DIODE_DIRECTION COL2ROW

#define SPI_DRIVER SPID0
#define SPI_SCK_PIN GP22
#define SPI_MISO_PIN GP20
#define SPI_MOSI_PIN GP23
#define SPLIT_POINTING_ENABLE
#define ROTATIONAL_TRANSFORM_ANGLE  15
// #define POINTING_DEVICE_INVERT_Y
#define POINTING_DEVICE_INVERT_X
#define POINTING_DEVICE_RIGHT
#define PMW33XX_CS_PIN GP21
#define POINTING_DEVICE_TASK_THROTTLE_MS 1
#define PMW33XX_LIFTOFF_DISTANCE 0x05

#define SPLIT_TRANSACTION_IDS_KB RPC_ID_KB_CONFIG_SYNC

#define POINTING_DEVICE_AUTO_MOUSE_ENABLE
// only required if not setting mouse layer elsewhere
#define AUTO_MOUSE_DEFAULT_LAYER 3

#define DYNAMIC_KEYMAP_LAYER_COUNT 4

//// Rotary Encoder ////
// GP21
// GP22

//// Sensor Notes ////
//// Pi Pico pins ////
// 3V3  -- Power (not 3v3_EN!)
// GP21 -- CS pin
// GP20 -- MISO pin
// GP19 -- MOSI pin
// GP18 -- SCK pin clock
// GND  -- GND

// WS2812 RGB LED strip input and number of LEDs
//#ifdef RGBLIGHT_ENABLE
//#define RGB_DI_PIN GP17
//#define RGBLED_NUM 34
////#define DRIVER_LED_TOTAL 34
//#define RGBLED_SPLIT { 17, 17 }
//#define STM32_SYSCLK KINETIS_SYSCLK_FREQUENCY
//#define NOP_FUDGE 0.4
//#endif

//// OLED Pins and Driver
#ifdef OLED_ENABLE
#define I2C_DRIVER I2CD1
#define I2C1_SDA_PIN GP26
#define I2C1_SCL_PIN GP27
// OLED Options
#define SPLIT_OLED_ENABLE
#define SPLIT_WPM_ENABLE
#define OLED_DISPLAY_WIDTH 128
#define OLED_DISPLAY_HEIGHT 32
#define OLED_MATRIX_SIZE 512
#define OLED_RESET -1
#define OLED_DISPLAY_ADDRESS 0x3C
#define OLED_BRIGHTNESS 255
#define OLED_TIMEOUT 60000
#define OLED_FADE_OUT
#define OLED_FADE_OUT_INTERVAL 0
#endif

// Misc settings
// Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap
#define LOCKING_SUPPORT_ENABLE
// Locking resynchronize hack
#define LOCKING_RESYNC_ENABLE
// Enables This makes it easier for fast typists to use dual-function keys
#define PERMISSIVE_HOLD
#define TAPPING_TOGGLE 2
// End of Basic Config
