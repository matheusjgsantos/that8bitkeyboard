#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0xFFFF
#define DEVICE_VER 	0x0001
#define MANUFACTURER    That8BitKeyboard
#define PRODUCT         MSX_SHARP_HOTBIT
#define DESCRIPTION     QMK keyboard firmware for That8BitKeyboard - MSX Sharp Hotbit Style

/* key matrix size */
#define MATRIX_ROWS 10
#define MATRIX_COLS 8

/* Planck PCB default pin-out */
//#define MATRIX_ROW_PINS { F1, F4, F5, F0, B3, B0 }
//#define MATRIX_COL_PINS { B2, D0, D1, D2, D3, D5, D4, D6, D7, B4, B1, C6, C7, E6, F6, F7 }
#define MATRIX_COL_PINS { D1, D0, D4, C6, D7, E6 ,B4, B5 }
#define MATRIX_ROW_PINS { D3, D2, F4, F5, F6, F7, B1, B3, B2, B6}
#define UNUSED_PINS

#define BACKLIGHT_PIN B5
#define BACKLIGHT_BREATHING

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* define if matrix has ghost */
//#define MATRIX_HAS_GHOST

/* number of backlight levels */
#define BACKLIGHT_LEVELS 3

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
//#define NO_ACTION_MACRO
//#define NO_ACTION_FUNCTION
