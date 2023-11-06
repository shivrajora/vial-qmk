#pragma once

#include "trackball.h"

#define XXX KC_NO


#define LAYOUT_5x6( \
    L55, L54, L53, L52, L51, L50,                          R50, R51, R52, R53, R54, R55, \
    L45, L44, L43, L42, L41, L40,                          R40, R41, R42, R43, R44, R45, \
    L35, L34, L33, L32, L31, L30,                          R30, R31, R32, R33, R34, R35, \
    L25, L24, L23, L22, L21, L20,                          R20, R21, R22, R23, R24, R25, \
              L13, L12,                                              R12, R13, \
                       L02, L01, L00,                   R00, R01, \
                                                      R02, R03, \
                                                    R04, R05 \
) { \
    { L00, L01, L02, L03, L04, L05 }, \
    { L10, L11, L12, L13, L14, L15 }, \
    { L20, L21, L22, L23, L24, L25 }, \
    { L30, L31, L32, L33, L34, L35 }, \
    { XXX, XXX, L42, L43, L44, L45 }, \
    { XXX, XXX, L52, L53, L54, L55 }, \
\
    { R00, R01, R02, R03, R04, R05 }, \
    { R10, R11, R12, R13, R14, R15 }, \
    { R20, R21, R22, R23, R24, R25 }, \
    { R30, R31, R32, R33, R34, R35 }, \
    { XXX, XXX, R42, R43, XXX, XXX }, \
    { R50, R51, R52, R53, L54, L55 } \
}
