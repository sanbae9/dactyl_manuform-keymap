#include QMK_KEYBOARD_H


bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) { /* First encoder */
        if (clockwise) {
            tap_code(KC_AUDIO_VOL_DOWN);
        } else {
            tap_code(KC_AUDIO_VOL_UP);
        }
    }
    return true;
}


#define _QWERTY 0
#define _FUNCTN 1

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT_5x6(
        KC_GESC,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                 KC_6,    KC_7,    KC_8,     KC_9,    KC_0,     KC_BSLS,
        KC_TAB,     KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                 KC_Y,    KC_U,    KC_I,     KC_O,    KC_P,     KC_EQUAL,
        KC_LCTRL,   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                 KC_H,    KC_J,    KC_K,     KC_L,    KC_SCLN,  KC_ENT,
        KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                 KC_N,    KC_M,    KC_COMM,  KC_DOT,  KC_SLSH,  KC_RSHIFT,
                             KC_LBRC,   KC_RBRC,                                           MO(1),   KC_QUOTE,
                                    KC_LGUI,  KC_SPC,                                 MO(1),  KC_GRAVE,
                                               KC_LALT,  KC_DEL,           KC_MINUS,  KC_BSPC,
                                               KC_MUTE,  KC_INS,           KC_CAPS,  KC_RCTRL
    ),

    [_FUNCTN] = LAYOUT_5x6(
        KC_GRAVE, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                   KC_F6,   KC_F7,   KC_F8,   KC_F9,    KC_F10,   KC_F11,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_END,  KC_TRNS, KC_TRNS,                 KC_TRNS, KC_TRNS, KC_UP,   KC_TRNS,  KC_PSCR,  KC_F12,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                 KC_HOME, KC_LEFT, KC_DOWN, KC_RIGHT, KC_QUOTE,  KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                 KC_MINUS, KC_QUOTE, KC_BSLS, KC_TRNS,  KC_TRNS,  KC_ENT,
                             KC_TRNS, KC_TRNS,                                               KC_TRNS, KC_TRNS,
                                    KC_TRNS, KC_TRNS,                                 KC_TRNS, KC_TRNS,
                                               KC_TRNS, KC_TRNS,           KC_TRNS, KC_TRNS,
                                               KC_TRNS, KC_TRNS,           KC_TRNS, KC_TRNS
    )
};
