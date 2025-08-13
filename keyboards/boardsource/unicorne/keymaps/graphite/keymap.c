#include QMK_KEYBOARD_H

// https://github.com/rdavison/graphite-layout
enum layer_number {
  _GRAPHITE = 0,
  _LOWER,
  _RAISE,
  _ADJUST,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Graphite
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | Tab  |   B  |   L  |   D  |   W  |   Z  |                    |   '  |   F  |   O  |   U  |   J  |  ;   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |LCTRL |   N  |   R  |   T  |   S  |   G  |                    |   Y  |   H  |   A  |   E  |   I  |  ,   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |LShift|   Q  |   X  |   M  |   C  |   V  |-------.     ,------|   K  |   P  |   .  |   -  |   /  |RShift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                          | LGUI |LOWER | /Space  /       \Enter \  |RAISE |BackSP|
 *                          |      |      |/       /         \      \ |      |      |      
 *                          `---------------------'           '------''-------------'
 *
 *
 * Shifted
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |   _  |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |                    |      |      |      |      |      |  ?   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------.     ,------|      |      |      |   "  |   <  |     |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                          |      |      | /       /       \      \  |      |      |      
 *                          |      |      |/       /         \      \ |      |      |      
 *                          `---------------------'           '------''-------------'
 */
[_GRAPHITE] = LAYOUT_split_3x6_3(
   KC_TAB,  KC_B,   KC_L,    KC_D,    KC_W,    KC_Z,                   KC_QUOT,    KC_F,    KC_O,    KC_U,    KC_J, KC_SCLN,
  KC_LCTL,  KC_N,   KC_R,    KC_T,    KC_S,    KC_G,                      KC_Y,    KC_H,    KC_A,    KC_E,    KC_I, KC_COMM,
  KC_LSFT,  KC_Q,   KC_X,    KC_M,    KC_C,    KC_V,                      KC_K,    KC_P,  KC_DOT, KC_MINS, KC_SLSH, KC_RSFT,
                                KC_LGUI, MO(_LOWER), KC_SPC, KC_ENT,MO(_RAISE), KC_BSPC
),
/* LOWER
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |                    |  F7  |  F8  |  F9  | F10  | F11  | F12  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | ESC  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |   -  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------.     ,------|      |      |   =  |   [  |   ]  |   \  |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                          | LGUI |LOWER | /Space  /       \Enter \  |RAISE |BackSP|
 *                          |      |      |/       /         \      \ |      |      |      
 *                          `---------------------'           '------''-------------'
 */
[_LOWER] = LAYOUT_split_3x6_3(
    KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,                     KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12,
   KC_ESC,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                      KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_TILD,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX,  KC_EQL, KC_LBRC, KC_RBRC, KC_BSLS,
                                      _______, _______, _______, _______, _______, _______
),
/* RAISE TODO change all side keys to pass thru
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | ESC  |   1  |   2  |   3  |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |   4  |   5  |   6  |   0  |      |                    |      | Left | Down |  Up  |Right |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |   7  |   8  |   9  |      |      |-------.     ,------|      |      |      |      |      |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                          | LGUI |LOWER | /Space  /       \Enter \  |RAISE |BackSP| 
 *                          |      |      |/       /         \      \ |      |      |      
 *                          `---------------------'           '------''-------------'
 */

[_RAISE] = LAYOUT_split_3x6_3(
   KC_ESC,    KC_1,    KC_2,    KC_3, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  _______,    KC_4,    KC_5,    KC_6,    KC_0, XXXXXXX,                   XXXXXXX, KC_LEFT, KC_DOWN,   KC_UP, KC_RGHT, XXXXXXX,
  _______,    KC_7,    KC_8,    KC_9, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,
                                      _______, _______, _______, _______, _______, _______
),
/* ADJUST
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |                    |      |      |RGB ON| HUE+ | SAT+ | VAL+ |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------.     ,------|      |      | MODE | HUE- | SAT- | VAL- |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                          | LGUI |LOWER | /Space  /       \Enter \  |RAISE |BackSP| 
 *                          |      |      |/       /         \      \ |      |      |      
 *                          `---------------------'           '------''-------------'
 */
[_ADJUST] = LAYOUT_split_3x6_3(
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                      _______, _______, _______, _______, _______, _______
  )
};

layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}

const key_override_t quot_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_QUOT, KC_UNDS);
const key_override_t mins_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_MINS, KC_DQT);
const key_override_t comm_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_COMM, KC_QUES);
const key_override_t slsh_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_SLSH, KC_LT);
const key_override_t *key_overrides[] = {
    &quot_key_override,
    &mins_key_override,
    &comm_key_override,
    &slsh_key_override
};
