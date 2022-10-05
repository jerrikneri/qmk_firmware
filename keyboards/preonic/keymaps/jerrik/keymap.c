/* Copyright 2015-2021 Jack Humbert
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H
#include "muse.h"

enum preonic_layers {
  _QWERTY,
  _DEV,
  _MOUSE,
  _NAV,
  _QWERTY2,
  _DVORAK,
  _LOWER,
  _RAISE,
  _FN,
  _FN2,
  _ADJUST
};

enum preonic_keycodes {
  QWERTY = SAFE_RANGE,
  DEV,
  MOUSE,
  NAV,
  FN,
  QWERTY2,
  DVORAK,
  LOWER,
  RAISE,
  BACKLIT
};

#define DEV MO(_DEV)
#define LOWER MO(_LOWER)
#define RAISE MO(_RAISE)
#define FN TG(_FN)
#define FN2 TG(_FN2)

#define KC_RCPP LGUI(LSFT(KC_5))        // Record portion of screen
#define KC_CAPP LGUI(LSFT(KC_4))        // Capture portion of screen

#define KC_STL LGUI(LSFT(KC_LBRC))      // Switch tab left
#define KC_STR LGUI(LSFT(KC_RBRC))      // Switch tab right

#define KC_SSL LCTL(KC_LEFT)            // Switch screen left
#define KC_SSR LCTL(KC_RIGHT)           // Switch screen right

#define KC_SU LCTL(KC_UP)		            // Show all screens
#define KC_SD LCTL(KC_DOWN)		          // Collapse screen
#define KC_SHDT LGUI(KC_F3)             // Show Desktop

#define KC_PB LGUI(KC_LBRC)             // Page back
#define KC_PF LGUI(KC_RBRC)             // Page forward

#define KC_SF LGUI(KC_GRV)              // Switch browser focus

#define KC_X0 MT(MOD_LCTL, KC_ESC)      // Toggle CTRL/Esc
#define KC_XSP MT(MOD_LCTL, KC_SPC)    // Toggle CTRL/Space
#define KC_XBS MT(MOD_LSFT, KC_BSPC)    // Toggle CTRL/Backspace
#define KC_X4 MT(MOD_LSFT, KC_ENT)      // Toggle Shift/Enter

#define KC_SPLT LGUI(KC_SPC)            // Alt spotlight/alfred
#define KC_DEVT LGUI(LALT(KC_J))        // Toggle Dev Tools

#define KC_DW LALT(KC_BSPC)             // Delete word
#define KC_UNSC LSFT(KC_MINS)           // Underscore

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Qwerty
 * ,-----------------------------------------------------------------------------------.
 * |   `  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  | Bksp |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Del  |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Esc  |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |  "   |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  |Enter |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Brite| Ctrl | Alt  | GUI  |Lower |    Space    |Raise | Left | Down |  Up  |Right |
 * `-----------------------------------------------------------------------------------'
 */
[_QWERTY] = LAYOUT_preonic_grid(
  KC_GRV  , KC_1   , KC_2   , KC_3   , KC_4 , KC_5  , KC_6   , KC_7 , KC_8   , KC_9   , KC_0   , KC_BSPC  ,
  KC_TAB  , KC_Q   , KC_W   , KC_E   , KC_R , KC_T  , KC_Y   , KC_U , KC_I   , KC_O   , KC_P   , KC_MINS  ,
  KC_X0   , KC_A   , KC_S   , KC_D   , KC_F , KC_G  , KC_H   , KC_J , KC_K   , KC_L   , KC_SCLN, KC_QUOT  ,
  KC_LSFT , KC_Z   , KC_X   , KC_C   , KC_V , KC_B  , KC_N   , KC_M , KC_COMM, KC_DOT , KC_SLSH, KC_X4    ,
  FN      , KC_LCTL, KC_LALT, KC_LGUI, LOWER, KC_SPC, KC_XBS , RAISE, DEV    , KC_RALT, KC_RCTL, FN2
),

[_DEV] = LAYOUT_preonic_grid(
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, KC_ESC , _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
),

[_MOUSE] = LAYOUT_preonic_grid(
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, KC_WH_U, KC_MS_U, KC_WH_D, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, KC_MS_L, KC_MS_D, KC_MS_R, _______, _______, _______, KC_ACL0, KC_ACL1, KC_ACL2, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, KC_BTN1, KC_BTN2, KC_BTN3, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
),

[_QWERTY2] = LAYOUT_preonic_grid(
  KC_GRV  , KC_1   , KC_2   , KC_3   , KC_4 , KC_5  , KC_6   , KC_7 , KC_8   , KC_9   , KC_0   , KC_BSPC  ,
  KC_TAB  , KC_Q   , KC_W   , KC_E   , KC_R , KC_T  , KC_Y   , KC_U , KC_I   , KC_O   , KC_P   , KC_MINS  ,
  KC_X0   , KC_A   , KC_S   , KC_D   , KC_F , KC_G  , KC_H   , KC_J , KC_K   , KC_L   , KC_SCLN, KC_QUOT  ,
  KC_LSFT , KC_Z   , KC_X   , KC_C   , KC_V , KC_B  , KC_N   , KC_M , KC_COMM, KC_DOT , KC_SLSH, KC_X4    ,
  FN      , KC_LCTL, KC_LALT, KC_LGUI, LOWER, KC_SPC, KC_XBS , RAISE, KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT
),

/* Dvorak
 * ,-----------------------------------------------------------------------------------.
 * |   `  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  | Bksp |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Tab  |   "  |   ,  |   .  |   P  |   Y  |   F  |   G  |   C  |   R  |   L  | Del  |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Esc  |   A  |   O  |   E  |   U  |   I  |   D  |   H  |   T  |   N  |   S  |  /   |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | Shift|   ;  |   Q  |   J  |   K  |   X  |   B  |   M  |   W  |   V  |   Z  |Enter |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Brite| Ctrl | Alt  | GUI  |Lower |    Space    |Raise | Left | Down |  Up  |Right |
 * `-----------------------------------------------------------------------------------'
 */
[_DVORAK] = LAYOUT_preonic_grid(
  KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
  KC_TAB,  KC_QUOT, KC_COMM, KC_DOT,  KC_P,    KC_Y,    KC_F,    KC_G,    KC_C,    KC_R,    KC_L,    KC_DEL,
  KC_ESC,  KC_A,    KC_O,    KC_E,    KC_U,    KC_I,    KC_D,    KC_H,    KC_T,    KC_N,    KC_S,    KC_SLSH,
  KC_LSFT, KC_SCLN, KC_Q,    KC_J,    KC_K,    KC_X,    KC_B,    KC_M,    KC_W,    KC_V,    KC_Z,    KC_ENT,
  BACKLIT, KC_LCTL, KC_LALT, KC_LGUI, LOWER,   KC_SPC,  KC_SPC,  RAISE,   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
),

/* Lower
 * ,-----------------------------------------------------------------------------------.
 * |   ~  |   !  |   @  |   #  |   $  |   %  |   ^  |   &  |   *  |   (  |   )  | Bksp |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |   ~  |   !  |   @  |   #  |   $  |   %  |   ^  |   &  |   *  |   (  |   )  | Del  |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Del  |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |   _  |   +  |   {  |   }  |  |   |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |ISO ~ |ISO | | Home | End  |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |             |      | Next | Vol- | Vol+ | Play |
 * `-----------------------------------------------------------------------------------'
 */
[_LOWER] = LAYOUT_preonic_grid(
  KC_TILD, LGUI(KC_1)   , LGUI(KC_2)   , LGUI(KC_3)   , LGUI(KC_4)   , LGUI(KC_5)   , LGUI(KC_6)   , LGUI(KC_7)   , LGUI(KC_8),  LGUI(KC_9)  , LGUI(KC_0)   , KC_BSPC,
  KC_TILD, KC_1   , KC_2   , KC_3   , KC_4   , KC_5   , KC_6   , KC_7   , KC_8,  KC_9  , KC_0   , KC_EQL   ,
  KC_SPLT, KC_CAPP, KC_RCPP, KC_SSL , KC_SSR , KC_LBRC, KC_RBRC, KC_4   , KC_5,  KC_6  , KC_PLUS, KC_BSLS  ,
  _______, KC_PB  , KC_PF  , KC_SU  , KC_SD  , KC_LCBR, KC_RCBR, KC_1   , KC_2,  KC_3  , KC_MINS, KC_RETURN,
  KC_DEVT, _______, _______, _______, _______, _______, KC_DW  , _______, KC_0,  KC_DOT, _______, KC_PENT
),

/* Raise
 * ,-----------------------------------------------------------------------------------.
 * |   `  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  | Bksp |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |   `  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  | Del  |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Del  |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |   -  |   =  |   [  |   ]  |  \   |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |ISO # |ISO / | Pg Up| Pg Dn|      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |             |      | Next | Vol- | Vol+ | Play |
 * `-----------------------------------------------------------------------------------'
 */
[_RAISE] = LAYOUT_preonic_grid(
  KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
  KC_GRV , KC_EXLM, KC_AT  , KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_PLUS,
  _______, KC_GRV , _______, KC_HOME, KC_PGUP, KC_MINS, KC_EQL , KC_SF  , _______, KC_STL , KC_STR , KC_PIPE,
  _______, _______, _______, KC_END , KC_PGDN, KC_UNSC, KC_PLUS, _______, _______, KC_PB  , KC_PF  , KC_PENT,
  KC_DEVT, _______, _______, _______, _______, KC_TAB , _______, _______, _______, _______, _______, _______
),

[_NAV] = LAYOUT_preonic_grid(
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
),

[_FN] = LAYOUT_preonic_grid(
  KC_F11  , KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F12 ,
  KC_F11  , KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F12 ,
  KC_CAPS , _______, _______, _______, _______, _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, _______,
  _______ , _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______ , _______, _______, _______, _______, KC_INS , KC_DEL , _______, KC_MUTE, KC_VOLD, KC_VOLU, KC_MPLY
),

[_FN2] = LAYOUT_preonic_grid(
  KC_F11 , KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F12   ,
  KC_F11 , KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F12   ,
  KC_CAPS, _______, _______, _______, _______, _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, _______  ,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______  ,
  _______, _______, _______, _______, _______, KC_INS , KC_DEL , _______, _______, KC_VOLD, KC_VOLU, _______
),

[_ADJUST] = LAYOUT_preonic_grid(
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, QWERTY , DEBUG  , _______, QK_BOOT, MI_ON  , MI_OFF , _______, _______, _______, _______, _______,
  _______, _______, KC_SPLT, AU_ON  ,  AU_OFF, AG_NORM, AG_SWAP, _______, QWERTY2, DVORAK , _______, _______,
  _______, MUV_DE , MUV_IN , MU_ON  ,  MU_OFF, _______, NAV    , MOUSE  , _______, _______, _______, _______,
  _______, _______, MU_MOD , _______, _______, _______, _______, _______, _______, _______, _______, _______
)


};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
        case QWERTY:
          if (record->event.pressed) {
            set_single_persistent_default_layer(_QWERTY);
          }
          return false;
          break;
        case MOUSE:
          if (record->event.pressed) {
            set_single_persistent_default_layer(_MOUSE);
          }
          return false;
          break;
        case NAV:
          if (record->event.pressed) {
            set_single_persistent_default_layer(_NAV);
          }
          return false;
          break;
        case FN:
          if (record->event.pressed) {
            set_single_persistent_default_layer(_FN);
          }
          return false;
          break;
        case QWERTY2:
          if (record->event.pressed) {
            set_single_persistent_default_layer(_QWERTY2);
          }
          return false;
          break;
        case DVORAK:
          if (record->event.pressed) {
            set_single_persistent_default_layer(_DVORAK);
          }
          return false;
          break;
        case LOWER:
          if (record->event.pressed) {
            layer_on(_LOWER);
            update_tri_layer(_LOWER, _RAISE, _ADJUST);
          } else {
            layer_off(_LOWER);
            update_tri_layer(_LOWER, _RAISE, _ADJUST);
          }
          return false;
          break;
        case RAISE:
          if (record->event.pressed) {
            layer_on(_RAISE);
            update_tri_layer(_LOWER, _RAISE, _ADJUST);
          } else {
            layer_off(_RAISE);
            update_tri_layer(_LOWER, _RAISE, _ADJUST);
          }
          return false;
          break;
        case BACKLIT:
          if (record->event.pressed) {
            register_code(KC_RSFT);
            #ifdef BACKLIGHT_ENABLE
              backlight_step();
            #endif
            #ifdef RGBLIGHT_ENABLE
              rgblight_step();
            #endif
            #ifdef __AVR__
            writePinLow(E6);
            #endif
          } else {
            unregister_code(KC_RSFT);
            #ifdef __AVR__
            writePinHigh(E6);
            #endif
          }
          return false;
          break;
      }
    return true;
};

layer_state_t layer_state_set_user(layer_state_t state) {
    switch (get_highest_layer(state)) {
    case _RAISE:
        rgblight_setrgb (0x00,  0x00, 0xFF);
        break;
    case _LOWER:
        rgblight_setrgb (0xFF,  0x00, 0x00);
        break;
    case _MOUSE:
        rgblight_setrgb (0x00,  0xFF, 0x00);
        break;
    case _ADJUST:
        rgblight_setrgb (0x7A,  0x00, 0xFF);
        break;
    case _NAV:
        rgblight_setrgb (0x7A,  0xFF, 0xFF);
        break;
    default: //  for any other layers, or the default layer
        rgblight_setrgb (0x00,  0xFF, 0xFF);
        break;
    }
  return state;
}


bool muse_mode = false;
uint8_t last_muse_note = 0;
uint16_t muse_counter = 0;
uint8_t muse_offset = 70;
uint16_t muse_tempo = 50;

bool dip_switch_update_user(uint8_t index, bool active) {
    switch (index) {
        case 0:
            if (active) {
                layer_on(_ADJUST);
            } else {
                layer_off(_ADJUST);
            }
            break;
        case 1:
            if (active) {
                muse_mode = true;
            } else {
                muse_mode = false;
            }
    }
    return true;
}


void matrix_scan_user(void) {
#ifdef AUDIO_ENABLE
    if (muse_mode) {
        if (muse_counter == 0) {
            uint8_t muse_note = muse_offset + SCALE[muse_clock_pulse()];
            if (muse_note != last_muse_note) {
                stop_note(compute_freq_for_midi_note(last_muse_note));
                play_note(compute_freq_for_midi_note(muse_note), 0xF);
                last_muse_note = muse_note;
            }
        }
        muse_counter = (muse_counter + 1) % muse_tempo;
    } else {
        if (muse_counter) {
            stop_all_notes();
            muse_counter = 0;
        }
    }
#endif
}

bool music_mask_user(uint16_t keycode) {
  switch (keycode) {
    case RAISE:
    case LOWER:
      return false;
    default:
      return true;
  }
}
