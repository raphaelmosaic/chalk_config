/*
Copyright 2017 Benjamin Kesselring

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


// Optimized for instant tap recognition - need to hold longer for hold action
// PERMISSIVE_HOLD disabled - prevents taps from being converted to holds during roll movements
// Higher TAPPING_TERM = faster tap recognition, need to hold longer for hold

#define TAPPING_TERM 150
// #define PERMISSIVE_HOLD  // DISABLED: Causes taps to become holds too easily
        
// Tapping Force Hold disabled for snappier tap recognition
// When enabled, this biases toward hold behavior, making taps feel unresponsive

// #define TAPPING_FORCE_HOLD  // DISABLED: Makes taps feel slow and unresponsive

// Performance optimizations for maximum snappiness
#define DEBOUNCE 5              // Balanced debounce (5ms is standard, prevents chatter)
#define USB_POLLING_INTERVAL_MS 1  // 1000Hz polling rate for faster response
#define QMK_KEYS_PER_SCAN 8     // Optimized balance (too high can increase scan time)
// NKRO is already enabled in rules.mk

// Additional snappy optimizations
#define TAP_CODE_DELAY 0        // Remove delay for tap codes
#define COMBO_TERM 30           // Faster combo detection
#define LEADER_TIMEOUT 300      // Faster leader key timeout

// Optimize tap-hold behavior for better responsiveness
#define TAPPING_TERM_PER_KEY    // Allow per-key tapping term
#define QUICK_TAP_TERM 0        // Disable double-tap auto-repeat on tap-hold keys
// #define RETRO_TAPPING           // DISABLED: Release mod tap triggers tap action (causes unwanted key releases)

// Tap-hold settings optimized for snappy taps
// HOLD_ON_OTHER_KEY_PRESS disabled - prevents holds from triggering too early
// TAPPING_FORCE_HOLD_PER_KEY disabled - biases toward hold, makes taps unresponsive

// #define HOLD_ON_OTHER_KEY_PRESS  // DISABLED: Makes tap-hold keys feel sluggish
// #define TAPPING_FORCE_HOLD_PER_KEY  // DISABLED: Biases toward hold behavior
// #define QUICK_TAP_TERM_PER_KEY   // DISABLED: Not needed for snappy feel
// IGNORE_MOD_TAP_INTERRUPT is now default behavior in newer QMK versions


//


#    define RGBLED_NUM 6
#    define RGBLIGHT_HUE_STEP 12
#    define RGBLIGHT_SAT_STEP 25
#    define RGBLIGHT_VAL_STEP 12
//#    define RGBLIGHT_SLEEP  /* If defined, the RGB lighting will be switched off when the host goes to sleep */
// RGB effects disabled for better performance and snappier response
// RGB animations consume CPU cycles and can add latency
//#define RGBLIGHT_EFFECT_BREATHING
//#define RGBLIGHT_EFFECT_RAINBOW_MOOD
//#define RGBLIGHT_EFFECT_RAINBOW_SWIRL
//#define RGBLIGHT_EFFECT_SNAKE
//#define RGBLIGHT_EFFECT_KNIGHT
//#define RGBLIGHT_EFFECT_CHRISTMAS
//#define RGBLIGHT_EFFECT_STATIC_GRADIENT
//#define RGBLIGHT_EFFECT_RGB_TEST
//#define RGBLIGHT_EFFECT_ALTERNATING
//#define RGBLIGHT_EFFECT_TWINKLE

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
