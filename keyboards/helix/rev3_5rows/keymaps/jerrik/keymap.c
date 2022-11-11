/* Copyright 2020 yushakobo
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

enum preonic_layers {
  _QWERTYLNX,
  _QWERTYMAC,
  _QWERTYWIN,
  _DEV,
  _MOUSE,
  _NAV,
  _ALT,
  _LOWERLNX,
  _LOWERMAC,
  _LOWERWIN,
  _RAISELNX,
  _RAISEMAC,
  _RAISEWIN,
  _FN1,
  _FN2,
  _ADJUST
};

enum preonic_keycodes {
  QWERTYLNX = SAFE_RANGE,
  QWERTYMAC,
  QWERTYWIN,
  DEV,
  MOUSE,
  NAV,
  FN1,
  FN2,
  ALT,
  LOWERLNX,
  LOWERMAC,
  LOWERWIN,
  RAISELNX,
  RAISEMAC,
  RAISEWIN,
  BACKLIT
};

#define LOWERLNX MO(_LOWERLNX)
#define LOWERMAC MO(_LOWERMAC)
#define LOWERWIN MO(_LOWERWIN)
#define RAISELNX MO(_RAISELNX)
#define RAISEMAC MO(_RAISEMAC)
#define RAISEWIN MO(_RAISEWIN)
#define NAV TG(_NAV)
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
// Desktop Navigation
#define KC_SAW LGUI(KC_TAB)
#define KC_HAW LGUI(KC_M)
#define KC_DL LGUI(LCTL(KC_LEFT))
#define KC_DR LGUI(LCTL(KC_RGHT))

// "Spotlight"
#define KC_WSL LALT(KC_SPC)

// Dev Tools
#define KC_DTW LCTL(LSFT(KC_J))

// Tab Left/Right
#define KC_TL LCTL(LSFT(KC_TAB))
#define KC_TR LCTL(KC_TAB)

// Page Forward/Back
#define KC_WPF LALT(KC_RGHT)
#define KC_WPB LALT(KC_LEFT)

// Open Terminal (Open Program 1 In Toolbar)
#define KC_W1 LGUI(KC_1)

// Snap Windows
#define KC_SWL LGUI(KC_LEFT)
#define KC_SWR LGUI(KC_RGHT)
#define KC_SWU LGUI(KC_UP)
#define KC_SWD LGUI(KC_DOWN)

// LINUX
#define KC_LACTL MT(MOD_LCTL, KC_LEFT)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTYLNX] = LAYOUT(
    KC_GRV  , KC_1   , KC_2   , KC_3   , KC_4    , KC_5   ,                   KC_6   , KC_7    , KC_8    , KC_9   , KC_0   , KC_PSCR,
    KC_TAB  , KC_Q   , KC_W   , KC_E   , KC_R    , KC_T   ,                   KC_Y   , KC_U    , KC_I    , KC_O   , KC_P   , KC_MINS,
    KC_X0   , KC_A   , KC_S   , KC_D   , KC_F    , KC_G   ,                   KC_H   , KC_J    , KC_K    , KC_L   , KC_SCLN, KC_QUOT,
    NAV     , KC_Z   , KC_X   , KC_C   , KC_V    , KC_B   , _______, _______, KC_N   , KC_M    , KC_COMM , KC_DOT , KC_SLSH, KC_ENT ,
    KC_LCTL , FN1    , KC_LALT, KC_LGUI, LOWERLNX, KC_SPC , _______, _______, KC_XBS , RAISELNX, KC_LACTL, KC_DOWN, KC_UP  , KC_RGHT
  ),

  [_QWERTYMAC] = LAYOUT(
    KC_GRV  , KC_1   , KC_2   , KC_3   , KC_4    , KC_5   ,                   KC_6   , KC_7    , KC_8    , KC_9   , KC_0   , KC_PSCR,
    KC_TAB  , KC_Q   , KC_W   , KC_E   , KC_R    , KC_T   ,                   KC_Y   , KC_U    , KC_I    , KC_O   , KC_P   , KC_MINS,
    KC_X0   , KC_A   , KC_S   , KC_D   , KC_F    , KC_G   ,                   KC_H   , KC_J    , KC_K    , KC_L   , KC_SCLN, KC_QUOT,
    KC_LSFT , KC_Z   , KC_X   , KC_C   , KC_V    , KC_B   , _______, _______, KC_N   , KC_M    , KC_COMM , KC_DOT , KC_SLSH, KC_ENT ,
    KC_LCTL , FN1    , KC_LALT, KC_LGUI, LOWERMAC, KC_SPC , _______, _______, KC_XBS , RAISEMAC, KC_LACTL, KC_DOWN, KC_UP  , KC_RGHT
  ),
0
  [_QWERTYWIN] = LAYOUT(
    KC_GRV  , KC_1   , KC_2   , KC_3   , KC_4    , KC_5   ,                   KC_6   , KC_7    , KC_8    , KC_9   , KC_0   , KC_PSCR,
    KC_TAB  , KC_Q   , KC_W   , KC_E   , KC_R    , KC_T   ,                   KC_Y   , KC_U    , KC_I    , KC_O   , KC_P   , KC_MINS,
    KC_X0   , KC_A   , KC_S   , KC_D   , KC_F    , KC_G   ,                   KC_H   , KC_J    , KC_K    , KC_L   , KC_SCLN, KC_QUOT,
    NAV     , KC_Z   , KC_X   , KC_C   , KC_V    , KC_B   , _______, _______, KC_N   , KC_M    , KC_COMM , KC_DOT , KC_SLSH, KC_ENT ,
    KC_LCTL , FN1    , KC_LALT, KC_LGUI, LOWERWIN, KC_SPC , _______, _______, KC_XBS , RAISEWIN, KC_LACTL, KC_DOWN, KC_UP  , KC_RGHT
  ),


  [_LOWERLNX] = LAYOUT(
    KC_TILD, LALT(KC_1), LALT(KC_2), LALT(KC_3), LALT(KC_4), LALT(KC_5),                   LALT(KC_6), LALT(KC_7), LALT(KC_8),  LALT(KC_9), LALT(KC_0), KC_BSPC  ,
    KC_TILD, KC_1      , KC_2      , KC_3      , KC_4      , KC_5      ,                   KC_6      , KC_7      , KC_8      ,  KC_9      , KC_0      , KC_EQL   ,
    KC_WSL , KC_SWL    , KC_SWR    , KC_DL     , KC_DR     , KC_LBRC   ,                   KC_RBRC   , KC_4      , KC_5      ,  KC_6      , KC_PLUS   , KC_BSLS  ,
    KC_LSFT, KC_SWU    , KC_SWD    , KC_SAW    , KC_HAW    , KC_LCBR   , _______, _______, KC_RCBR   , KC_1      , KC_2      ,  KC_3      , KC_MINS   , KC_RETURN,
    KC_DTW , _______   , _______   , _______   , _______   , _______   , _______, _______, KC_DW     , _______   , KC_0      ,  KC_DOT    , _______   , KC_PENT
  ),

  [_LOWERMAC] = LAYOUT(
    KC_TILD, LGUI(KC_1), LGUI(KC_2), LGUI(KC_3), LGUI(KC_4), LGUI(KC_5),                   LGUI(KC_6), LGUI(KC_7), LGUI(KC_8),  LGUI(KC_9), LGUI(KC_0), KC_BSPC  ,
    KC_TILD, KC_1      , KC_2      , KC_3      , KC_4      , KC_5      ,                   KC_6      , KC_7      , KC_8      ,  KC_9      , KC_0      , KC_EQL   ,
    KC_SPLT, KC_CAPP   , KC_RCPP   , KC_SSL    , KC_SSR    , KC_LBRC   ,                   KC_RBRC   , KC_4      , KC_5      ,  KC_6      , KC_PLUS   , KC_BSLS  ,
    KC_LSFT, KC_PB     , KC_PF     , KC_SU     , KC_SD     , KC_LCBR   , _______, _______, KC_RCBR   , KC_1      , KC_2      ,  KC_3      , KC_MINS   , KC_RETURN,
    KC_DEVT, _______   , _______   , _______   , _______   , _______   , _______, _______, KC_DW     , _______   , KC_0      ,  KC_DOT    , _______   , KC_PENT
  ),

  [_LOWERWIN] = LAYOUT(
    KC_TILD, LALT(KC_1), LALT(KC_2), LALT(KC_3), LALT(KC_4), LALT(KC_5),                   LALT(KC_6), LALT(KC_7), LALT(KC_8),  LALT(KC_9), LALT(KC_0), KC_BSPC  ,
    KC_TILD, KC_1      , KC_2      , KC_3      , KC_4      , KC_5      ,                   KC_6      , KC_7      , KC_8      ,  KC_9      , KC_0      , KC_EQL   ,
    KC_WSL , KC_SWL    , KC_SWR    , KC_DL     , KC_DR     , KC_LBRC   ,                   KC_RBRC   , KC_4      , KC_5      ,  KC_6      , KC_PLUS   , KC_BSLS  ,
    KC_LSFT, KC_SWU    , KC_SWD    , KC_SAW    , KC_HAW    , KC_LCBR   , _______, _______, KC_RCBR   , KC_1      , KC_2      ,  KC_3      , KC_MINS   , KC_RETURN,
    KC_DTW , _______   , _______   , _______   , _______   , _______   , _______, _______, KC_DW     , _______   , KC_0      ,  KC_DOT    , _______   , KC_PENT
  ),
  
  
  [_RAISELNX] = LAYOUT(
    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
    KC_GRV , KC_EXLM, KC_AT  , KC_HASH, KC_DLR,  KC_PERC,                   KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_PLUS,
    _______, KC_W1  , _______, KC_HOME, KC_PGUP, KC_MINS,                   KC_EQL , KC_SF  , _______, KC_TL  , KC_TR  , KC_PIPE,
    _______, _______, _______, KC_END , KC_PGDN, KC_UNSC, _______, _______, KC_PLUS, _______, _______, KC_WPB , KC_WPF , KC_PENT,
    KC_DTW , _______, _______, _______, _______, KC_TAB , _______, _______, _______, _______, _______, _______, _______, _______
  ),

  [_RAISEMAC] = LAYOUT(
    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
    KC_GRV , KC_EXLM, KC_AT  , KC_HASH, KC_DLR,  KC_PERC,                   KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_PLUS,
    _______, KC_GRV , _______, KC_HOME, KC_PGUP, KC_MINS,                   KC_EQL , KC_SF  , _______, KC_STL , KC_STR , KC_PIPE,
    _______, _______, _______, KC_END , KC_PGDN, KC_UNSC, _______, _______, KC_PLUS, _______, _______, KC_PB  , KC_PF  , KC_PENT,
    KC_DTW , _______, _______, _______, _______, KC_TAB , _______, _______, _______, _______, _______, _______, _______, _______
  ),

  [_RAISEWIN] = LAYOUT(
    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
    KC_GRV , KC_EXLM, KC_AT  , KC_HASH, KC_DLR,  KC_PERC,                   KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_PLUS,
    _______, KC_W1  , _______, KC_HOME, KC_PGUP, KC_MINS,                   KC_EQL , KC_SF  , _______, KC_TL  , KC_TR  , KC_PIPE,
    _______, _______, _______, KC_END , KC_PGDN, KC_UNSC, _______, _______, KC_PLUS, _______, _______, KC_WPB , KC_WPF , KC_PENT,
    KC_DTW , _______, _______, _______, _______, KC_TAB , _______, _______, _______, _______, _______, _______, _______, _______
  ),

  [_FN1] = LAYOUT(
    KC_F11  , KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  ,                   KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F12 ,
    KC_F11  , KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  ,                   KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F12 ,
    KC_CAPS , _______, _______, _______, _______, _______,                   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, _______,
    _______ , _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    FN1     , FN1    , _______, _______, _______, KC_INS , _______, _______, KC_DEL , _______, KC_MUTE, KC_VOLD, KC_VOLU, KC_MPLY
  ),

  [_MOUSE] = LAYOUT(
    _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______,
    _______, KC_WH_U, KC_MS_U, KC_WH_D, _______, _______,                   _______, _______, _______, _______, _______, _______,
    _______, KC_MS_L, KC_MS_D, KC_MS_R, _______, _______,                   _______, KC_ACL0, KC_ACL1, KC_ACL2, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_BTN1, KC_BTN2, KC_BTN3, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
  ),


  [_NAV] = LAYOUT(
    _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______,
    _______, KC_HOME, KC_PGDN, KC_PGUP , KC_END, _______,                   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, _______,
    NAV    , _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
  ),

  [_ADJUST] =  LAYOUT(
    KC_F1,   KC_F2    , KC_F3    ,   KC_F4,   KC_F5,   KC_F6,                   KC_F7  ,   KC_F8,   KC_F9,   KC_F10 ,  KC_F11,  KC_F12,
    _______, QWERTYMAC, QWERTYWIN, EEP_RST, QK_BOOT, _______,                   _______, _______, _______, _______  , _______, KC_DEL,
    _______, _______  , _______  , _______, _______, AG_NORM,                   AG_SWAP, _______, _______, QWERTYLNX, _______, _______,
    _______, _______  , _______  , _______, _______, _______, _______, _______, _______, MOUSE  , RGB_TOG, RGB_HUI  , RGB_SAI, RGB_VAI,
    _______, _______  , _______  , _______, _______, _______, _______, _______, _______, _______, RGB_MOD, RGB_HUD  , RGB_SAD, RGB_VAD
  )

};

// layer_state_t layer_state_set_user(layer_state_t state) {
//   return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
// }

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
        case QWERTYLNX:
          if (record->event.pressed) {
            set_single_persistent_default_layer(_QWERTYLNX);
          }
          return false;
          break;
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
        case LOWERLNX:
          if (record->event.pressed) {
            layer_on(_LOWERLNX);
            update_tri_layer(_LOWERLNX, _RAISELNX, _ADJUST);
          } else {
            layer_off(_LOWERLNX);
            update_tri_layer(_LOWERLNX, _RAISELNX, _ADJUST);
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
        case RAISELNX:
          if (record->event.pressed) {
            layer_on(_RAISELNX);
            update_tri_layer(_LOWERLNX, _RAISELNX, _ADJUST);
          } else {
            layer_off(_RAISELNX);
            update_tri_layer(_LOWERLNX, _RAISELNX, _ADJUST);
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
      }
    return true;
};
