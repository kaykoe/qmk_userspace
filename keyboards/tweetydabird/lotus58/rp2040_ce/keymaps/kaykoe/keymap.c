// Copyright 2022 Markus Knutsson (@TweetyDaBird)
// SPDX-License-Identifier: GPL-2.0-or-later
#include <stdint.h>
#include <sys/types.h>
#include "features/achordion.h"
#include "config.h"
#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
// base layer
    [0] = LAYOUT(
               XXXXXXX,        KC_1,        KC_2,        KC_3,          KC_4,           KC_5,       KC_MPLY,                  KC_MPLY,          KC_6,          KC_7,        KC_8,        KC_9,        KC_0, XXXXXXX,
               XXXXXXX,        KC_Q,        KC_W,        KC_F,          KC_P,           KC_B,                                                   KC_J,          KC_L,        KC_U,        KC_Y,     KC_QUOT, XXXXXXX,
               XXXXXXX, GUI_T(KC_A), ALT_T(KC_R), CTL_T(KC_S),   SFT_T(KC_T),           KC_G,                                                   KC_K,   SFT_T(KC_N), CTL_T(KC_E), ALT_T(KC_I), GUI_T(KC_O), XXXXXXX,
               XXXXXXX,        KC_Z,        KC_X,        KC_C,  RALT_T(KC_D),           KC_V,       XXXXXXX,                  XXXXXXX,          KC_M,  RALT_T(KC_H),     KC_COMM,      KC_DOT,     KC_SLSH, XXXXXXX,
                                                      XXXXXXX, LT(2, KC_ESC), LT(3, KC_BSPC), LT(4, KC_TAB),            LT(5, KC_ENT), LT(6, KC_SPC), LT(7, KC_DEL),     XXXXXXX
    ),

// extra layer
    [1] = LAYOUT(
               XXXXXXX,        KC_1,        KC_2,        KC_3,          KC_4,           KC_5,       KC_MPLY,                  KC_MPLY,          KC_6,          KC_7,        KC_8,        KC_9,        KC_0, XXXXXXX,
               XXXXXXX,        KC_Q,        KC_W,        KC_E,          KC_R,           KC_T,                                                   KC_Y,         KC_U,        KC_I,        KC_O,           KC_P, XXXXXXX,
               XXXXXXX, GUI_T(KC_A), ALT_T(KC_S), CTL_T(KC_D),   SFT_T(KC_F),           KC_G,                                                   KC_H,  SFT_T(KC_J), CTL_T(KC_K), ALT_T(KC_L), GUI_T(KC_QUOT), XXXXXXX,
               XXXXXXX,        KC_Z,        KC_X,        KC_C,  RALT_T(KC_V),           KC_B,       XXXXXXX,                  XXXXXXX,          KC_N, RALT_T(KC_M),     KC_COMM,      KC_DOT,        KC_SLSH, XXXXXXX,
                                                      XXXXXXX, LT(2, KC_ESC), LT(3, KC_BSPC), LT(4, KC_TAB),            LT(5, KC_ENT), LT(6, KC_SPC), LT(7,KC_DEL),     XXXXXXX
    ),

// function layer
    [2] = LAYOUT(
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_MPLY,      KC_MPLY, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, QK_BOOT, AC_TOGG,   TO(1),   TO(0), XXXXXXX,                        KC_BRIU,   KC_F7,   KC_F8,   KC_F9,  KC_F12, XXXXXXX,
        XXXXXXX, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, XXXXXXX,                         KC_NUM,   KC_F4,   KC_F5,   KC_F6,  KC_F11, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX,   TO(7),   TO(2), XXXXXXX, XXXXXXX,      XXXXXXX, KC_BRID,   KC_F1,   KC_F2,   KC_F3,  KC_F10, XXXXXXX,
                                   XXXXXXX, KC_TRNS, XXXXXXX, XXXXXXX,       KC_ENT,  KC_SPC, KC_PSCR, XXXXXXX
    ),

// symbol layer
    [3] = LAYOUT(
        XXXXXXX,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5, KC_TRNS,      KC_TRNS,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0, XXXXXXX,
        XXXXXXX, QK_BOOT, AC_TOGG,   TO(1),   TO(0), XXXXXXX,                        KC_TILD, KC_LCBR, KC_RCBR, KC_COLN, KC_SCLN, XXXXXXX,
        XXXXXXX, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, XXXXXXX,                        KC_PIPE, KC_LBRC, KC_RBRC, KC_UNDS, KC_MINS, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX,   TO(6),   TO(3), XXXXXXX, XXXXXXX,      XXXXXXX, KC_BSLS, KC_LPRN, KC_RPRN, KC_PLUS,  KC_EQL, XXXXXXX,
                                   XXXXXXX, XXXXXXX, KC_TRNS, XXXXXXX,       KC_ENT,  KC_SPC,  KC_GRV, XXXXXXX
    ),

// number layer
    [4] = LAYOUT(
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_TRNS,      KC_TRNS, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, QK_BOOT, AC_TOGG,   TO(1),   TO(0), XXXXXXX,                        XXXXXXX,    KC_7,    KC_8,    KC_9, KC_PPLS, XXXXXXX,
        XXXXXXX, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, XXXXXXX,                        KC_PSLS,    KC_4,    KC_5,    KC_6, KC_PMNS, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX,   TO(5),   TO(4), XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX,    KC_1,    KC_2,    KC_3, KC_PEQL, XXXXXXX,
                                   XXXXXXX, XXXXXXX, XXXXXXX, KC_TRNS,         KC_0,  KC_SPC, KC_PDOT, XXXXXXX
    ),

// media layer
    [5] = LAYOUT(
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, KC_TRNS,        KC_TRNS, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, KC_BRIU, KC_MPRV, KC_VOLU,    KC_MNXT, XXXXXXX,                          XXXXXXX,   TO(0),   TO(1), AC_TOGG, QK_BOOT, XXXXXXX,
        XXXXXXX, KC_BRID, KC_WBAK, KC_VOLD,    KC_WFWD, XXXXXXX,                          XXXXXXX, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, XXXXXXX,
        XXXXXXX, XXXXXXX, KC_MRWD, XXXXXXX,    KC_MFFD, XXXXXXX, XXXXXXX,        XXXXXXX, XXXXXXX,   TO(5),   TO(4), XXXXXXX, XXXXXXX, XXXXXXX,
                                   XXXXXXX, SGUI(KC_A), KC_MPLY, KC_MUTE,        KC_TRNS, XXXXXXX, XXXXXXX, XXXXXXX
    ),

// navigation layer
    [6] = LAYOUT(
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_TRNS,          KC_TRNS, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, KC_PGUP, KC_HOME,   KC_UP,  KC_END, XXXXXXX,                            XXXXXXX,   TO(0),   TO(1), AC_TOGG, QK_BOOT, XXXXXXX,
        XXXXXXX, KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, KC_CAPS,                            XXXXXXX, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, XXXXXXX,
        XXXXXXX, C(KC_Z), C(KC_X), C(KC_C), C(KC_V), C(KC_Y), XXXXXXX,          XXXXXXX, XXXXXXX,   TO(6),   TO(3), XXXXXXX, XXXXXXX, XXXXXXX,
                                   XXXXXXX,  KC_ESC, KC_BSPC,  KC_APP,          XXXXXXX, KC_TRNS, XXXXXXX, XXXXXXX
    ),

// mouse layer
    [7] = LAYOUT(
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_TRNS,         KC_TRNS, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, MS_WHLU, MS_WHLL,   MS_UP, MS_WHLR, XXXXXXX,                           XXXXXXX,   TO(0),   TO(1), AC_TOGG, QK_BOOT, XXXXXXX,
        XXXXXXX, MS_WHLD, MS_LEFT, MS_DOWN, MS_RGHT, XXXXXXX,                           XXXXXXX, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, XXXXXXX,
        XXXXXXX, C(KC_Z), C(KC_X), C(KC_C), C(KC_V), C(KC_Y), XXXXXXX,         XXXXXXX, XXXXXXX,   TO(7),   TO(2), XXXXXXX, XXXXXXX, XXXXXXX,
                                   XXXXXXX, MS_BTN3, MS_BTN1, MS_BTN2,         XXXXXXX, XXXXXXX, KC_TRNS, XXXXXXX
    )
};

const uint16_t PROGMEM COMBO_CAPS_WORD_TOGG[] = {LSFT_T(KC_T), LSFT_T(KC_N),  COMBO_END};

combo_t key_combos[] = {
    COMBO(COMBO_CAPS_WORD_TOGG, CW_TOGG),
};

bool process_record_user(uint16_t keycode, keyrecord_t* record) {
    if (!process_achordion(keycode, record)) { return false; }
    return true;
}

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t* record) {
    switch (keycode) {
        case LT(2, KC_ESC):
        // case LT(3, KC_BSPC):
        case LT(4, KC_TAB):
        case LT(5, KC_ENT):
        // case LT(6, KC_SPC):
        case LT(7, KC_DEL):
            return TAPPING_TERM + 10;
        default:
            return TAPPING_TERM;
    }
}

bool get_permissive_hold(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LT(3, KC_BSPC):
        case LT(4, KC_TAB):
        case GUI_T(KC_A):
        case GUI_T(KC_O):
        case ALT_T(KC_R):
        case ALT_T(KC_I):
        case CTL_T(KC_S):
        case CTL_T(KC_E):
        case SFT_T(KC_T):
        case SFT_T(KC_N):
            // Immediately select the hold action when another key is tapped.
            return true;
        default:
            // Do not select the hold action when another key is tapped.
            return false;
    }
}

uint16_t achordion_streak_chord_timeout(
    uint16_t tap_hold_keycode, uint16_t next_keycode) {
  if (IS_QK_LAYER_TAP(tap_hold_keycode)) {
    return 0;  // Disable streak detection on layer-tap keys.
  }
   return 160;
}

bool achordion_chord(uint16_t tap_hold_keycode,
                     keyrecord_t* tap_hold_record,
                     uint16_t other_keycode,
                     keyrecord_t* other_record) {
    switch (tap_hold_keycode) {
        case LT(2, KC_ESC):
        case LT(3, KC_BSPC):
        case LT(4, KC_TAB):
        case LT(5, KC_ENT):
        case LT(6, KC_SPC):
        case LT(7, KC_DEL):
            return true;
        default:
            return achordion_opposite_hands(tap_hold_record, other_record);
    }
}

bool achordion_eager_mod(uint8_t mod) {
  switch (mod) {
    case MOD_LSFT:
    case MOD_LCTL:
    case MOD_LGUI:
    case MOD_LALT:
      return true;

    default:
      return false;
  }
}

uint16_t get_quick_tap_term(uint16_t keycode, keyrecord_t* record) {
    switch (keycode) {
        case LT(3, KC_BSPC):
        case LT(7, KC_DEL):
        case RALT_T(KC_D):
        case RALT_T(KC_H):
            return QUICK_TAP_TERM;
        default:
            return 0;
    }
}

void matrix_scan_user(void) {
    achordion_task();
}

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [1] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
    [2] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
    [3] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
    [4] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
    [5] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [6] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [7] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
};
#endif

#ifdef OLED_ENABLE
static void print_status_narrow(void) {
    static const char BASE_LAYER [] PROGMEM = {
        0xe0, 0xf8, 0x0c, 0x06, 0x02, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
        0x03, 0x83, 0x83, 0x83, 0x83, 0x43, 0x43, 0x63, 0x23, 0x23, 0xe3, 0x02, 0x06, 0x0c, 0xf8, 0xe0,
        0xff, 0xff, 0x18, 0x3c, 0x46, 0x02, 0xc2, 0x62, 0x32, 0x18, 0x0c, 0xd4, 0x66, 0x22, 0x92, 0x9f,
        0x89, 0xcd, 0x66, 0x22, 0x1a, 0x1a, 0x09, 0x0d, 0x06, 0x03, 0x01, 0x00, 0x02, 0x02, 0xff, 0xff,
        0xff, 0xff, 0x00, 0x00, 0x00, 0xc7, 0xff, 0xf0, 0x2c, 0x26, 0x21, 0x20, 0x30, 0x18, 0x0c, 0x27,
        0x61, 0x60, 0x40, 0x40, 0x40, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff,
        0x07, 0x1f, 0x30, 0x60, 0x4f, 0xcf, 0xc3, 0xc8, 0xc8, 0xc8, 0xc8, 0xd8, 0xd0, 0xd0, 0xd0, 0xd0,
        0xd0, 0xd0, 0xd8, 0xc8, 0xc8, 0xcc, 0xc7, 0xc3, 0xc0, 0xc0, 0xc0, 0x40, 0x60, 0x30, 0x1f, 0x07
    };
    static const char MOUSE_LAYER [] PROGMEM = {
        0xe0, 0xf8, 0x0c, 0x06, 0x02, 0x03, 0x03, 0x03, 0xc3, 0x63, 0x33, 0x13, 0x13, 0x13, 0x93, 0x73,
        0x73, 0x93, 0x13, 0x13, 0x13, 0x33, 0x63, 0xc3, 0x03, 0x03, 0x03, 0x02, 0x06, 0x0c, 0xf8, 0xe0,
        0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x40, 0x40, 0x40, 0x40, 0x40, 0x5f, 0x60,
        0x60, 0x5f, 0x40, 0x40, 0x40, 0x40, 0x40, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff,
        0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff,
        0x07, 0x1f, 0x30, 0x60, 0x40, 0xc0, 0xc0, 0xc0, 0xc0, 0xc3, 0xc6, 0xc4, 0xcc, 0xc8, 0xc8, 0xc8,
        0xc8, 0xc8, 0xc8, 0xcc, 0xc4, 0xc6, 0xc3, 0xc0, 0xc0, 0xc0, 0xc0, 0x40, 0x60, 0x30, 0x1f, 0x07
    };
    static const char FN_LAYER [] PROGMEM = {
        0xe0, 0xf8, 0x0c, 0x86, 0x82, 0x83, 0x83, 0x83, 0x83, 0x83, 0x83, 0x83, 0x83, 0x83, 0x83, 0x03,
        0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x02, 0x06, 0x0c, 0xf8, 0xe0,
        0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x83, 0x83, 0x83, 0x83, 0x83, 0x83, 0x83, 0x03, 0x03, 0x00,
        0x00, 0x00, 0xf0, 0xf0, 0xc0, 0xc0, 0x60, 0x30, 0x30, 0x70, 0xf0, 0xe0, 0xc0, 0x00, 0xff, 0xff,
        0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x00, 0x00, 0x00,
        0x00, 0x00, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff,
        0x07, 0x1f, 0x30, 0x61, 0x41, 0xc1, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0,
        0xc0, 0xc0, 0xc1, 0xc1, 0xc1, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc1, 0x41, 0x61, 0x30, 0x1f, 0x07
    };
    static const char SYMBOL_LAYER [] PROGMEM = {
        0xe0, 0xf8, 0x0c, 0x06, 0x82, 0x83, 0x83, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
        0x03, 0x03, 0x83, 0xc3, 0xc3, 0xc3, 0xc3, 0x83, 0x03, 0x03, 0x03, 0x02, 0x06, 0x0c, 0xf8, 0xe0,
        0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3c,
        0x7e, 0xff, 0xc7, 0x83, 0x01, 0x01, 0x03, 0x07, 0x07, 0x06, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff,
        0xff, 0xff, 0x00, 0xc0, 0xe7, 0xe7, 0xe7, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x7c, 0xfe,
        0xc7, 0x83, 0x83, 0x87, 0xcf, 0xfe, 0xfc, 0x78, 0xfc, 0xfe, 0xce, 0x86, 0x00, 0x00, 0xff, 0xff,
        0x07, 0x1f, 0x30, 0x61, 0x43, 0xc3, 0xc3, 0xc1, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0,
        0xc1, 0xc3, 0xc3, 0xc3, 0xc3, 0xc1, 0xc0, 0xc0, 0xc0, 0xc1, 0xc1, 0x41, 0x61, 0x30, 0x1f, 0x07
    };
    static const char NUM_LAYER [] PROGMEM = {
        0xe0, 0xf8, 0x0c, 0x06, 0x82, 0x03, 0x03, 0x83, 0x83, 0x03, 0x03, 0x03, 0x83, 0x83, 0x03, 0x03,
        0x03, 0x83, 0x83, 0x03, 0x03, 0x83, 0x03, 0x03, 0x83, 0x83, 0x03, 0x02, 0x86, 0x0c, 0xf8, 0xe0,
        0xff, 0xff, 0x00, 0x00, 0x1f, 0x00, 0x0f, 0x10, 0x10, 0x0f, 0x00, 0x0f, 0x10, 0x10, 0x0f, 0x80,
        0x8f, 0x10, 0x10, 0x0f, 0x00, 0x1f, 0x00, 0x0f, 0x10, 0x10, 0x0f, 0x00, 0x1f, 0x00, 0xff, 0xff,
        0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc0, 0xe0, 0x80, 0x80, 0x80, 0x00, 0x02, 0x03, 0xdf,
        0xdf, 0x03, 0x02, 0x00, 0x80, 0x80, 0x80, 0xe0, 0xc0, 0x80, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff,
        0x07, 0x1f, 0x30, 0x60, 0x40, 0xc0, 0xc1, 0xc3, 0xc7, 0xc1, 0xc1, 0xc1, 0xc0, 0xc2, 0xc6, 0xcf,
        0xcf, 0xc6, 0xc2, 0xc0, 0xc1, 0xc1, 0xc1, 0xc7, 0xc3, 0xc1, 0xc0, 0x40, 0x60, 0x30, 0x1f, 0x07
    };
    static const char CAPS_ON [] PROGMEM = {
        0x00, 0x00, 0xf8, 0xfc, 0x7c, 0x3c, 0xdc, 0xdc, 0xdc, 0x9c, 0xfc, 0xfc, 0x1c, 0x9c, 0x7c, 0xfc,
        0xfc, 0x1c, 0xdc, 0xdc, 0x9c, 0x3c, 0xfc, 0x3c, 0x9c, 0xdc, 0x9c, 0xfc, 0xfc, 0xf8, 0x00, 0x00,
        0x00, 0x00, 0x7f, 0xff, 0xf8, 0xf0, 0xef, 0xef, 0xef, 0xef, 0xe7, 0xf0, 0xfa, 0xfb, 0xf0, 0xe3,
        0xff, 0xe0, 0xfb, 0xfb, 0xf9, 0xfc, 0xff, 0xe6, 0xee, 0xec, 0xe1, 0xf3, 0xff, 0x7f, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    };
    static const char CAPS_OFF [] PROGMEM = {
        0xf0, 0xfc, 0x06, 0x02, 0x83, 0xc3, 0x23, 0x23, 0x23, 0x63, 0x03, 0x03, 0xe3, 0x63, 0x83, 0x03,
        0x03, 0xe3, 0x23, 0x23, 0x63, 0xc3, 0x03, 0xc3, 0x63, 0x23, 0x63, 0x03, 0x02, 0x06, 0xfc, 0xf0,
        0x3f, 0xff, 0x80, 0x00, 0x07, 0x0f, 0x10, 0x10, 0x10, 0x10, 0x18, 0x0f, 0x05, 0x04, 0x0f, 0x1c,
        0x00, 0x1f, 0x04, 0x04, 0x06, 0x03, 0x00, 0x19, 0x11, 0x13, 0x1e, 0x0c, 0x00, 0x80, 0xff, 0x3f,
        0x00, 0x00, 0x01, 0x01, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
        0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x01, 0x01, 0x00, 0x00
    };

    // Print current layer
    switch (get_highest_layer(layer_state)) {
        case 0:
            oled_write_raw_P(BASE_LAYER, sizeof(BASE_LAYER));
            break;
        case 1:
            oled_clear();
            oled_write_P(PSTR("QWERT\n"), false);
            break;
        case 2:
            oled_write_raw_P(FN_LAYER, sizeof(FN_LAYER));
            break;
        case 3:
            oled_write_raw_P(SYMBOL_LAYER, sizeof(SYMBOL_LAYER));
            break;
        case 4:
            oled_write_raw_P(NUM_LAYER, sizeof(NUM_LAYER));
            break;
        case 5:
            oled_clear();
            oled_write_P(PSTR("MEDIA\n"), false);
            break;
        case 6:
            oled_clear();
            oled_write_P(PSTR(" NAV \n"), false);
            break;
        case 7:
            oled_write_raw_P(MOUSE_LAYER, sizeof(MOUSE_LAYER));
            break;
        default:
            oled_write_P(PSTR("Undef\n"), false);
    }

    oled_set_cursor(0, 5);
    bool caps = host_keyboard_led_state().caps_lock;
    oled_write_raw_P(caps ? CAPS_ON : CAPS_OFF, sizeof(CAPS_ON));

    oled_set_cursor(1, 8);
    oled_write_ln_P(get_u8_str(get_current_wpm(), '0'), false);
    oled_write_P(PSTR(" WPM "), false);
    // oled_write_raw_P(SOUND_ON_MIC_ON, sizeof(SOUND_ON_MIC_ON));
}

bool is_oled_enabled = true;

bool oled_task_user(void) {
    if (!is_oled_enabled) {
        oled_off();
        return false;
    } else  {
        oled_on();
    }
    print_status_narrow();
    return false;
}

void housekeeping_task_user(void) {
    is_oled_enabled = (bool)(last_input_activity_elapsed() < 30000);
}

#endif
