#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    KC_DLR,     KC_PLUS,               KC_LBRC,               KC_LCBR,               KC_LPRN,               KC_AMPR,                                        KC_EQL,                  KC_RPRN,               KC_RCBR,               KC_RBRC,               KC_ASTR,               KC_EXLM,
    KC_AT,      KC_SCLN,               KC_COMMA,              KC_DOT,                KC_P,                  KC_Y,                                           KC_F,                    KC_G,                  KC_C,                  KC_R,                  KC_L,                  KC_SLASH,
    KC_BSLS,    MT(MOD_LGUI, KC_A),    MT(MOD_LALT, KC_O),    MT(MOD_LCTL, KC_E),    MT(MOD_LSFT, KC_U),    MT(KC_HYPR, KC_I),                              MT(KC_MEH, KC_D),        MT(MOD_RSFT, KC_H),    MT(MOD_RCTL, KC_T),    MT(MOD_LALT, KC_N),    MT(MOD_RGUI, KC_S),    KC_MINUS,
    C(KC_A),    KC_QUOTE,              KC_Q,                  KC_J,                  KC_K,                  KC_X,                                           KC_B,                    KC_M,                  KC_W,                  KC_V,                  KC_Z,                  KC_PIPE,
                                                                                     LT(1, KC_BSPC),        KC_TAB,                                         KC_ENTER,                KC_SPACE
  ),
  [1] = LAYOUT_voyager(
    RGB_SPD,         RGB_SLD,              RGB_MODE_FORWARD,     RGB_TOG,              TOGGLE_LAYER_COLOR,   RGB_SPI,                                        KC_BRIGHTNESS_DOWN,  KC_BRIGHTNESS_UP,       KC_MEDIA_PREV_TRACK,    KC_MEDIA_PLAY_PAUSE,     KC_MEDIA_NEXT_TRACK,      KC_PSCR,
    KC_TRANSPARENT,  KC_F1,                KC_F2,                KC_F3,                KC_F4,                RGB_HUI,                                        KC_TRANSPARENT,      KC_HOME,                KC_UP,                  KC_END,                  KC_TRANSPARENT,           RGB_SAI,
    KC_TRANSPARENT,  MT(MOD_LGUI, KC_F5),  MT(MOD_LALT, KC_F6),  MT(MOD_LCTL, KC_F7),  MT(MOD_LSFT, KC_F8),  RGB_HUD,                                        KC_TRANSPARENT,      MT(MOD_RSFT, KC_LEFT),  MT(MOD_RCTL, KC_DOWN),  MT(MOD_LALT, KC_RIGHT),  MT(MOD_RGUI, KC_DELETE),  RGB_SAD,
    RGB_VAD,         KC_F9,                KC_F10,               KC_F11,               KC_F12,               RGB_VAI,                                        KC_AUDIO_VOL_DOWN,   KC_AUDIO_MUTE,          KC_AUDIO_VOL_UP,        KC_TRANSPARENT,          KC_TRANSPARENT,           KC_TRANSPARENT,
                                                                                       KC_TRANSPARENT,       KC_TRANSPARENT,                                 KC_TRANSPARENT,      KC_TRANSPARENT
  ),
};

// Shift keys
const key_override_t dollar_tilde = ko_make_basic(MOD_MASK_SHIFT, KC_DLR, KC_TILD);
const key_override_t plus_one = ko_make_basic(MOD_MASK_SHIFT, KC_PLUS, KC_1);
const key_override_t lbrc_two = ko_make_basic(MOD_MASK_SHIFT, KC_LBRC, KC_2);
const key_override_t lcbr_three = ko_make_basic(MOD_MASK_SHIFT, KC_LCBR, KC_3);
const key_override_t lprn_four = ko_make_basic(MOD_MASK_SHIFT, KC_LPRN, KC_4);
const key_override_t ampr_five = ko_make_basic(MOD_MASK_SHIFT, KC_AMPR, KC_5);
const key_override_t equal_six = ko_make_basic(MOD_MASK_SHIFT, KC_EQL, KC_6);
const key_override_t rprn_seven = ko_make_basic(MOD_MASK_SHIFT, KC_RPRN, KC_7);
const key_override_t rcbr_eight = ko_make_basic(MOD_MASK_SHIFT, KC_RCBR, KC_8);
const key_override_t rbrc_nine = ko_make_basic(MOD_MASK_SHIFT, KC_RBRC, KC_9);
const key_override_t astr_zero = ko_make_basic(MOD_MASK_SHIFT, KC_ASTR, KC_0);
const key_override_t exlm_percent = ko_make_basic(MOD_MASK_SHIFT, KC_EXLM, KC_PERC);
const key_override_t at_circ = ko_make_basic(MOD_MASK_SHIFT, KC_AT, KC_CIRC);
const key_override_t bsls_hash = ko_make_basic(MOD_MASK_SHIFT, KC_BSLS, KC_HASH);
const key_override_t grave_pipe = ko_make_basic(MOD_MASK_SHIFT, KC_PIPE, KC_GRAVE);
const key_override_t bspc_del = ko_make_basic(MOD_MASK_SHIFT, KC_BSPC, KC_DEL);
const key_override_t enter_esc = ko_make_basic(MOD_MASK_SHIFT, KC_ENTER, KC_ESC);

// Alt keys
const key_override_t alt_one = ko_make_basic(MOD_MASK_ALT, KC_PLUS, A(KC_1));
const key_override_t alt_two = ko_make_basic(MOD_MASK_ALT, KC_LBRC, A(KC_2));
const key_override_t alt_three = ko_make_basic(MOD_MASK_ALT, KC_LCBR, A(KC_3));
const key_override_t alt_four = ko_make_basic(MOD_MASK_ALT, KC_LPRN, A(KC_4));
const key_override_t alt_five = ko_make_basic(MOD_MASK_ALT, KC_AMPR, A(KC_5));
const key_override_t alt_six = ko_make_basic(MOD_MASK_ALT, KC_EQL, A(KC_6));
const key_override_t alt_seven = ko_make_basic(MOD_MASK_ALT, KC_RPRN, A(KC_7));
const key_override_t alt_eight = ko_make_basic(MOD_MASK_ALT, KC_RCBR, A(KC_8));
const key_override_t alt_nine = ko_make_basic(MOD_MASK_ALT, KC_RBRC, A(KC_9));
const key_override_t alt_zero = ko_make_basic(MOD_MASK_ALT, KC_ASTR, A(KC_0));

// CTRL keys
//const key_override_t ctrl_one = ko_make_basic(MOD_MASK_CTRL, KC_EXLM, C(KC_1));
//const key_override_t ctrl_two = ko_make_basic(MOD_MASK_CTRL, KC_LBRC, C(KC_2));
//const key_override_t ctrl_three = ko_make_basic(MOD_MASK_CTRL, KC_LCBR, C(KC_3));
//const key_override_t ctrl_four = ko_make_basic(MOD_MASK_CTRL, KC_LPRN, C(KC_4));
//const key_override_t ctrl_five = ko_make_basic(MOD_MASK_CTRL, KC_AMPR, C(KC_5));
//const key_override_t ctrl_six = ko_make_basic(MOD_MASK_CTRL, KC_PERC, C(KC_6));
//const key_override_t ctrl_seven = ko_make_basic(MOD_MASK_CTRL, KC_RPRN, C(KC_7));
//const key_override_t ctrl_eight = ko_make_basic(MOD_MASK_CTRL, KC_RCBR, C(KC_8));
//const key_override_t ctrl_nine = ko_make_basic(MOD_MASK_CTRL, KC_RBRC, C(KC_9));
//const key_override_t ctrl_zero = ko_make_basic(MOD_MASK_CTRL, KC_ASTR, C(KC_0));

// Command keys
//const key_override_t command_one = ko_make_basic(MOD_MASK_GUI, KC_EXLM, G(KC_1));
//const key_override_t command_two = ko_make_basic(MOD_MASK_GUI, KC_LBRC, G(KC_2));
//const key_override_t command_three = ko_make_basic(MOD_MASK_GUI, KC_LCBR, G(KC_3));
//const key_override_t command_four = ko_make_basic(MOD_MASK_GUI, KC_LPRN, G(KC_4));
//const key_override_t command_five = ko_make_basic(MOD_MASK_GUI, KC_AMPR, G(KC_5));
//const key_override_t command_six = ko_make_basic(MOD_MASK_GUI, KC_PERC, G(KC_6));
//const key_override_t command_seven = ko_make_basic(MOD_MASK_GUI, KC_RPRN, G(KC_7));
//const key_override_t command_eight = ko_make_basic(MOD_MASK_GUI, KC_RCBR, G(KC_8));
//const key_override_t command_nine = ko_make_basic(MOD_MASK_GUI, KC_RBRC, G(KC_9));
//const key_override_t command_zero = ko_make_basic(MOD_MASK_GUI, KC_ASTR, G(KC_0));

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
  return TAPPING_TERM;
}


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {

    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}

const key_override_t **key_overrides = (const key_override_t *[]){
  &dollar_tilde,
  &plus_one,
  &lbrc_two,
  &lcbr_three,
  &lprn_four,
  &ampr_five,
  &equal_six,
  &rprn_seven,
  &rcbr_eight,
  &rbrc_nine,
  &astr_zero,
  &exlm_percent,
  &at_circ,
  &bsls_hash,
  &grave_pipe,
  &bspc_del,
  &enter_esc,
  &alt_one,
  &alt_two,
  &alt_three,
  &alt_four,
  &alt_five,
  &alt_six,
  &alt_seven,
  &alt_eight,
  &alt_nine,
  &alt_zero,
  // &ctrl_one,
  // &ctrl_two,
  // &ctrl_three,
  // &ctrl_four,
  // &ctrl_five,
  // &ctrl_six,
  // &ctrl_seven,
  // &ctrl_eight,
  // &ctrl_nine,
  // &ctrl_zero,
  // &command_one,
  // &command_two,
  // &command_three,
  // &command_four,
  // &command_five,
  // &command_six,
  // &command_seven,
  // &command_eight,
  // &command_nine,
  // &command_zero,
  NULL
};
