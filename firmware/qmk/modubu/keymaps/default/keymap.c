#include QMK_KEYBOARD_H
#if __has_include("keymap.h")
#    include "keymap.h"
#endif

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_semistag_16_3(
                KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P, 
                KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                           KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN, 
        KC_LSFT,        KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,           KC_B,           KC_N,           KC_M,           KC_COMM,        KC_DOT,         RSFT_T(KC_SLSH), 
                                                        KC_LALT,        KC_LCTL,        KC_SPC,         TG(1),          LT(3,KC_RALT),  KC_LGUI),
    [1] = LAYOUT_semistag_16_3(
                KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0, 
                KC_GRV,         KC_MINS,        KC_EQL,         KC_QUOT,        KC_BSLS,                        KC_LBRC,        KC_RBRC,        KC_UP,          KC_UP,          KC_SCLN, 
        KC_TRNS,        KC_RCTL,        KC_INS,         KC_NO,          KC_PGUP,        KC_PGDN,        KC_HOME,        KC_END,         KC_LEFT,          KC_DOWN,      KC_RGHT,        KC_RSFT, 
                                                        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS),
    [2] = LAYOUT_semistag_16_3(
                KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,                        MS_WHLU,        MS_WHLL,        MS_UP,          MS_WHLR,        MS_BTN4, 
                KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,                        MS_WHLD,        MS_LEFT,        MS_DOWN,        MS_RGHT,        MS_BTN5, 
        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_Y,           KC_APP,         KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
                                                        KC_TRNS,        KC_TRNS,        KC_TRNS,        MS_BTN1,        MS_BTN2,        MS_BTN3),
    [3] = LAYOUT_semistag_16_3(
                KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,                          KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10, 
                RM_NEXT,        RM_VALU,        RM_SATU,        RM_HUEU,        RM_TOGG,                        KC_PSCR,        KC_SCRL,        KC_BRK,         KC_F11,         KC_F12,  
        KC_TRNS,        KC_RGUI,        KC_NO,          KC_NO,          QK_RBT,         QK_BOOT,        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_RSFT, 
                                                        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS)
};

enum combos {
  OP_BSPC,
  NUM_BSPC,
  IO_DEL,
  NUM_DEL,
  LSCLN_ENT,
  NUM_ENT,
  QW_TAB,
  WE_ESC,
  AS_CAPS,
  JKL_MSON,
  LDR_MSOFF,
  WR4_MSOFF,
  MR5_MSOFF
};

const uint16_t PROGMEM op_combo[] = {KC_O, KC_P, COMBO_END};
const uint16_t PROGMEM num90_combo[] = {KC_9, KC_0, COMBO_END};
const uint16_t PROGMEM io_combo[] = {KC_I, KC_O, COMBO_END};
const uint16_t PROGMEM num89_combo[] = {KC_8, KC_9, COMBO_END};
const uint16_t PROGMEM lscln_combo[] = {KC_L, KC_SCLN, COMBO_END};
const uint16_t PROGMEM numscln_combo[] = {KC_UP, KC_SCLN, COMBO_END};
const uint16_t PROGMEM qw_combo[] = {KC_Q, KC_W, COMBO_END};
const uint16_t PROGMEM we_combo[] = {KC_W, KC_E, COMBO_END};
const uint16_t PROGMEM as_combo[] = {KC_A, KC_S, COMBO_END};
const uint16_t PROGMEM jkl_combo[] = {KC_J, KC_K, KC_L, COMBO_END};
const uint16_t PROGMEM ldr_combo[] = {MS_LEFT, MS_DOWN, MS_RGHT, COMBO_END};
const uint16_t PROGMEM wr4_combo[] = {MS_WHLR, MS_BTN4, COMBO_END};
const uint16_t PROGMEM mr5_combo[] = {MS_RGHT, MS_BTN5, COMBO_END};

combo_t key_combos[] = {
  [OP_BSPC] = COMBO(op_combo, KC_BSPC),
  [NUM_BSPC] = COMBO(num90_combo, KC_BSPC),
  [IO_DEL] = COMBO(io_combo, KC_BSPC),
  [NUM_DEL] = COMBO(num89_combo, KC_BSPC),
  [LSCLN_ENT] = COMBO(lscln_combo, KC_ENT),
  [NUM_ENT] = COMBO(numscln_combo, KC_ENT),
  [QW_TAB] = COMBO(qw_combo, KC_TAB),
  [WE_ESC] = COMBO(we_combo, KC_ESC),
  [AS_CAPS] = COMBO(as_combo, KC_CAPS),
  [JKL_MSON] = COMBO(jkl_combo, TO(2)),
  [LDR_MSOFF] = COMBO(ldr_combo, TO(0)),
  [WR4_MSOFF] = COMBO(wr4_combo, TO(0)),
  [MR5_MSOFF] = COMBO(mr5_combo, TO(0))
};

bool get_permissive_hold(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LT(3,KC_RALT):
            return true;
        default:
            return false;
    }
}

bool get_hold_on_other_key_press(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case RSFT_T(KC_SLSH):
            return true;
        default:
            return false;
    }
}

const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM =
    LAYOUT_semistag_16_3(
          'L', 'L', 'L', 'L', 'L',        'R', 'R', 'R', 'R', 'R', 
          'L', 'L', 'L', 'L', 'L',        'R', 'R', 'R', 'R', 'R',
        'L', 'L', 'L', 'L', 'L', 'L',  'R', 'R', 'R', 'R', 'R', 'R',
                       'L', 'L', 'L',  'R', 'R', 'R'
    );