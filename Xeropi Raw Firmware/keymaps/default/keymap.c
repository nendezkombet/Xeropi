/* Copyright 2022 Sandipratama
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

enum layers {
    _FIRST = 0,
    _SECOND,
    _THIRD,
    _FOURTH
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_FIRST] = LAYOUT_ortho_4x4(
  KC_1,    KC_2,    KC_3,    
  KC_4,    KC_5,    KC_6,    
  KC_7,    KC_8,    KC_9,    
  KC_NO,   KC_0,    KC_NO,   KC_P
),

[_SECOND] = LAYOUT_ortho_4x4(
  KC_1,    KC_2,    KC_3,    
  KC_4,    KC_5,    KC_6,    
  KC_7,    KC_8,    KC_9,    
  KC_NO,   KC_0,    KC_NO,   KC_P
),              

[_THIRD] = LAYOUT_ortho_4x4(
  KC_1,    KC_2,    KC_3,    
  KC_4,    KC_5,    KC_6,    
  KC_7,    KC_8,    KC_9,    
  KC_NO,   KC_0,    KC_NO,   KC_P
),    

[_FOURTH] = LAYOUT_ortho_4x4(
  KC_1,    KC_2,    KC_3,    
  KC_4,    KC_5,    KC_6,    
  KC_7,    KC_8,    KC_9,    
  KC_NO,   KC_0,    KC_NO,   KC_P
)
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [_FIRST]  =  { ENCODER_CCW_CW(KC_VOLD, KC_VOLU)  },
    [_SECOND] =  { ENCODER_CCW_CW(RGB_SAD, RGB_SAI)  },
    [_THIRD]  =  { ENCODER_CCW_CW(RGB_SPD, RGB_SPI)  },
    [_FOURTH] =  { ENCODER_CCW_CW(KC_RIGHT, KC_LEFT) },
};
#endif

//qmk compile -kb xeropi -km ding
