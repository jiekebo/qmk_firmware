/* Copyright 2021 Jacob Salomonsen
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

#pragma once

#include "quantum.h"

/* This is a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */
#define LAYOUT( \
    KA0,        KA2,  KA3,  KA4,  KA5,  KA6,  KA7,  KA8,  KA9, KA10, KA11, KA12, KA13,      KA15, KA16, KA17, \
    KC0,  KC1,  KC2,  KC3,  KC4,  KC5,  KC6,  KC7,  KC8,  KC9, KC10, KC11, KC12, KC13,      KC15, KC16, KC17,      KC19, KC20, KC21, KC22, \
    KD0,  KD1,  KD2,  KD3,  KD4,  KD5,  KD6,  KD7,  KD8,  KD9, KD10, KD11, KD12,            KD15, KD16, KD17,      KD19, KD20, KD21, KD22, \
    KE0,  KE1,  KE2,  KE3,  KE4,  KE5,  KE6,  KE7,  KE8,  KE9, KE10, KE11, KE12, KE13,                             KE19, KE20, KE21, \
    KF0,  KF1,  KF2,  KF3,  KF4,  KF5,  KF6,  KF7,  KF8,  KF9, KF10, KF11,       KF12,            KF16,            KF19, KF20, KF21, KF22, \
    KG0,        KG1,                    KG2,                         KG12,       KG13,      KG15, KG16, KG17,      KG19, KG20 \
) { \
    { KC_NO,    KC_NO,  KA0,    KF1,    KA5,    KE5,    KA6,    KE6,    KA7,    KC_NO,  KE11,   KC_NO,  KG19,   KG20,   KF16,   KG1   }, \
    { KC_NO,    KF0,    KD0,    KE0,    KA4,    KD5,    KC13,   KD6,    KD12,   KA8,    KD11,   KE19,   KE20,   KE21,   KC_NO,  KC_NO }, \
    { KG0,      KC_NO,  KC0,    KA2,    KA3,    KC5,    KA10,   KC6,    KC12,   KA9,    KC11,   KD15,   KC15,   KC17,   KC16,   KC_NO }, \
    { KC_NO,    KC_NO,  KC1,    KC2,    KC3,    KC4,    KA11,   KC7,    KC8,    KC9,    KC10,   KA12,   KA13,   KD17,   KD16,   KA15  }, \
    { KC_NO,    KC_NO,  KD1,    KD2,    KD3,    KD4,    KC_NO,  KD7,    KD8,    KD9,    KD10,   KD19,   KD20,   KD21,   KD22,   KA16  }, \
    { KC_NO,    KC_NO,  KE1,    KE2,    KE3,    KE4,    KC_NO,  KE7,    KE8,    KE9,    KE10,   KF19,   KF20,   KF21,   KF22,   KC_NO }, \
    { KG13,     KF12,   KF2,    KF3,    KF4,    KF5,    KE13,   KF8,    KF9,    KF10,   KE12,   KC19,   KC20,   KC21,   KA17,   KC_NO }, \
    { KC_NO,    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KF6,    KG2,    KF7,    KC_NO,  KC_NO,  KF11,   KG16,   KG17,   KC22,   KG15,   KG12  }  \
}
