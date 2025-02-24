/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

// #define USE_MATRIX_I2C

/* Select hand configuration */

#define SPLIT_USB_DETECT

#define MASTER_LEFT
// #define MASTER_RIGHT
// #define EE_HANDS

// #define QUICK_TAP_TERM 0
// #define TAPPING_TERM 100
#define DYNAMIC_KEYMAP_LAYER_COUNT 8
// #define DRIVER_LED_TOTAL 42
// #define BACKLIGHT_ON_STATE 0

#define RGB_MATRIX_DEFAULT_HUE 125 // Sets the default hue value, if none has been set
#define RGB_MATRIX_DEFAULT_SAT 255 //

#ifdef RGBLIGHT_ENABLE
// #    define RGBLIGHT_EFFECT_STATIC_GRADIENT
// #    define RGBLIGHT_MODE_STATIC_LIGHT
// #    define RGBLIGHT_LIMIT_VAL 120
// #    define RGBLIGHT_HUE_STEP 10
// #    define RGBLIGHT_SAT_STEP 17
// #    define RGBLIGHT_VAL_STEP 17
#endif

#ifdef RGB_MATRIX_ENABLE
// #    define RGB_MATRIX_SOLID_COLOR
// #    define RGB_MATRIX_HUE_STEP 10
// #    define RGB_MATRIX_SAT_STEP 18
// #    define RGB_MATRIX_VAL_STEP 15
// #    define RGB_MATRIX_SPD_STEP 10
// #    define ENABLE_RGB_MATRIX_SOLID_COLOR
#endif
