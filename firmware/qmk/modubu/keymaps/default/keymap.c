#include QMK_KEYBOARD_H
#if __has_include("keymap.h")
#    include "keymap.h"
#endif

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_semistag_16_3(
                KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P, 
                KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                           KC_H,           KC_J,           KC_K,           KC_L,           LT(2,KC_SCLN), 
        KC_LSFT,        KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,           KC_B,           KC_N,           KC_M,           KC_COMM,        KC_DOT,         RSFT_T(KC_SLSH), 
                                                        LALT_T(KC_ESC), LCTL_T(KC_TAB), KC_SPC,         LT(1,KC_BSPC),  LT(3,KC_RALT),  LGUI_T(KC_DEL)),
    [1] = LAYOUT_semistag_16_3(
                KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0, 
                KC_GRV,         KC_MINS,        KC_EQL,         KC_QUOT,        KC_BSLS,                        KC_UP,          KC_UP,          KC_LBRC,        KC_RBRC,        KC_SCLN, 
        KC_TRNS,        KC_RCTL,        KC_HOME,        KC_END,         KC_PGUP,        KC_PGDN,        KC_LEFT,        KC_DOWN,         KC_RGHT,       KC_COMM,        KC_DOT,         RSFT_T(KC_SLSH), 
                                                        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,         KC_TRNS),
    [2] = LAYOUT_semistag_16_3(
                KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,                        MS_WHLU,        MS_WHLL,        MS_UP,          MS_WHLR,        KC_TRNS, 
                KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,                        MS_WHLD,        MS_LEFT,        MS_DOWN,        MS_RGHT,        KC_TRNS, 
        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_Y,           KC_APP,         KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_RSFT,
                                                        KC_TRNS,        KC_TRNS,        KC_TRNS,        MS_BTN1,        MS_BTN2,        MS_BTN3),
    [3] = LAYOUT_semistag_16_3(
                KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,                          KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10, 
                RM_NEXT,        RM_VALU,        RM_SATU,        RM_HUEU,        RM_TOGG,                        KC_PSCR,        KC_SCRL,        KC_BRK,         KC_F11,         KC_F12,  
        KC_TRNS,        KC_RGUI,        KC_NO,          KC_NO,          QK_RBT,         QK_BOOT,        KC_NO,          KC_NO,          KC_NO,          KC_INS,         KC_CAPS,        KC_RSFT, 
                                                        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS)
};