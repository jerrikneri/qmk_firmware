#include "jerrik.h"
#include "muse.h"

enum preonic_layers {custom_layers};

enum preonic_keycodes {custom_keycodes};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_QWERTYLNX] = LAYOUT_preonic_grid(
  KC_GRV  , KC_1   , KC_2   , KC_3   , KC_4    , KC_5   , KC_6   , KC_7    , KC_8    , KC_9   , KC_0   , KC_PSCR  ,
  KC_TAB  , KC_Q   , KC_W   , KC_E   , KC_R    , KC_T   , KC_Y   , KC_U    , KC_I    , KC_O   , KC_P   , KC_MINS  ,
  KC_X0   , KC_A   , KC_S   , KC_D   , KC_F    , KC_G   , KC_H   , KC_J    , KC_K    , KC_L   , KC_SCLN, KC_QUOT  ,
  KC_LSFT , KC_Z   , KC_X   , KC_C   , KC_V    , KC_B   , KC_N   , KC_M    , KC_COMM , KC_DOT , KC_SLSH, KC_X4    ,
  FN1     , FN2    , KC_LALT, KC_LGUI, LOWERLNX, KC_DS  , KC_XBS , RAISELNX, KC_LACTL, KC_DOWN, KC_UP  , KC_RGHT
),

[_QWERTYMAC] = LAYOUT_preonic_grid(
  KC_GRV  , KC_1   , KC_2   , KC_3   , KC_4    , KC_5  , KC_6   , KC_7    , KC_8   , KC_9   , KC_0   , KC_BSPC  ,
  KC_TAB  , KC_Q   , KC_W   , KC_E   , KC_R    , KC_T  , KC_Y   , KC_U    , KC_I   , KC_O   , KC_P   , KC_MINS  ,
  KC_X0   , KC_A   , KC_S   , KC_D   , KC_F    , KC_G  , KC_H   , KC_J    , KC_K   , KC_L   , KC_SCLN, KC_QUOT  ,
  KC_LSFT , KC_Z   , KC_X   , KC_C   , KC_V    , KC_B  , KC_N   , KC_M    , KC_COMM, KC_DOT , KC_SLSH, KC_X4    ,
  FN1     , FN2    , KC_LALT, KC_LGUI, LOWERMAC, KC_DS , KC_XBS , RAISEMAC, KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT
),

[_QWERTYWIN] = LAYOUT_preonic_grid(
  KC_GRV  , KC_1   , KC_2   , KC_3   , KC_4    , KC_5  , KC_6   , KC_7    , KC_8   , KC_9   , KC_0   , KC_PSCR  ,
  KC_TAB  , KC_Q   , KC_W   , KC_E   , KC_R    , KC_T  , KC_Y   , KC_U    , KC_I   , KC_O   , KC_P   , KC_MINS  ,
  KC_X0   , KC_A   , KC_S   , KC_D   , KC_F    , KC_G  , KC_H   , KC_J    , KC_K   , KC_L   , KC_SCLN, KC_QUOT  ,
  KC_LSFT , KC_Z   , KC_X   , KC_C   , KC_V    , KC_B  , KC_N   , KC_M    , KC_COMM, KC_DOT , KC_SLSH, KC_X4    ,
  FN1     , FN2    , KC_LALT, KC_LGUI, LOWERWIN, KC_DS , KC_XBS , RAISEWIN, KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT
),

[_DEV] = LAYOUT_preonic_grid(
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, KC_UP  , _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______, _______, _______, _______, _______, _______,
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

[_LOWERLNX] = LAYOUT_preonic_grid(
  KC_TILD, LALT(KC_1), LALT(KC_2), LALT(KC_3), LALT(KC_4), LALT(KC_5), LALT(KC_6), LALT(KC_7), LALT(KC_8),  LALT(KC_9), LALT(KC_0), KC_BSPC  ,
  KC_TILD, KC_1      , KC_2      , KC_3      , KC_4      , KC_5      , KC_6      , KC_7      , KC_8      ,  KC_9      , KC_0      , KC_EQL   ,
  KC_WSL , KC_SWL    , KC_SWR    , KC_DL     , KC_DR     , KC_LBRC   , KC_RBRC   , KC_4      , KC_5      ,  KC_6      , KC_PLUS   , KC_BSLS  ,
  _______, KC_SWU    , KC_SWD    , KC_SAW    , KC_HAW    , KC_LCBR   , KC_RCBR   , KC_1      , KC_2      ,  KC_3      , KC_MINS   , KC_RETURN,
  KC_DTW , _______   , _______   , _______   , _______   , _______   , KC_DW     , _______   , KC_0      ,  KC_DOT    , _______   , KC_PENT
),

[_LOWERMAC] = LAYOUT_preonic_grid(
  KC_TILD, LGUI(KC_1), LGUI(KC_2), LGUI(KC_3), LGUI(KC_4), LGUI(KC_5), LGUI(KC_6), LGUI(KC_7), LGUI(KC_8),  LGUI(KC_9), LGUI(KC_0), KC_BSPC  ,
  KC_TILD, KC_1      , KC_2      , KC_3      , KC_4      , KC_5      , KC_6      , KC_7      , KC_8      ,  KC_9      , KC_0      , KC_EQL   ,
  KC_SPLT, KC_CAPP   , KC_RCPP   , KC_SSL    , KC_SSR    , KC_LBRC   , KC_RBRC   , KC_4      , KC_5      ,  KC_6      , KC_PLUS   , KC_BSLS  ,
  _______, KC_PB     , KC_PF     , KC_SU     , KC_SD     , KC_LCBR   , KC_RCBR   , KC_1      , KC_2      ,  KC_3      , KC_MINS   , KC_RETURN,
  KC_DEVT, _______   , _______   , _______   , _______   , _______   , KC_DW     , _______   , KC_0      ,  KC_DOT    , _______   , KC_PENT
),

[_LOWERWIN] = LAYOUT_preonic_grid(
  KC_TILD, LALT(KC_1), LALT(KC_2), LALT(KC_3), LALT(KC_4), LALT(KC_5), LALT(KC_6), LALT(KC_7), LALT(KC_8),  LALT(KC_9), LALT(KC_0), KC_BSPC  ,
  KC_TILD, KC_1      , KC_2      , KC_3      , KC_4      , KC_5      , KC_6      , KC_7      , KC_8      ,  KC_9      , KC_0      , KC_EQL   ,
  KC_WSL , KC_SWL    , KC_SWR    , KC_DL     , KC_DR     , KC_LBRC   , KC_RBRC   , KC_4      , KC_5      ,  KC_6      , KC_PLUS   , KC_BSLS  ,
  _______, KC_SWU    , KC_SWD    , KC_SAW    , KC_HAW    , KC_LCBR   , KC_RCBR   , KC_1      , KC_2      ,  KC_3      , KC_MINS   , KC_RETURN,
  KC_DTW , _______   , _______   , _______   , _______   , _______   , KC_DW     , _______   , KC_0      ,  KC_DOT    , _______   , KC_PENT
),

[_RAISELNX] = LAYOUT_preonic_grid(
  KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
  KC_GRV , KC_EXLM, KC_AT  , KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_PLUS,
  _______, KC_W1  , _______, KC_HOME, KC_PGUP, KC_MINS, KC_EQL , KC_SF  , _______, KC_TL  , KC_TR  , KC_PIPE,
  _______, _______, _______, KC_END , KC_PGDN, KC_UNSC, KC_PLUS, _______, _______, KC_WPB , KC_WPF , KC_PENT,
  KC_DTW , _______, _______, _______, _______, KC_TAB , _______, _______, _______, _______, _______, _______
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
  _______, KC_W1  , _______, KC_HOME, KC_PGUP, KC_MINS, KC_EQL , KC_SF  , _______, KC_TL  , KC_TR  , KC_PIPE,
  _______, _______, _______, KC_END , KC_PGDN, KC_UNSC, KC_PLUS, _______, _______, KC_WPB , KC_WPF , KC_PENT,
  KC_DTW , _______, _______, _______, _______, KC_TAB , _______, _______, _______, _______, _______, _______
),

[_NAV] = LAYOUT_preonic_grid(
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, KC_HOME, KC_PGDN, KC_PGUP , KC_END, _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
),

[_FN1] = LAYOUT_preonic_grid(
  KC_F11  , KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F12 ,
  KC_F11  , KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F12 ,
  KC_CAPS , _______, _______, _______, _______, _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, _______,
  _______ , _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  FN1     , _______, _______, _______, _______, KC_INS , KC_DEL , _______, KC_MUTE, KC_VOLD, KC_VOLU, KC_MPLY
),

[_FN2] = LAYOUT_preonic_grid(
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, MI_ON  , MI_OFF , _______, _______, _______, _______, _______,
  _______, _______, _______, AU_ON  ,  AU_OFF, AG_NORM, AG_SWAP, _______, _______, _______, _______, _______,
  _______, MUV_DE , MUV_IN , MU_ON  ,  MU_OFF, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, MU_MOD , _______, _______, _______, _______, _______, _______, _______, _______, _______
),

[_ADJUST] = LAYOUT_preonic_grid(
  _______, _______  , _______  , _______, _______, _______, _______, _______, _______, _______  , _______, _______,
  _______, QWERTYMAC, QWERTYWIN, _______, QK_BOOT, _______, _______, _______, _______, _______  , _______, _______,
  _______, ALT      , _______  , _______, _______, _______, _______, _______, _______, QWERTYLNX, _______, _______,
  _______, _______  , _______  , _______, _______, _______, NAV    , MOUSE  , _______, _______  , _______, _______,
  _______, _______  , _______  , _______, _______, _______, _______, _______, _______, _______  , _______, _______
)


};

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
        case NAV:
          if (record->event.pressed) {
            set_single_persistent_default_layer(_NAV);
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
    case _RAISELNX:
        rgblight_setrgb (0x00,  0x00, 0xFF);
        break;
    case _RAISEMAC:
        rgblight_setrgb (0x00,  0x00, 0xFF);
        break;
    case _RAISEWIN:
        rgblight_setrgb (0x00,  0x00, 0xFF);
        break;
    case _LOWERLNX:
        rgblight_setrgb (0xFF,  0x00, 0x00);
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
        rgblight_setrgb (0xAA,  0xAA, 0xAA);
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
    case RAISELNX:
    case RAISEMAC:
    case RAISEWIN:
    case LOWERLNX:
    case LOWERMAC:
    case LOWERWIN:
      return false;
    default:
      return true;
  }
}
