#pragma once

#include "trackball.h"

#define XXX KC_NO


#define LAYOUT_6x6( \
    L01, L02, L03, L04, L05, L06,                      R01, R02, R03, R04, R05, R06 \
    L11, L12, L13, L14, L15, L16,                      R11, R12, R13, R14, R15, R16 \
    L21, L22, L23, L24, L25, L26,                      R21, R22, R23, R24, R25, R26 \
    L31, L32, L33, L34, L35, L36,                      R31, R32, R33, R34, R35, R36 \
    L41, L42, L43, L44, L45, L46                       R41, R42, R43, R44, R45, R46 \
              L53, L54,                                          R53, R54, \
                       L63, L64, L65,                    R60, \
                       L60, L61, L62,                    R61, \
                                                    R62, R63 \
) { \
    { XXX, L01, L02, L03, L04, L05, L06 }, \
    { XXX, L11, L12, L13, L14, L15, L16 }, \
    { XXX, L21, L22, L23, L24, L25, L26 }, \
    { XXX, L31, L32, L33, L34, L35, L36 }, \
    { XXX, L41, L42, L43, L44, L45, L46 }, \
    { XXX, XXX, XXX, L53, L54, XXX, XXX }, \
    { L60, L61, L62, L63, L64, L65, XXX}, \
\
    { XXX, R01, R02, R03, R04, R05, R06 }, \
    { XXX, R11, R12, R13, R14, R15, R16 }, \
    { XXX, R21, R22, R23, R24, R25, R26 }, \
    { XXX, R31, R32, R33, R34, R35, R36 }, \
    { XXX, R41, R42, R43, R44, R45, R46 }, \
    { XXX, XXX, XXX, R53, R54, XXX, XXX }, \
    { R60, R61, R62, R63, XXX, XXX, XXX } \
}
