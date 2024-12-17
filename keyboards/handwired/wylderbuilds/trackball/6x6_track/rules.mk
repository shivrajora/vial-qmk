MCU = RP2040
SPLIT_KEYBOARD = yes
BOOTLOADER = rp2040
SERIAL_DRIVER = vendor
RGBLIGHT_ENABLE = no
MOUSEKEY_ENABLE = yes
CONSOLE_ENABLE = no
#COMMAND_ENABLE = yes
BOOTMAGIC_ENABLE = yes
OLED_ENABLE = yes
OLED_DRIVER = ssd1306
WPM_ENABLE = yes

OPT_DEFS += -DHAL_USE_I2C=TRUE