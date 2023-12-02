#include QMK_KEYBOARD_H
#include "3x5_3_track.h"

#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2
#define _MOUSE 3

#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)

enum wyld_keycodes {
    WYLD_AUTO_MS_TOG = SAFE_RANGE
};

// TRACKBALL IN WALL LAYOUT (STANDARD 3X5_3)
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT_split_3x5_3(
        KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,            KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
        KC_A,    KC_S,    KC_D,    KC_F,    KC_G,            KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,
        KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,            KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,
                            RAISE,   KC_SPC,  KC_TAB,     KC_KB_MUTE, KC_ENT, LOWER
        ),
    [_RAISE] = LAYOUT_split_3x5_3(
        KC_1,    KC_2,    KC_3,    KC_4,    KC_5,            KC_6,    KC_7,    KC_8,    KC_9,    KC_0,
        QK_BOOT, S(KC_0), KC_LCBR, KC_RCBR, KC_EQL,          KC_MINS, KC_4,    KC_5,    KC_6,    KC_QUOT,
        KC_LPRN,  KC_RPRN, KC_LBRC, KC_RBRC,_______,          _______, KC_1,    KC_2,    KC_3,    _______,
                           _______,  _______, _______,    KC_HOME, _______, _______
        ),

    [_LOWER] = LAYOUT_split_3x5_3(
        KC_EXLM, KC_AT, KC_HASH,  KC_DLR, KC_PERC,           KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN,
        _______, _______, KC_LBRC,  KC_RBRC,KC_EQL,          WYLD_AUTO_MS_TOG, KC_MINS, KC_EQL,  KC_PIPE, QK_BOOT ,
        KC_LPRN,  KC_RPRN, _______, SNIPING, DRGSCRL,         _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT,
                            _______, KC_BTN1, KC_BTN3,     KC_HOME, _______, _______
        ),
    [_MOUSE] = LAYOUT_split_3x5_3(
        _______, _______, _______, _______, _______,         _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______,         _______, _______, _______, _______, _______,
        _______, _______, _______, SNIPING, DRGSCRL,         _______, _______, _______, _______, _______,
                             _______, KC_BTN1, KC_BTN3,    KC_KB_MUTE, _______, _______
        )
};

#ifdef POINTING_DEVICE_AUTO_MOUSE_ENABLE
void pointing_device_init_user(void) {
    set_auto_mouse_enable(true);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case WYLD_AUTO_MS_TOG:
            if (record->event.pressed) {
                set_auto_mouse_enable(!get_auto_mouse_enable());
            }
            return false; // Skip all further processing of this key
        default:
            return true; // Process all other keycodes normally
    }
}
#endif


#ifdef OLED_ENABLE

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    return OLED_ROTATION_270;
}


bool oled_task_user(void) {
    oled_set_cursor(0, 3);
    switch (get_highest_layer(layer_state)) {
        case _QWERTY:
            oled_write_P(PSTR(" BASE\n"), false);
            break;
        case _LOWER:
            oled_write_P(PSTR("LOWER\n"), false);
            break;
        case _RAISE:
            oled_write_P(PSTR("RAISE\n"), false);
            break;
        case _MOUSE:
            oled_write_P(PSTR("MOUSE\n"), false);
            break;
        default:
            // Or use the write_ln shortcut over adding '\n' to the end of your string
            oled_write_ln_P(PSTR("Undefined"), false);
    }
//    oled_set_cursor(2, 7);
//    oled_write_P(PSTR("WPM "), false);
//    oled_set_cursor(1, 8);
//    oled_write(get_u8_str(get_current_wpm(), ' '), false);
    // Host Keyboard LED Status

    oled_set_cursor(0, 9);
    led_t led_state = host_keyboard_led_state();

    oled_write_P(led_state.num_lock ? PSTR("NUMLK \n") : PSTR("    \n"), false);
    oled_write_P(led_state.caps_lock ? PSTR("CAPLK \n") : PSTR("    \n"), false);
    oled_write_P(led_state.scroll_lock ? PSTR("SCRLK \n") : PSTR("    \n"), false);

    return false;
}
#endif

#if defined(ENCODER_MAP_ENABLE)
// TWO ENCODERS
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [_QWERTY] =  { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [_LOWER] =   { ENCODER_CCW_CW(KC_MS_WH_UP, KC_MS_WH_DOWN) },
    [_RAISE] =   { ENCODER_CCW_CW(KC_MS_WH_UP, KC_MS_WH_DOWN) },
    [_MOUSE] =   { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) }
};
#endif


void keyboard_post_init_user(void) {
#ifdef CONSOLE_ENABLE
    debug_enable=true;
    debug_matrix=true;
    debug_keyboard=true;
    debug_mouse=true;
#else
    debug_enable=false;
    debug_matrix=false;
    debug_keyboard=false;
    debug_mouse=false;
#endif
}


