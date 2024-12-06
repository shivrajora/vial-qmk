//
// Created by nethe on 11/9/2022.
//
//#define PRODUCT_ID 0x0001


// Dactyl Manuform Hotswap
#pragma once

/* Split keyboard settings */
#define SERIAL_USART_TX_PIN GP28
#define SPLIT_HAND_PIN GP0

/* RGB settings */

/* Double-tap reset button parameters */
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP17
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 1000U

#define USB_VBUS_PIN GP27

/* Vial set up */
#define VIAL_KEYBOARD_UID {0xC4, 0xCC, 0xB4, 0x76, 0x30, 0x16, 0xFC, 0x70}

#define VIAL_UNLOCK_COMBO_ROWS { 10, 10 }
#define VIAL_UNLOCK_COMBO_COLS { 3, 4 }

#define DYNAMIC_KEYMAP_LAYER_COUNT 10
#define DYNAMIC_KEYMAP_MACRO_COUNT 64

//trackball support
//#define SPI_DRIVER SPID0
//#define POINTING_DEVICE_SCLK_PIN GP22
//#define POINTING_DEVICE_SDIO_PIN GP20
//#define SPI_MOSI_PIN GP23
//#define POINTING_DEVICE_CS_PIN GP21
//#define POINTING_DEVICE_INVERT_X
////#define POINTING_DEVICE_INVERT_X_RIGHT
//#define SPLIT_POINTING_ENABLE
////#define POINTING_DEVICE_INVERT_Y
//#define POINTING_DEVICE_RIGHT
//#define POINTING_DEVICE_ROTATION_90
//#define CHARYBDIS_DRAGSCROLL_REVERSE_Y
//#define POINTING_DEVICE_TASK_THROTTLE_MS 1//default 0x02, 2mm liftoff distance

//#include "config_common.h"
// Basic Config
#define SPLIT_POINTING_ENABLE
#define ROTATIONAL_TRANSFORM_ANGLE  -25
#define POINTING_DEVICE_INVERT_Y
#define POINTING_DEVICE_RIGHT
#define SPI_DRIVER SPID0
#define SPI_SCK_PIN GP22
#define SPI_MISO_PIN GP20
#define SPI_MOSI_PIN GP23
#define POINTING_DEVICE_CS_PIN GP21
#define POINTING_DEVICE_TASK_THROTTLE_MS 1
#define PMW33XX_LIFTOFF_DISTANCE 0x02

#define POINTING_DEVICE_AUTO_MOUSE_ENABLE
// only required if not setting mouse layer elsewhere
// only required if not setting mouse layer elsewhere
#define AUTO_MOUSE_DEFAULT_LAYER 3

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

#define SPLIT_MODS_ENABLE

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
