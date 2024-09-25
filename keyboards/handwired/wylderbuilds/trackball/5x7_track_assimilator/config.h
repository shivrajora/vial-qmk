//
// Created by nethe on 11/9/2022.
//
//#define PRODUCT_ID 0x0001

#ifndef WYLD_QMK_FIRMWARE_CONFIG_H
#define WYLD_QMK_FIRMWARE_CONFIG_H

#endif // WYLD_QMK_FIRMWARE_CONFIG_H

// Dactyl Manuform Hotswap
#pragma once

//#include "config_common.h"
// Basic Config


//#define SPLIT_POINTING_ENABLE
//#define POINTING_DEVICE_INVERT_Y
//#define ROTATIONAL_TRANSFORM_ANGLE  -25
//#define POINTING_DEVICE_RIGHT
//#define PMW33XX_CS_PIN GP21
//#define POINTING_DEVICE_TASK_THROTTLE_MS 1
//#define PMW33XX_LIFTOFF_DISTANCE 0x02

//#define POINTING_DEVICE_AUTO_MOUSE_ENABLE
//// only required if not setting mouse layer elsewhere
//#define AUTO_MOUSE_DEFAULT_LAYER 3
//
//#define DYNAMIC_KEYMAP_LAYER_COUNT 4

// Using Serial instead of I2C
//#define SERIAL_USART_FULL_DUPLEX
//#define SERIAL_USART_TX_PIN GP0
//#define SERIAL_USART_RX_PIN GP1
//
//#define SERIAL_PIO_USE_PIO0
//#define SERIAL_USART_TIMEOUT     100  // USART driver timeout. default 100
//#define SERIAL_USART_SPEED 921600
//#define SERIAL_USART_PIN_SWAP

// RP2040 Settings
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP17
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 1000U

//#define USB_VBUS_PIN GP27
/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 14
#define MATRIX_COLS 8
#define MATRIX_ROW_PINS { GP3, GP8, GP4, GP13, GP9, GP14, GP2 }
#define MATRIX_COL_PINS { GP1, GP10, GP11, GP12, GP7, GP6, GP5, GP19 }
#define DIODE_DIRECTION ROW2COL

/* Split keyboard settings */
#define SOFT_SERIAL_PIN GP28
#define SPLIT_HAND_PIN GP0

//#    define MASTER_RIGHT
//#    define SPLIT_MODS_ENABLE
//#    define SPLIT_WPM_ENABLE
//#    define SPLIT_LAYER_STATE_ENABLE
//#    define SPLIT_OLED_ENABLE
//#    define SPLIT_LED_STATE_ENABLE
// End of Basic Config

#define SPI_DRIVER SPID0
#define SPI_SCK_PIN GP22
#define SPI_MISO_PIN GP20
#define SPI_MOSI_PIN GP23
#define SPLIT_POINTING_ENABLE
#define ROTATIONAL_TRANSFORM_ANGLE  -25
#define POINTING_DEVICE_INVERT_Y
#define POINTING_DEVICE_RIGHT
#define PMW33XX_CS_PIN GP21
#define POINTING_DEVICE_TASK_THROTTLE_MS 1
#define PMW33XX_LIFTOFF_DISTANCE 0x02

#define SPLIT_TRANSACTION_IDS_KB RPC_ID_KB_CONFIG_SYNC

#define POINTING_DEVICE_AUTO_MOUSE_ENABLE
// only required if not setting mouse layer elsewhere
#define AUTO_MOUSE_DEFAULT_LAYER 3

#define DYNAMIC_KEYMAP_LAYER_COUNT 5

#ifdef RGB_MATRIX_ENABLE
#define RGBLED_NUM 72
#    define WS2812_PIO_USE_PIO1 // Force the usage of PIO1 peripheral, by default the WS2812 implementation uses the PIO0 peripheral
#    define SPLIT_TRANSPORT_MIRROR
#    define RGB_MATRIX_DEFAULT_MODE RGB_MATRIX_SOLID_REACTIVE // Sets the default mode, if none has been set
#    define RGB_MATRIX_DEFAULT_HUE 33 // Sets the default hue value, if none has been set
#    define RGB_MATRIX_DEFAULT_SAT 255 // Sets the default saturation value, if none has been set
#    define RGB_MATRIX_DEFAULT_SPD 50
#    define RGB_MATRIX_DEFAULT_VAL RGB_MATRIX_MAXIMUM_BRIGHTNESS
#    define RGB_DISABLE_WHEN_USB_SUSPENDED
#    define RGB_MATRIX_KEYPRESSES
#    define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#define NOP_FUDGE 0.4  // may not be needed if ws driver loaded
#endif

#ifdef OLED_ENABLE
#define I2C_DRIVER I2CD0
#define I2C1_SDA_PIN GP24
#define I2C1_SCL_PIN GP25
#define RGBLIGHT_LAYERS
// OLED Options
#define SPLIT_OLED_ENABLE
#define SPLIT_WPM_ENABLE
#define OLED_DISPLAY_WIDTH 128
#define OLED_DISPLAY_HEIGHT 32
#define OLED_MATRIX_SIZE 512
#define OLED_RESET -1
#define OLED_DISPLAY_ADDRESS 0x3C
#define OLED_BRIGHTNESS 255
#define OLED_TIMEOUT 32000
#define OLED_FADE_OUT
#define OLED_FADE_OUT_INTERVAL 0
#endif

#ifdef ENCODER_ENABLE
#define ENCODERS_PAD_A { GP16 }
#define ENCODERS_PAD_B { GP18 }
#define ENCODER_RESOLUTIONS { 2 }
#define ENCODERS_PAD_A_RIGHT { GP16 }
#define ENCODERS_PAD_B_RIGHT { GP18 }
#define ENCODER_RESOLUTIONS_RIGHT { 2 }
#endif

//#ifdef RGBLIGHT_ENABLE
//#define WS2812_PIO_USE_PIO1
////#define WS2812_PIO_USE_PIO1
////#define WS2812_PIO_USE_PIO1
//#define RGBLIGHT_LAYERS
////#define WS2812_DI_PIN GP22 // can use trackball jack if not used
////#define WS2812_EXTERNAL_PULLUP
//#define RGBLED_NUM 36
////#define DRIVER_LED_TOTAL 34
//#define RGBLED_SPLIT { 18, 18 }
//#define RGBLIGHT_SPLIT
//#define RGBLIGHT_EFFECT_RGB_TEST
//#define RGBLIGHT_EFFECT_BREATHING
//#define RGBLIGHT_EFFECT_RAINBOW_MOOD
//#define RGBLIGHT_EFFECT_SNAKE
//#define RGBLIGHT_EFFECT_TWINKLE
//#define RGBLIGHT_HUE_STEP 8
//#define RGBLIGHT_SAT_STEP 8
//#define RGBLIGHT_VAL_STEP 17
//#define RGBLIGHT_LIMIT_VAL 100
////#define STM32_SYSCLK KINETIS_SYSCLK_FREQUENCY
//#define NOP_FUDGE 0.4  // may not be needed if ws driver loaded
//#endif