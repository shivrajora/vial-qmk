// Copyright 2022 Matthew Dews (@matthew-dews)
// SPDX-License-Identifier: GPL-2.0-or-later
#include QMK_KEYBOARD_H
#include "../../6x7_track.h"
enum custom_layer {
    _QWERTY,
    _LOWER,
    _RAISE,
    _MOUSE
};

#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)

enum wyld_keycodes {
    WYLD_AUTO_MS_TOG = SAFE_RANGE
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT_6x7(
        KC_ESC , RGB_TOG,  KC_F1   , KC_F2 , KC_F3 , KC_F4 , KC_F5 ,                        KC_F6 , KC_F7 , KC_F8  , KC_F9  , KC_F10, KC_F11   , KC_F12,
        DRGSCRL, KC_GRV  , KC_1   , KC_2  , KC_3  , KC_4  , KC_5  ,                         KC_6  , KC_7   , KC_8   , KC_9  , KC_0  , KC_LBRC  , KC_RBRC,
        SNIPING, KC_TAB  , KC_Q   , KC_W  , KC_E  , KC_R  , KC_T  ,                         KC_Y  , KC_U   , KC_I   , KC_O  , KC_P  , KC_QUOT  , KC_BACKSLASH,
        KC_BTN3, KC_CAPS , KC_A   , KC_S  , KC_D  , KC_F  , KC_G  , KC_MUTE,                KC_H  , KC_J   , KC_K   , KC_L  ,KC_SCLN, KC_MINS  , SNIPING,
        KC_BTN1, KC_LSFT , KC_Z   , KC_X  , KC_C  , KC_V  , KC_B  ,                         KC_N  , KC_M   , KC_COMM, KC_DOT,KC_SLSH, KC_RSFT  , KC_BTN1,
        KC_LCTL, KC_LGUI, KC_LALT , KC_LBRC,KC_RBRC,                                                         DRGSCRL, KC_EQL,KC_RALT, KC_RGUI  , KC_RCTL,
                                                    RAISE,  KC_SPC, KC_BSPC,              KC_DEL, KC_ENT, LOWER,
                                                            KC_TAB, KC_GRV
        ),

    [_LOWER] = LAYOUT_6x7(
        KC_ESC , KC_F1  , KC_F2 , KC_F3 , KC_F4 , KC_F5 , KC_F6  ,                       KC_F7 , KC_F8  , KC_F9 ,KC_F10 ,KC_F11 ,KC_F12 , QK_BOOT,
        _______, KC_TILD,KC_EXLM, KC_AT ,KC_HASH,KC_DLR ,KC_PERC,                        KC_CIRC,KC_AMPR, KC_SLSH,KC_ASTR,KC_LPRN,KC_RPRN,_______ ,
        _______, _______,_______,_______,_______,_______,KC_LBRC,                        KC_RBRC, KC_P7 , KC_P8 , KC_P9 ,KC_MINS,KC_PLUS, _______,
        _______, _______,KC_HOME,KC_PGUP,KC_PGDN,KC_END ,KC_LPRN, KC_HOME,               KC_RPRN, KC_P4 , KC_P5 , KC_P6 ,KC_PLUS,KC_PIPE, _______,
        DPI_RMOD,DPI_MOD,DPI_RST,_______,_______,SNIPING,DRGSCRL,                        _______, KC_P1 , KC_P2 , KC_P3 ,KC_EQL ,KC_UNDS, _______,
        _______,_______,_______,_______,KC_PSCR,                                                        _______, KC_P0, KC_DOT, _______, WYLD_AUTO_MS_TOG,
                                                    _______, KC_BTN1, KC_BTN2,      _______,_______,_______,
                                                             _______, KC_BTN3
        ),

    [_RAISE] = LAYOUT_6x7(
        QK_BOOT,KC_F12 , KC_F1 , KC_F2 , KC_F3 , KC_F4 , KC_F5 ,                        KC_F6  , KC_F7 , KC_F8 , KC_F9 ,KC_F10 ,KC_F11 , _______,
        _______,_______,_______,_______,_______,_______,KC_LBRC,                        KC_RBRC,_______,KC_NUM,KC_INS ,KC_SCRL,KC_MUTE, _______,
        _______,_______,KC_LEFT,KC_UP  ,KC_DOWN,KC_RGHT,KC_LPRN, KC_MUTE,               KC_RPRN,KC_MPRV,KC_MPLY,KC_MNXT,_______,KC_VOLU, _______,
        _______,_______,_______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,KC_VOLD, _______,
        _______,_______,RGB_VAI,RGB_SAI,RGB_HUI,RGB_MOD,RGB_TOG,                        _______,_______,_______,_______,_______,_______, _______,
        _______,_______,_______,_______,_______,                                                        KC_EQL ,_______,_______,_______,_______,
                                                    _______, _______, _______,      _______,_______,_______,
                                                             _______, _______
        ),
    [_MOUSE] = LAYOUT_6x7(
            _______,_______,_______,_______,_______,_______, _______,                  _______,_______,_______,_______,_______,_______, _______,
            _______,_______,_______,_______,_______,_______, _______,                  _______,_______,_______,_______,_______,_______, _______,
            _______,_______,_______,_______,_______,_______, _______,                  _______,_______,_______,_______,_______,_______, _______,
            _______,_______,_______,KC_BTN2,KC_BTN3,KC_BTN1, _______, KC_MUTE,         _______,KC_BTN1,KC_BTN3,KC_BTN2,_______,_______, _______,
            _______,_______,_______,_______,_______,SNIPING, DRGSCRL,                  _______,_______,_______,_______,_______,_______, _______,
            _______,_______,_______,_______, _______,                                                   _______ ,_______,_______,_______,_______,
                                                    _______, KC_BTN1, KC_BTN2,      _______,_______,_______,
                                                             _______, KC_BTN3
    ),
    [4] = LAYOUT_6x7(
            _______,_______,_______,_______,_______,_______, _______,                  _______,_______,_______,_______,_______,_______, _______,
            _______,_______,_______,_______,_______,_______, _______,                  _______,_______,_______,_______,_______,_______, _______,
            _______,_______,_______,_______,_______,_______, _______,                  _______,_______,_______,_______,_______,_______, _______,
            _______,_______,_______,_______,_______,_______, _______, _______,         _______,_______,_______,_______,_______,_______, _______,
            _______,_______,_______,_______,_______,_______, _______,                  _______,_______,_______,_______,_______,_______, _______,
             _______,_______,_______, _______, _______,                                                   _______ ,_______,_______,_______,_______,
                                                    _______, _______, _______,      _______,_______,_______,
                                                             _______, _______
    )

};

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

#ifdef POINTING_DEVICE_AUTO_MOUSE_ENABLE
void pointing_device_init_user(void) {
    set_auto_mouse_enable(true);
    set_auto_mouse_enable(false);
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

// ENCODERS
#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [_QWERTY] =  { ENCODER_CCW_CW(KC_VOLU, KC_VOLD) },
    [_LOWER] =   { ENCODER_CCW_CW(KC_MS_WH_UP, KC_MS_WH_DOWN) },
    [_RAISE] =   { ENCODER_CCW_CW(KC_VOLU, KC_VOLD) },
    [_MOUSE] =   { ENCODER_CCW_CW(KC_VOLU, KC_VOLD) },
    [4] =        { ENCODER_CCW_CW(KC_VOLU, KC_VOLD) }
};
//#endif
#endif

#ifdef RGBLIGHT_ENABLE
const rgblight_segment_t PROGMEM querty_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {15, 3, HSV_RED},       // Light 4 LEDs, starting with LED 6
    {33, 3, HSV_RED}      // Light 4 LEDs, starting with LED 6
);
const rgblight_segment_t PROGMEM lower_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {15, 3, HSV_BLUE},
    {33, 3, HSV_BLUE}
);
const rgblight_segment_t PROGMEM raise_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {15, 3, HSV_YELLOW},
    {33, 3, HSV_YELLOW}
);

const rgblight_segment_t* const PROGMEM my_rgb_layers[] = RGBLIGHT_LAYERS_LIST(
    querty_layer,    // Overrides caps lock layer
    lower_layer,    // Overrides other layers
    raise_layer     // Overrides other layers
);

//bool led_update_user(led_t led_state) {
//    rgblight_set_layer_state(0, led_state.caps_lock);
//    return true;
//}

layer_state_t default_layer_state_set_user(layer_state_t state) {
    rgblight_set_layer_state(0, layer_state_cmp(state, _QWERTY));
    return state;
}

layer_state_t layer_state_set_user(layer_state_t state) {
    rgblight_set_layer_state(1, layer_state_cmp(state, _LOWER));
    rgblight_set_layer_state(2, layer_state_cmp(state, _RAISE));
    return state;
}


#endif

//    rgblight_enable();
#ifdef RGBLIGHT_ENABLE
void keyboard_post_init_user(void) {
    // Enable the LED layers
    rgblight_layers = my_rgb_layers;
}
//    rgblight_layers = my_rgb_layers;
//    rgblight_enable_noeeprom(); // Enables RGB, without saving settings
//    rgblight_sethsv_noeeprom_cyan();
//    rgblight_mode_noeeprom(RGBLIGHT_MODE_STATIC_LIGHT);
#endif

#ifdef OLED_ENABLE

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    if (!is_keyboard_left()) {
        return OLED_ROTATION_270;
    }
    return OLED_ROTATION_0;
}


bool oled_task_user(void) {

    if (!is_keyboard_left()) {
        oled_set_cursor(0, 3);
        //        oled_write_P(PSTR("Layer\n"), false);

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
        oled_set_cursor(2, 7);
        oled_write_P(PSTR("WPM "), false);
        oled_set_cursor(1, 8);
        oled_write(get_u8_str(get_current_wpm(), ' '), false);
        // Host Keyboard LED Status

        oled_set_cursor(0, 9);
        led_t led_state = host_keyboard_led_state();

        oled_write_P(led_state.num_lock ? PSTR("NUMLK \n") : PSTR("    \n"), false);
        oled_write_P(led_state.caps_lock ? PSTR("CAPLK \n") : PSTR("    \n"), false);
        oled_write_P(led_state.scroll_lock ? PSTR("SCRLK \n") : PSTR("    \n"), false);
    }

    return false;
}
#endif
