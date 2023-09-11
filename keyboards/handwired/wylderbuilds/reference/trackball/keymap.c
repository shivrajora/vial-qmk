
enum wyld_keycodes {
    WYLD_AUTO_MS_TOG = SAFE_RANGE
};
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [3] = LAYOUT_6x7_shift(
        _______,_______,_______,_______,_______,_______,_______,                   _______,_______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,_______,                   _______,_______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,_______,                   _______,_______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,_______,                   _______,_______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,_______,                   _______,_______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,                                                                   _______,_______,_______,_______,
        _______, KC_BTN1,                                    _______,
        KC_BTN3, KC_BTN2,                                    _______,
        SNIPING, DRGSCRL,                           KC_MUTE, _______
        ),
    [4] = LAYOUT_6x7_shift(
        _______,_______,_______,_______,_______,_______,_______,                   _______,_______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,_______,                   _______,_______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,_______,                   _______,_______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,_______,                   _______,_______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,_______,                   _______,_______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,                                                                   _______,_______,_______,_______,
        _______, _______,                                    _______,
        _______, _______,                                    _______,
        _______, _______,                           KC_MUTE, _______
        )
};

void pointing_device_init_user(void) {
    //    set_auto_mouse_layer(<mouse_layer>); // only required if AUTO_MOUSE_DEFAULT_LAYER is not set to index of <mouse_layer>
    set_auto_mouse_enable(true);         // always required before the auto mouse feature will work
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