/* Copyright 2021 Carlos Martins
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

#include "quantum.h"

#ifdef RGB_MATRIX_ENABLE
led_config_t g_led_config = {
    {
        {  0,  1,  2,  3,  4,  5 },
        {  11,  10,  9,  8,  7,  6 },
        {  12,  13,  14,  15,  16,  17 },
        {  23,  22,  21,  20,  19,  18 },
        {  NO_LED,  24,  25,  26,  27,  28 },

        { NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED },

        // {  36,  37,  38,  39,  40,  41 },
        // {  47,  46,  45,  44,  43,  42 },
        // {  48,  49,  50,  51,  52,  53 },
        // {  59,  58,  57,  56,  55,  54 },
        // {  NO_LED, 60,  61,  62,  63,  64 }
        {  35,  36,  37,  38,  39,  40 },
        {  46,  45,  44,  43,  42,  41 },
        {  47,  48,  49,  50,  51,  52 },
        {  58,  57,  56,  55,  54,  53 },
        {  NO_LED, 59,  60,  61,  62,  63 }
    },
    {
        // left underglow is index 29-34
        {0,    0}, {20,  0}, {40,  0}, {61,  0}, {81,  0}, {101, 0}, // 0 - 5
        {101, 16}, {81, 16}, {61, 16}, {40, 16}, {20, 16}, {0, 16}, // 6 - 11
        {0,   32}, {20, 32}, {40, 32}, {61, 32}, {81, 32}, {101, 32}, // 12 - 17
        {101, 48}, {81, 48}, {61, 48}, {40, 48}, {20, 48}, {0,48}, // 18 - 23
        {0,   64}, {20, 64}, {40, 64}, {61, 64}, {81, 64}, // 24 - 28
        {91,  48}, {50, 48}, {10, 48}, {10,  0}, {50,  0}, {91, 0}, // 29 - 34

        // right underglow should be index 65-70
        {224,  0}, {203,  0}, {183,  0}, {162,  0}, {142,  0}, {122, 0}, // 36 - 41
        {122, 16}, {142, 16}, {162, 16}, {183, 16}, {203, 16}, {224, 16}, // 42 - 47
        {224, 32}, {203, 32}, {183, 32}, {162, 32}, {142, 32}, {122, 32}, // 48 - 53
        {122, 48}, {142, 48}, {162, 48}, {183, 48}, {203, 48}, {224, 48}, // 54 - 59
        {224, 64}, {203, 64}, {183, 64}, {162, 64}, {142, 64}, // 60 - 64
        {132, 48}, {172, 48}, {193, 48}, {193,  0}, {172,  0}, {132, 0} // 65 - 70
    },
    {
        LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
        LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
        LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
        LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
        LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
        LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW,

        LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
        LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
        LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
        LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
        LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT, LED_FLAG_KEYLIGHT,
        LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW
    }
};
#endif
