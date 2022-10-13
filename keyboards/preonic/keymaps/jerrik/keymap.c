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
  _QWERTYMAC,
  _QWERTYWIN,
  _DEV,
  _MOUSE,
  _NAV,
  _ALT,
  _LOWERMAC,
  _LOWERWIN,
  _RAISEMAC,
  _RAISEWIN,
  _FN1,
  _FN2,
  _ADJUST
};

enum preonic_keycodes {
  QWERTYMAC = SAFE_RANGE,
  QWERTYWIN,
  DEV,
  MOUSE,
  NAV,
  FN1,
  FN2,
  ALT,
  LOWERMAC,
  LOWERWIN,
  RAISEMAC,
  RAISEWIN,
  BACKLIT
};

#define DEV MO(_DEV)
#define LOWERMAC MO(_LOWERMAC)
#define LOWERWIN MO(_LOWERWIN)
#define RAISEMAC MO(_RAISEMAC)
#define RAISEWIN MO(_RAISEWIN)
#define FN1 TG(_FN1)
#define FN2 TG(_FN2)

// MAC
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

// WSL
#define KC_SAW LGUI(KC_TAB)
#define KC_HAW LGUI(KC_M)
#define KC_DL LGUI(LCTL(KC_LEFT))
#define KC_DR LGUI(LCTL(KC_RGHT))

#define KC_WSL LALT(KC_SPC) 

#define KC_TL LCTL(LSFT(KC_TAB))
#define KC_TR LCTL(KC_TAB)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_QWERTYMAC] = LAYOUT_preonic_grid(
  KC_GRV  , KC_1   , KC_2   , KC_3   , KC_4    , KC_5  , KC_6   , KC_7    , KC_8   , KC_9   , KC_0   , KC_BSPC  ,
  KC_TAB  , KC_Q   , KC_W   , KC_E   , KC_R    , KC_T  , KC_Y   , KC_U    , KC_I   , KC_O   , KC_P   , KC_MINS  ,
  KC_X0   , KC_A   , KC_S   , KC_D   , KC_F    , KC_G  , KC_H   , KC_J    , KC_K   , KC_L   , KC_SCLN, KC_QUOT  ,
  KC_LSFT , KC_Z   , KC_X   , KC_C   , KC_V    , KC_B  , KC_N   , KC_M    , KC_COMM, KC_DOT , KC_SLSH, KC_X4    ,
  FN1     , KC_LCTL, KC_LGUI, KC_LALT, LOWERMAC, KC_SPC, KC_XBS , RAISEMAC, KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT
),

[_QWERTYWIN] = LAYOUT_preonic_grid(
  KC_GRV  , KC_1   , KC_2   , KC_3   , KC_4    , KC_5  , KC_6   , KC_7    , KC_8   , KC_9   , KC_0   , KC_BSPC  ,
  KC_TAB  , KC_Q   , KC_W   , KC_E   , KC_R    , KC_T  , KC_Y   , KC_U    , KC_I   , KC_O   , KC_P   , KC_MINS  ,
  KC_X0   , KC_A   , KC_S   , KC_D   , KC_F    , KC_G  , KC_H   , KC_J    , KC_K   , KC_L   , KC_SCLN, KC_QUOT  ,
  KC_LSFT , KC_Z   , KC_X   , KC_C   , KC_V    , KC_B  , KC_N   , KC_M    , KC_COMM, KC_DOT , KC_SLSH, KC_X4    ,
  FN1     , KC_LCTL, KC_LGUI, KC_LALT, LOWERWIN, KC_SPC, KC_XBS , RAISEWIN, KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT
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

[_ALT] = LAYOUT_preonic_grid(
  KC_GRV  , KC_1   , KC_2   , KC_3   , KC_4    , KC_5  , KC_6   , KC_7 , KC_8   , KC_9   , KC_0   , KC_BSPC  ,
  KC_TAB  , KC_Q   , KC_W   , KC_E   , KC_R    , KC_T  , KC_Y   , KC_U , KC_I   , KC_O   , KC_P   , KC_MINS  ,
  KC_X0   , KC_A   , KC_S   , KC_D   , KC_F    , KC_G  , KC_H   , KC_J , KC_K   , KC_L   , KC_SCLN, KC_QUOT  ,
  KC_LSFT , KC_Z   , KC_X   , KC_C   , KC_V    , KC_B  , KC_N   , KC_M , KC_COMM, KC_DOT , KC_SLSH, KC_X4    ,
  FN1     , KC_LCTL, KC_LALT, KC_LGUI, LOWERMAC, KC_SPC, KC_XBS , RAISEMAC, KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT
),

[_LOWERMAC] = LAYOUT_preonic_grid(
  KC_TILD, LGUI(KC_1)   , LGUI(KC_2)   , LGUI(KC_3)   , LGUI(KC_4)   , LGUI(KC_5)   , LGUI(KC_6)   , LGUI(KC_7)   , LGUI(KC_8),  LGUI(KC_9)  , LGUI(KC_0)   , KC_BSPC,
  KC_TILD, KC_1   , KC_2   , KC_3   , KC_4   , KC_5   , KC_6   , KC_7   , KC_8,  KC_9  , KC_0   , KC_EQL   ,
  KC_SPLT, KC_CAPP, KC_RCPP, KC_SSL , KC_SSR , KC_LBRC, KC_RBRC, KC_4   , KC_5,  KC_6  , KC_PLUS, KC_BSLS  ,
  _______, KC_PB  , KC_PF  , KC_SU  , KC_SD  , KC_LCBR, KC_RCBR, KC_1   , KC_2,  KC_3  , KC_MINS, KC_RETURN,
  KC_DEVT, _______, _______, _______, _______, _______, KC_DW  , _______, KC_0,  KC_DOT, _______, KC_PENT
),

[_LOWERWIN] = LAYOUT_preonic_grid(
  KC_TILD, LGUI(KC_1)   , LGUI(KC_2)   , LGUI(KC_3)   , LGUI(KC_4)   , LGUI(KC_5)   , LGUI(KC_6)   , LGUI(KC_7)   , LGUI(KC_8),  LGUI(KC_9)  , LGUI(KC_0)   , KC_BSPC,
  KC_TILD, KC_1   , KC_2   , KC_3   , KC_4   , KC_5   , KC_6   , KC_7   , KC_8,  KC_9  , KC_0   , KC_EQL   ,
  KC_WSL , KC_CAPP, KC_RCPP, KC_DL  , KC_DR  , KC_LBRC, KC_RBRC, KC_4   , KC_5,  KC_6  , KC_PLUS, KC_BSLS  ,
  _______, KC_PB  , KC_PF  , KC_SAW , KC_HAW , KC_LCBR, KC_RCBR, KC_1   , KC_2,  KC_3  , KC_MINS, KC_RETURN,
  KC_DEVT, _______, _______, _______, _______, _______, KC_DW  , _______, KC_0,  KC_DOT, _______, KC_PENT
),

[_RAISEMAC] = LAYOUT_preonic_grid(
  KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
  KC_GRV , KC_EXLM, KC_AT  , KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_PLUS,
  _______, KC_GRV , _______, KC_HOME, KC_PGUP, KC_MINS, KC_EQL , KC_SF  , _______, KC_STL , KC_STR , KC_PIPE,
  _______, _______, _______, KC_END , KC_PGDN, KC_UNSC, KC_PLUS, _______, _______, KC_PB  , KC_PF  , KC_PENT,
  KC_DEVT, _______, _______, _______, _______, KC_TAB , _______, _______, _______, _______, _______, _______
),

[_RAISEWIN] = LAYOUT_preonic_grid(
  KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
  KC_GRV , KC_EXLM, KC_AT  , KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_PLUS,
  _______, KC_GRV , _______, KC_HOME, KC_PGUP, KC_MINS, KC_EQL , KC_SF  , _______, KC_TL  , KC_TR  , KC_PIPE,
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

[_FN1] = LAYOUT_preonic_grid(
  KC_F11  , KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F12 ,
  KC_F11  , KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F12 ,
  KC_CAPS , _______, _______, _______, _______, _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, _______,
  _______ , _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______ , _______, _______, _______, _______, KC_INS , KC_DEL , _______, KC_MUTE, KC_VOLD, KC_VOLU, KC_MPLY
),

[_FN2] = LAYOUT_preonic_grid(
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, MI_ON  , MI_OFF , _______, _______, _______, _______, _______,
  _______, _______, _______, AU_ON  ,  AU_OFF, AG_NORM, AG_SWAP, _______, _______, _______, _______, _______,
  _______, MUV_DE , MUV_IN , MU_ON  ,  MU_OFF, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, MU_MOD , _______, _______, _______, _______, _______, _______, _______, _______, _______
),

[_ADJUST] = LAYOUT_preonic_grid(
  _______, _______  , _______  , _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, QWERTYMAC, QWERTYWIN, _______, QK_BOOT, _______, _______, _______, _______, _______, _______, _______,
  _______, ALT      , KC_SPLT  , _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______  , _______  , _______, _______, _______, NAV    , MOUSE  , _______, _______, _______, _______,
  _______, _______  , _______  , _______, _______, _______, _______, _______, _______, _______, _______, _______
)


};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
        case QWERTYMAC:
          if (record->event.pressed) {
            set_single_persistent_default_layer(_QWERTYMAC);
          }
          return false;
          break;
        case QWERTYWIN:
          if (record->event.pressed) {
            set_single_persistent_default_layer(_QWERTYWIN);
          }
          return false;
          break;
        case ALT:
          if (record->event.pressed) {
            set_single_persistent_default_layer(_ALT);
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
        case FN1:
          if (record->event.pressed) {
            set_single_persistent_default_layer(_FN1);
          }
          return false;
          break;
        case LOWERMAC:
          if (record->event.pressed) {
            layer_on(_LOWERMAC);
            update_tri_layer(_LOWERMAC, _RAISEMAC, _ADJUST);
          } else {
            layer_off(_LOWERMAC);
            update_tri_layer(_LOWERMAC, _RAISEMAC, _ADJUST);
          }
          return false;
          break;
        case LOWERWIN:
          if (record->event.pressed) {
            layer_on(_LOWERWIN);
            update_tri_layer(_LOWERWIN, _RAISEWIN, _ADJUST);
          } else {
            layer_off(_LOWERWIN);
            update_tri_layer(_LOWERWIN, _RAISEWIN, _ADJUST);
          }
          return false;
          break;
        case RAISEMAC:
          if (record->event.pressed) {
            layer_on(_RAISEMAC);
            update_tri_layer(_LOWERMAC, _RAISEMAC, _ADJUST);
          } else {
            layer_off(_RAISEMAC);
            update_tri_layer(_LOWERMAC, _RAISEMAC, _ADJUST);
          }
          return false;
          break;
        case RAISEWIN:
          if (record->event.pressed) {
            layer_on(_RAISEWIN);
            update_tri_layer(_LOWERWIN, _RAISEWIN, _ADJUST);
          } else {
            layer_off(_RAISEWIN);
            update_tri_layer(_LOWERWIN, _RAISEWIN, _ADJUST);
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
    case _RAISEMAC:
        rgblight_setrgb (0x00,  0x00, 0xFF);
        break;
    case _RAISEWIN:
        rgblight_setrgb (0x00,  0x00, 0xFF);
        break;
    case _LOWERMAC:
        rgblight_setrgb (0xFF,  0x00, 0x00);
        break;
    case _LOWERWIN:
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
    case RAISEMAC:
    case RAISEWIN:
    case LOWERMAC:
    case LOWERWIN:
      return false;
    default:
      return true;
  }
}
