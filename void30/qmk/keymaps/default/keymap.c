// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layer_names {
    _BASE,
    _SYMBOLS,
    _NAVIGATION,
    _CODE
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT(
        MT(MOD_LALT, KC_Q),    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    LT(_CODE, KC_I),    KC_O,  KC_P,
        KC_A,    KC_S,    KC_D,  KC_F,    KC_G,    KC_H,   KC_J,    KC_K,  KC_L,  KC_ENT,
        MT(MOD_LSFT, KC_Z), KC_X, KC_C,    KC_V,    LT(_SYMBOLS, KC_SPC), LT(_NAVIGATION, KC_B),  KC_N,  KC_M, MT(MOD_LCTL, KC_TAB), KC_ESC
    ),

    [_SYMBOLS] = LAYOUT(
        KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9, KC_0,
        KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN,
        KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, _______, _______, KC_BSLS, KC_SCLN, KC_COMM, KC_DOT
    ),

    [_NAVIGATION] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, KC_DEL, KC_BSPC,
        _______, _______, _______, KC_SLSH, KC_CAPS,  KC_LEFT, KC_DOWN, KC_UP,  KC_RGHT, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    ),

    [_CODE] = LAYOUT(
        KC_UNDS, KC_LPRN, KC_RPRN, KC_LCBR, KC_RCBR, KC_PIPE, KC_COLON, _______, KC_DOUBLE_QUOTE, KC_QUESTION,
        KC_LABK, KC_RABK, KC_PERC, KC_PSLS, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    )
};
