#include QMK_KEYBOARD_H

enum custom_layers {
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

enum custom_keycodes {
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
  BACKLIT,
  ADJUST
};

#define DEV MO(_DEV)
#define LOWERLNX MO(_LOWERLNX)
#define LOWERMAC MO(_LOWERMAC)
#define LOWERWIN MO(_LOWERWIN)
#define RAISELNX MO(_RAISELNX)
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


// ALL
#define KC_DS LT(DEV, KC_SPC) // Toggle Dev / Space