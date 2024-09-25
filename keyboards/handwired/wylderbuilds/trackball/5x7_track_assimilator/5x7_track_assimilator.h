//
// Created by nethe on 11/9/2022.
//

#ifndef WYLD_QMK_FIRMWARE_6X7_H
#define WYLD_QMK_FIRMWARE_6X7_H

#endif // WYLD_QMK_FIRMWARE_6X6_H

#pragma once

#include "quantum.h"

#define XXX KC_NO

#define LAYOUT_manuform_number_row( \
  r5c6, r5c5, r5c4, r5c3, r5c2, r5c1, r5c0,                 r12c7, r12c8, r12c9, r12c10, r12c11, r12c12, r12c13,\
  r4c6, r4c5, r4c4, r4c3, r4c2, r4c1, r4c0,                 r11c7, r11c8, r11c9, r11c10, r11c11, r11c12, r11c13,\
  r3c6, r3c5, r3c4, r3c3, r3c2, r3c1, r3c0,                 r10c7, r10c8, r10c9, r10c10, r10c11, r10c12, r10c13,\
  r2c6, r2c5, r2c4, r2c3, r2c2, r2c1, r2c0,                 r9c7,  r9c8,  r9c9,  r9c10,  r9c11,  r9c12,  r9c13, \
                    r1c3, r1c2, r0c2, r0c1, r0c0,          r7c7,          r8c9,  r8c10,    \
                                r0c3, r0c4, r0c5,          r7c8,                                                     \
                                                    r7c10, r7c9 \
) \
{ \
    { r0c0, r0c1, r0c2, r0c3, r0c4, r0c5, KC_NO, KC_NO }, \
    { KC_NO, KC_NO, r1c2, r1c3, KC_NO, KC_NO, KC_NO, KC_NO  }, \
    { r2c0, r2c1, r2c2, r2c3, r2c4, r2c5, r2c6, KC_NO }, \
    { r3c0, r3c1, r3c2, r3c3, r3c4, r3c5, r3c6, KC_NO }, \
    { r4c0, r4c1, r4c2, r4c3, r4c4, r4c5, r4c6, KC_NO }, \
    { r5c0, r5c1, r5c2, r5c3, r5c4, r5c5, r5c6, KC_NO }, \
    { KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO  }, \
\
    { r7c7,   r7c8,  r7c9,  r7c10, KC_NO, KC_NO, KC_NO, KC_NO }, \
    { KC_NO,  KC_NO, r8c9,  r8c10,  KC_NO,  KC_NO,  KC_NO, KC_NO }, \
    {  r9c7,  r9c8,  r9c9,  r9c10,  r9c11,  r9c12,  r9c13, KC_NO }, \
    { r10c7, r10c8, r10c9, r10c10, r10c11, r10c12, r10c13, KC_NO }, \
    { r11c7, r11c8, r11c9, r11c10, r11c11, r11c12, r11c13, KC_NO }, \
    { r12c7, r12c8, r12c9, r12c10, r12c11, r12c12, r12c13, KC_NO }, \
    { KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO } \
}

#define LAYOUT_5x7( \
    L00, L01, L02, L03, L04, L05, L06,                         R00, R01, R02, R03, R04, R05, R06, \
    L10, L11, L12, L13, L14, L15, L16,                         R10, R11, R12, R13, R14, R15, R16, \
    L20, L21, L22, L23, L24, L25, L26,                         R20, R21, R22, R23, R24, R25, R26, \
    L30, L31, L32, L33, L34, L35, L36,                         R30, R31, R32, R33, R34, R35, R36, \
    L40, L41, L42, L43, L44, L45, L46,                         R40, R41, R42, R43, R44, R45, R46, \
    L50, L51, L52, L53, L54,                                             R52, R53, R54, R55, R56, \
                             L55, L56,                        R50, R51, \
                               L65, L66,                    R60, R61, \
                                 L63, L64,               R62, R63 \
) { \
    { L00, L01, L02, L03, L04, L05, L06 }, \
    { L10, L11, L12, L13, L14, L15, L16 }, \
    { L20, L21, L22, L23, L24, L25, L26 }, \
    { L30, L31, L32, L33, L34, L35, L36 }, \
    { L40, L41, L42, L43, L44, L45, L46 }, \
    { L50, L51, L52, L53, L54, L55, L56 }, \
    { XXX, XXX, XXX, L63, L64, L65, L66 }, \
\
    { R00, R01, R02, R03, R04, R05, R06 }, \
    { R10, R11, R12, R13, R14, R15, R16 }, \
    { R20, R21, R22, R23, R24, R25, R26 }, \
    { R30, R31, R32, R33, R34, R35, R36 }, \
    { R40, R41, R42, R43, R44, R45, R46 }, \
    { R50, R51, R52, R53, R54, R55, R56 }, \
    { R60, R61, R62, R63, XXX, XXX, XXX } \
}
