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
extern MidiDevice midi_device;

enum layers {
    _FIRST = 0,
    _SECOND,
    _THIRD,
    _FOURTH
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[0] = LAYOUT_ortho_4x4(
  KC_1,    KC_2,    KC_3,    
  KC_4,    KC_5,    KC_6,    
  KC_7,    KC_8,    KC_9,    
  KC_TRNS,   KC_0,    KC_TRNS,   KC_P
),

[1] = LAYOUT_ortho_4x4(
  KC_1,    KC_2,    KC_3,    
  KC_4,    KC_5,    KC_6,    
  KC_7,    KC_8,    KC_9,    
  KC_TRNS,   KC_0,    KC_TRNS,   KC_P
),              

[2] = LAYOUT_ortho_4x4(
  KC_1,    KC_2,    KC_3,    
  KC_4,    KC_5,    KC_6,    
  KC_7,    KC_8,    KC_9,    
  KC_TRNS,   KC_0,    KC_TRNS,   KC_P
),    

[3] = LAYOUT_ortho_4x4(
  KC_1,    KC_2,    KC_3,    
  KC_4,    KC_5,    KC_6,    
  KC_7,    KC_8,    KC_9,    
  KC_TRNS,   KC_0,    KC_TRNS,   KC_P
)
};


#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0]  =  { ENCODER_CCW_CW(KC_VOLD, KC_VOLU)  },
    [1] =  { ENCODER_CCW_CW(RGB_SAD, RGB_SAI)  },
    [2]  =  { ENCODER_CCW_CW(RGB_SPD, RGB_SPI)  },
    [3] =  { ENCODER_CCW_CW(KC_RIGHT, KC_LEFT) },
};
#endif

enum custom_keycodes { CC21 = USER00, CC22, CC23, CC24, CC25, CC26, CC27, CC28, CC29, CC30, CC31, CC32, CC33, CC34, CC35, CC36, CC37, CC38, CC39, CC40, CC41, CC42, CC43, CC44, CC_DEC, CC_INC };

static uint8_t current_MIDI_ccNumber         = 21;
int16_t encoder_val = 0;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case CC21:
            if (record->event.pressed) {
                current_MIDI_ccNumber         = 21;
            } else {
            }
            return false;
            break;
        case CC22:
            if (record->event.pressed) {
                current_MIDI_ccNumber         = 22;
            } else {
            }
            return false;
            break;
        case CC23:
            if (record->event.pressed) {
                current_MIDI_ccNumber         = 23;
            } else {
            }
            return false;
            break;
        case CC24:
            if (record->event.pressed) {
                current_MIDI_ccNumber         = 24;
            } else {
            }
            return false;
            break;
        case CC25:
            if (record->event.pressed) {
                current_MIDI_ccNumber         = 25;
            } else {
            }
            return false;
            break;
        case CC26:
            if (record->event.pressed) {
                current_MIDI_ccNumber         = 26;
            } else {
            }
            return false;
            break;
        case CC27:
            if (record->event.pressed) {
                current_MIDI_ccNumber         = 27;
            }
            return false;
            break;
        case CC28:
            if (record->event.pressed) {
                current_MIDI_ccNumber         = 28;
            } else {
            }
            return false;
            break;
        case CC29:
            if (record->event.pressed) {
                current_MIDI_ccNumber         = 29;
            } else {
            }
            return false;
            break;
        case CC30:
            if (record->event.pressed) {
                current_MIDI_ccNumber         = 30;
            } else {
            }
            return false;
            break;
        case CC31:
            if (record->event.pressed) {
                current_MIDI_ccNumber         = 31;
            } else {
            }
            return false;
            break;
        case CC32:
            if (record->event.pressed) {
                current_MIDI_ccNumber         = 32;
            } else {
            }
            return false;
            break;
        case CC33:
            if (record->event.pressed) {
                current_MIDI_ccNumber         = 33;
            } else {
            }
            return false;
            break;
        case CC34:
            if (record->event.pressed) {
                current_MIDI_ccNumber         = 34;
            } else {
            }
            return false;
            break;
        case CC35:
            if (record->event.pressed) {
                current_MIDI_ccNumber         = 35;
            } else {
            }
            return false;
            break;
        case CC36:
            if (record->event.pressed) {
                current_MIDI_ccNumber         = 36;
            } else {
            }
            return false;
            break;
        case CC37:
            if (record->event.pressed) {
                current_MIDI_ccNumber         = 37;
            } else {
            }
            return false;
            break;
        case CC38:
            if (record->event.pressed) {
                current_MIDI_ccNumber         = 38;
            } else {
            }
            return false;
            break;
        case CC39:
            if (record->event.pressed) {
                current_MIDI_ccNumber         = 39;
            } else {
            }
            return false;
            break;
        case CC40:
            if (record->event.pressed) {
                current_MIDI_ccNumber         = 40;
            } else {
            }
            return false;
            break;
        case CC41:
            if (record->event.pressed) {
                current_MIDI_ccNumber         = 41;
            } else {
            }
            return false;
            break;
        case CC42:
            if (record->event.pressed) {
                current_MIDI_ccNumber         = 42;
            } else {
            }
            return false;
            break;
        case CC43:
            if (record->event.pressed) {
                current_MIDI_ccNumber         = 43;
            } else {
            }
            return false;
            break;
        case CC44:
            if (record->event.pressed) {
                current_MIDI_ccNumber         = 44;
            } else {
            }
            return false;
            break;
        case CC_DEC:
            if (record->event.pressed) {
                encoder_val--;
		midi_send_cc(&midi_device, 0, current_MIDI_ccNumber, encoder_val);
            } else {
            }
            return false;
            break;
        case CC_INC:
            if (record->event.pressed) {
                encoder_val++;
		midi_send_cc(&midi_device, 0, current_MIDI_ccNumber, encoder_val);
            } else {
            }
            return false;
            break;
        default:
            break;
    }
    return true;
}


//make xeropi:test