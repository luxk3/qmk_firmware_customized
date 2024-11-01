// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layers {
    _MAIN,
	_CAMERA
};



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_MAIN] = LAYOUT_default(
	  KC_NO, KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,	
	  RGB_HUI, KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,	   KC_MS_BTN2,	
	  RGB_MODE_PLAIN, KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,	   KC_NO,	
	  RGB_MODE_FORWARD, KC_LSFT, KC_GRAVE, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,	
	  RGB_TOG, KC_LEFT_CTRL, KC_LEFT_ALT, KC_NO, KC_LEFT_GUI, TG(_CAMERA), KC_SPACE, KC_MS_BTN1, 
	  
	  
	  KC_7, KC_8, KC_9, KC_0, KC_MINUS, KC_EQUAL, KC_BACKSPACE, KC_MEDIA_PLAY_PAUSE,
	  KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LEFT_BRACKET, KC_RIGHT_BRACKET, KC_BACKSLASH, KC_KB_VOLUME_UP,
	  KC_H, KC_J, KC_K, KC_L, KC_SEMICOLON, KC_QUOTE, KC_ENTER, KC_KB_VOLUME_DOWN,
	  KC_N, KC_M, KC_COMMA, KC_DOT, KC_SLASH, KC_RIGHT_SHIFT, KC_UP, KC_PRINT_SCREEN,
	  KC_SPACE, KC_LEFT_GUI, KC_NO, KC_RIGHT_CTRL, KC_LEFT, KC_DOWN, KC_RIGHT
	  
  ),
  [_CAMERA] = LAYOUT_default(
		KC_NO, KC_NO,  KC_1,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,	
		KC_NO, KC_NO,  KC_NO,    KC_PGUP,    KC_NO,    KC_NO,    KC_NO, KC_NO,	
		KC_NO, KC_NO, KC_NO,    KC_PGDN,    KC_NO,    KC_NO,    KC_NO, KC_NO,	
		KC_NO, KC_NO, KC_NO, KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,	
		_______, _______, _______, _______, _______, _______, _______, _______, 


		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
		_______, _______, _______, _______, _______, _______, _______

  )
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [_MAIN] =   { ENCODER_CCW_CW(KC_MS_WH_UP, KC_MS_WH_DOWN) },
	[_CAMERA] = { ENCODER_CCW_CW(KC_MS_WH_UP, KC_MS_WH_DOWN) }
};
#endif