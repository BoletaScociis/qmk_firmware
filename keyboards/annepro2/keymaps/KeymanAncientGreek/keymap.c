#include <stdint.h>
#include "annepro2.h"
#include "qmk_ap2_led.h"
#include "config.h"
#define IS_RETRO

enum custom_keycodes {
  KC_ESCTILDE = AP2_SAFE_RANGE
};

enum anne_pro_layers {
  _BASE_LAYER,
  _FN1_LAYER,
  _FN2_LAYER,
  _FN3_LAYER,
  _FN4_LAYER,

  };

// Also I made another declaration here, they must be separate from the layers.
enum {
/*I declared three Tap Dance (TD) functions to make the switch from layer to layer */
/*At the end of the document are the functions and the explanation*/
  TD_TAB_LS1,
  TD_TAB_LS2,
  TD_TAB_LS3,
  TD_LALT_LS4,
 

};
// * -------------------------TAP DANCE------------------------- * 
// Tap Dance Functions definitions:
// The name convention follows this logic that I made:
// TD_TAB_LS1 = Tap Dance Tab LayerSwitch 1 


qk_tap_dance_action_t tap_dance_actions[] = {
    // Tap once for TAB, twice for Switch to Layer1
    [TD_TAB_LS1] = ACTION_TAP_DANCE_LAYER_MOVE (KC_TAB, _FN1_LAYER),
    // Tap once for TAB, twice for Switch to Layer2
    [TD_TAB_LS2] = ACTION_TAP_DANCE_LAYER_MOVE (KC_TAB, _FN2_LAYER),
    // Tap once for TAB, twice for Switch to Base Layer
    [TD_TAB_LS3] = ACTION_TAP_DANCE_LAYER_MOVE (KC_TAB, _BASE_LAYER),
    
    
    
// Each function except TD_LALT_LSS involves tapping the TAB button twice to switch layers. Tapping once functions as a regular TAB. 
// To access FN3, in Base Layer tap LALT twice. Once in FN3, tap TAB twice to exit        
// The principle is the same for TD_LALT_LSS
// * ----------------------------------------------------------- *

};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LT(0,KC_ESC):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(KC_TILD); // Intercept hold function to send Lshift+Εsc
                return false;    
        }
        case LT(0,KC_1):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(LSFT(KC_1)); // Intercept hold function to send Lshift+1
                return false;
        }
            return true;             // Return true for normal processing of tap keycode
        case LT(0,KC_2):
            if (!record->tap.count && record->event.pressed) {
                   tap_code16(LSFT(KC_2)); // Intercept hold function to send Lshift+2
            return false;
        }
            return true;             // Return true for normal processing of tap keycode
        case LT(0,KC_3):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(LSFT(KC_3)); // Intercept hold function to send Lshift+3
                return false;
        }   
            return true;             // Return true for normal processing of tap keycode
        case LT(0,KC_4):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(LSFT(KC_4)); // Intercept hold function to send Lshift+4
                return false;
        }
            return true;             // Return true for normal processing of tap keycode
        case LT(0,KC_5):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(LSFT(KC_5)); // Intercept hold function to send Lshift+5
                return false;
        }
            return true;             // Return true for normal processing of tap keycode
        case LT(0,KC_6):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(LSFT(KC_6)); // Intercept hold function to send Lshift+6
                return false;
        }
            return true;             // Return true for normal processing of tap keycode
        case LT(0,KC_7):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(LSFT(KC_7)); // Intercept hold function to send Lshift+7
        }
            return true;             // Return true for normal processing of tap keycode
        case LT(0,KC_8):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(LSFT(KC_8)); // Intercept hold function to send Lshift+8
                return false;
        }
            return true;             // Return true for normal processing of tap keycode
        case LT(0,KC_9):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(LSFT(KC_9)); // Intercept hold function to send Lshift+9
        }
            return true;             // Return true for normal processing of tap keycode
        case LT(0,KC_0):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(LSFT(KC_0)); // Intercept hold function to send Lshift+0
                return false;
        }
            return true;             // Return true for normal processing of tap keycode
        case LT(0,KC_MINS):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(LSFT(KC_MINS)); // Intercept hold function to send Lshift+-
                return false;
        }
            return true;             // Return true for normal processing of tap keycode
        case LT(0,KC_EQL):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(LSFT(KC_EQL)); // Intercept hold function to send Lshift+=
                return false;
        }
            return true;             // Return true for normal processing of tap keycode
        case LT(0,KC_LBRC):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(LSFT(KC_LBRC)); // Intercept hold function to send Lshift+[
                return false;
        }
            return true;             // Return true for normal processing of tap keycode
        case LT(0,KC_RBRC):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(LSFT(KC_RBRC)); // Intercept hold function to send Lshift+]
                return false;
        }
            return true;             // Return true for normal processing of tap keycode
        case LT(0,KC_BSLS):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(LSFT(KC_BSLS)); // Intercept hold function to send Lshift + Back Slash
                return false;
        }
        return true;             // Return true for normal processing of tap keycode
        case LT(0,KC_SCLN):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(LSFT(KC_SCLN)); // Intercept hold function to send Lshift+;
                return false;
        }
            return true;             // Return true for normal processing of tap keycode
        case LT(0,KC_QUOT):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(LSFT(KC_QUOT)); // Intercept hold function to send Lshift+'
                return false;
        }
            return true;             // Return true for normal processing of tap keycode
        case LT(0,KC_COMM):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(LSFT(KC_COMM)); // Intercept hold function to send Lshift+,
                return false;
        }
            return true;             // Return true for normal processing of tap keycode
        case LT(0,KC_DOT):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(LSFT(KC_DOT)); // Intercept hold function to send Lshift+.
                return false;
        }
            return true;             // Return true for normal processing of tap keycode
        case LT(0,KC_SLSH):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(LSFT(KC_SLSH)); // Intercept hold function to send Lshift+/
        }
            return true;             // Return true for normal processing of tap keycode
        case LT(0, KC_F3):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(LGUI(KC_SPC)); // Intercept hold function to send Lalt plus shift
        }
            return true;             // Return true for normal processing of tap keycode
        case LT(0,KC_W):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(KC_UP); // Intercept hold function to send Lalt plus shift
        }
            return true;             // Return true for normal processing of tap keycode
        case LT(0,KC_A):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(KC_LEFT); // Intercept hold function to send Lalt plus shift
        }
            return true;             // Return true for normal processing of tap keycode
        case LT(0,KC_S):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(KC_DOWN); // Intercept hold function to send Lalt plus shift
        }
            return true;             // Return true for normal processing of tap keycode
        case LT(0,KC_D):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(KC_RGHT); // Intercept hold function to send Lalt plus shift
        }
            return true;             // Return true for normal processing of tap keycode
        }
    return true;
};



// Key symbols are based on QMK. Use them to remap your keyboard
/*
* Layer _BASE_LAYER
* ,-----------------------------------------------------------------------------------------.
* | Esc/~|  1/ EXL | 2/@  | 3/# | 4/$ | 5/% | 6/^ | 7/& | 8  | 9/( | 0/)|Brve|Crcmflx | Bksp|
* |-----------------------------------------------------------------------------------------+
* | Tab    | θ/Θ  | ω/Ω | ε/E | ρ/P | τ/T | ψ/Ψ | υ/Y | ι/I | ο/O | π/Π | [/{ |  }] |   \/ᾼ |
* |-----------------------------------------------------------------------------------------+
* | Caps    |  α/A  |  σ/Σ | δ/Δ | φ/Φ  | γ/Γ | η/H | ξ/Ξ  | κ/K  | λ/Λ |  ;/·  | '/" | Ent |
* |-----------------------------------------------------------------------------------------+
* | Shift      |  ζ/Z | χ/X  | ξ/Ξ | ν/N |  β/B |  ν/N |  μ/M |  ,/<  | ./> |  /?|  Shift   |
* |-----------------------------------------------------------------------------------------+
* | Ctrl  |  Wndws  |  Alt  |               space           |  Alt  |  Lang  |  Del  |  Ctrl|
* \-----------------------------------------------------------------------------------------/
*/

 const uint16_t keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
 [_BASE_LAYER] = KEYMAP( /* Base */
    LT(0, KC_ESC), LT(0,KC_1), LT(0,KC_2), LT(0,KC_3), LT(0,KC_4), LT(0,KC_5), LT(0,KC_6), LT(0,KC_7), LT(0,KC_8), LT(0,KC_9), LT(0,KC_0), LT(0,KC_MINS), LT(0,KC_EQL), KC_BSPC,
    TD(TD_TAB_LS1), KC_Q, LT(0, KC_W), KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, LT(0,KC_LBRC), LT(0,KC_RBRC), LT(0,KC_BSLS),
    KC_CAPS, LT(0,KC_A), LT(0,KC_S), LT(0,KC_D), KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, LT(0,KC_SCLN), LT(0,KC_QUOT), KC_ENT,
    KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, LT(0,KC_COMM), LT(0,KC_DOT), LT(0,KC_SLSH), KC_RSFT,
    KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, KC_RALT, LT(0, KC_F3), KC_DEL, KC_RCTL
),

  /*
  * Layer _FN1_LAYER
    * -----------------------------------------------------------------------------------------.
  * |  Esc |   |   |   ͵   |     |     |     |    |       |  ϗ    | ͼ|  ͽ |  ˘|   ῀ |  BSPC   |
  * |-----------------------------------------------------------------------------------------+
  * | Tab    |  ϑ  | ͷ  |  ϵ  |  ϱ  |  ϛ  |  ϳ   |    | ι   |     | ϖ   | ῾    | ᾿   |   ᾿    |
  * |-----------------------------------------------------------------------------------------+
  * |     |    |   ϲ  | ͻ  |  ϕ   |  ϙ  |  ͱ  |  ϸ  |  ϰ   |    |      |      |    Enter      |
  * |-----------------------------------------------------------------------------------------+
  * | Shift/Alt      | ϡ | ͳ |  ϟ |  ϝ |  ϐ     |  |  ϻ  |       |     |    ´      |   ShiFt  |
  * |-----------------------------------------------------------------------------------------+
  * | Ctrl  |  L1   |  Alt  |               space             |  Alt  |  Lang  |  Del  |  Ctrl|
  * \-----------------------------------------------------------------------------------------/
  * \-----------------------------------------------------------------------------------------/
  *
  */
 [_FN1_LAYER] = KEYMAP( /* AltGr Depressed */
    KC_ESC, KC_NO, KC_NO, RALT(KC_3), KC_NO, KC_NO, KC_NO, KC_NO, RALT(KC_8), RALT(KC_9), RALT(KC_0), RALT(KC_MINS), RALT(KC_EQL), KC_BSPC,
    TD(TD_TAB_LS2), RALT(KC_Q), RALT(KC_W), RALT(KC_E), RALT(KC_R), RALT(KC_T), RALT(KC_Y), KC_NO, RALT(KC_I), KC_NO, RALT(KC_P), RALT(KC_LBRC), RALT(KC_RBRC), RALT(KC_BSLS),
    KC_NO, KC_NO, RALT(KC_S), RALT(KC_D), RALT(KC_F), RALT(KC_G), RALT(KC_H), RALT(KC_J), RALT(KC_K), KC_NO, KC_NO, KC_NO, KC_ENT,
    KC_LSFT, RALT(KC_Z), RALT(KC_X), RALT(KC_C), RALT(KC_V), RALT(KC_B), KC_NO, RALT(KC_M), KC_NO, KC_NO, RALT(KC_SLSH), KC_RSFT,
    KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, KC_RALT, LT(0, KC_F3), KC_DEL, KC_RCTL
 ),
/*
  * Layer _FN2_LAYER
    * -----------------------------------------------------------------------------------------.
  * |    |    |    |   ʹ  |     |     |     |    |   Ϗ    |      | Ͼ|  Ͽ |  ¯|   ¨ |  BSPC    |
  * |-----------------------------------------------------------------------------------------+
  * | Tab    |  ϴ  | Ͷ  |  ϶  |  ϼ  |  Ϛ  |     |    | ϒ   |     |    |     |    |            |
  * |-----------------------------------------------------------------------------------------+
  * | Del   |    |   Ϲ  | Ͻ  |     |  Ϙ  |  Ͱ  |  Ϸ |     |    |      |      |    Enter    |
  * |-----------------------------------------------------------------------------------------+
  * | Shift/Alt  | Ϡ | Ͳ |  Ϟ |      Ϝ   |    |  |  Ϻ  |     |     |    ͺ      |      UP      |
  * |-----------------------------------------------------------------------------------------+
  * | Ctrl  |  L1   |  Alt  |               space             |  Alt  |  LEFT  |  DWN  | RGHT |
  * \-----------------------------------------------------------------------------------------/
  * \-----------------------------------------------------------------------------------------/
  *
  */
 [_FN2_LAYER] = KEYMAP( /* AltGr and LSFT depressed */
    KC_ESC, KC_NO, KC_NO, RALT(LSFT(KC_3)), KC_NO, KC_NO, KC_NO, RALT(LSFT(KC_7)), KC_NO, RALT(LSFT(KC_9)), RALT(LSFT(KC_0)), RALT(LSFT(KC_MINS)), RALT(LSFT(KC_EQL)), KC_BSPC,
    TD(TD_TAB_LS3), RALT(LSFT(KC_Q)), RALT(LSFT(KC_W)), RALT(LSFT(KC_E)), RALT(LSFT(KC_R)), RALT(LSFT(KC_T)), KC_NO, RALT(LSFT(KC_U)), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    KC_CAPS, KC_NO, RALT(LSFT(KC_S)), RALT(LSFT(KC_D)), KC_NO, RALT(LSFT(KC_G)), RALT(LSFT(KC_H)), RALT(LSFT(KC_J)), KC_NO, KC_NO, KC_NO, KC_NO, KC_ENT,
    LALT(KC_LSFT), RALT(LSFT(KC_Z)), RALT(LSFT(KC_X)), RALT(LSFT(KC_C)), RALT(LSFT(KC_V)), KC_NO, KC_NO, RALT(LSFT(KC_M)), KC_NO, KC_NO, RALT(LSFT(KC_SLSH)), KC_RSFT,
    KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, KC_RALT, LT(0, KC_F3), KC_DEL, KC_RCTL
 ),
};
const uint16_t keymaps_size = sizeof(keymaps);


void matrix_init_user(void) {

}

void matrix_scan_user(void) {
}

// Code to run after initializing the keyboard
void keyboard_post_init_user(void) {
    // Here are two common functions that you can use. For more LED functions, refer to the file "qmk_ap2_led.h"

    // annepro2-shine disables LEDs by default. Uncomment this function to enable them at startup.
    annepro2LedEnable();

    // Additionally, it also chooses the first LED profile by default. Refer to the "profiles" array in main.c in
    // annepro2-shine to see the order. Replace "i" with the index of your preferred profile. (i.e the RED profile is index 0)
    annepro2LedSetProfile(1); // NB. This appears to be non-functional since the below code overrides defaults).
}

layer_state_t layer_state_set_user(layer_state_t layer) {
  /* This is an example of how to automatically highlight keys that are active in a selected layer */
  const uint16_t *keymap = &keymaps[get_highest_layer(layer)][0][0];
  annepro2Led_t color = {
    .p.red = 0,
    .p.green = 0,
    .p.blue = 0,
    .p.alpha = 0xff, 
  };
  annepro2Led_t color_disabled = {
    .p.red = 0,
    .p.green = 0,
    .p.blue = 0,
    .p.alpha = 0xff, 
  };
  switch(get_highest_layer(layer)) {
    case _BASE_LAYER:
      color.p.red = 0x21;
      color.p.green = 0x8D;
      color.p.blue = 0xB1;
      color.p.alpha = 0xff;  
    break;
    case _FN1_LAYER:
      color.p.red = 0x0B;
      color.p.green = 0x6B;
      color.p.blue = 0x53;
      color.p.alpha = 0x94; 
      color_disabled.p.red = 0xFA; 
      color_disabled.p.green = 0x76;
      color_disabled.p.blue = 0x10;
      color_disabled.p.alpha = 0xff; 
      break;
    case _FN2_LAYER:
      color.p.red = 0x0C;
      color.p.green = 0x4D;
      color.p.blue = 0xA2;
      color.p.alpha = 0xff; 
      color_disabled.p.red = 0xFA; 
      color_disabled.p.green = 0x76;
      color_disabled.p.blue = 0x10;
      color_disabled.p.alpha = 0xff; 
      break;
      default:
      // Reset back to the current profile
      annepro2LedResetForegroundColor();
      return layer;
  }
  // annepro2LedMaskSetMono(color); // <- disabled
  for (int row = 0; row < MATRIX_ROWS; row++) {
    for (int col = 0; col < MATRIX_COLS; col++) {
      if (keymap[MATRIX_COLS*row + col] != KC_NO) {
        ledMask[ROWCOL2IDX(row, col)] = color;
      } else {
        ledMask[ROWCOL2IDX(row, col)] = color_disabled;
      }
    }
        annepro2LedMaskSetRow(row);
  }
  return layer;
}
