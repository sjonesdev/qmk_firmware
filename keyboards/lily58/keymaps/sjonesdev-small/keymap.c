#include QMK_KEYBOARD_H

// https://github.com/rdavison/graphite-layout
enum layer_number {
  _GRAPHITE = 0,
  _GAMING,
  _SYMBOL,
  _NAVIGATION,
  _ADJUST,
};

const uint16_t SYM_BS = LT(_SYMBOL, KC_BSPC);
const uint16_t SYM_ENT = LT(_SYMBOL, KC_ENT);
const uint16_t SYM_TAB = LT(_SYMBOL, KC_TAB);

const uint16_t NAV_SPC = LT(_NAVIGATION, KC_SPC);

const uint16_t CTL_S = LCTL_T(KC_S);
const uint16_t CTL_CRT = LCTL_T(KC_CIRC);
const uint16_t CTL_RT = LCTL_T(KC_RGHT);
const uint16_t CTL_H = RCTL_T(KC_H);
const uint16_t CTL_DLR = RCTL_T(KC_DLR);
const uint16_t CTL_F5 = RCTL_T(KC_F5);

const uint16_t ALT_T = LALT_T(KC_T);
const uint16_t ALT_SIX = LALT_T(KC_6);
const uint16_t ALT_UP = LALT_T(KC_UP);
const uint16_t ALT_A = RALT_T(KC_A);
const uint16_t ALT_PLS = RALT_T(KC_PLUS);
const uint16_t ALT_F6 = RALT_T(KC_F6);

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Graphite
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |   `  |   B  |   L  |   D  |   W  |   Z  |                    |   '  |   F  |   O  |   U  |   J  |  ;   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |   ;  |   N  |   R  |   T  |   S  |   G  |-------.    ,-------|   Y  |   H  |   A  |   E  |   I  |  ,   |
 * |------+------+------+------+------+------|   [   |    |    ]  |------+------+------+------+------+------|
 * | LGUI |   Q  |   X  |   M  |   C  |   V  |-------|    |-------|   K  |   P  |   .  |   -  |   /  |RShift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   |      | Esc  |Enter | /Space  /       \Shift \  |BackSp|  Del |      |
 *                   |      |      | SYM  |/  NAV  /         \      \ | SYM  |      |      |
 *                   `----------------------------'           '------''--------------------'
 *
 *
 * Shifted
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |                    |   _  |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------.    ,-------|      |      |      |      |      |  ?   |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------|    |-------|      |      |      |   "  |   <  |     |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   |      |      |      | /       /       \      \  |      |      |      |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */

 [_GRAPHITE] = LAYOUT(
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,
   KC_GRV,    KC_B,    KC_L,    KC_D,    KC_W,    KC_Z,                    KC_QUOT,       KC_F,       KC_O,       KC_U,       KC_J,    KC_BSLS,
  KC_SCLN,    KC_N,    KC_R,   ALT_T,   CTL_S,    KC_G,                       KC_Y,      CTL_H,      ALT_A,       KC_E,       KC_I,    KC_COMM,
  KC_LGUI,    KC_Q,    KC_X,    KC_M,    KC_C,    KC_V, XXXXXXX,  XXXXXXX,    KC_K,       KC_P,     KC_DOT,    KC_MINS,    KC_SLSH,    KC_RGUI,
                               XXXXXXX, KC_ESC, SYM_ENT, KC_SPC,  KC_RSFT, SYM_BS, KC_DEL, XXXXXXX
),
/* Gaming
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      | BOOT |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------.    ,-------|      |      |      |      |      |      |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------|    |-------|      |      |      |      |      |     |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   |      |      |      | /       /       \      \  |      |      |      |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */
 [_GAMING] = LAYOUT(
  _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______,
  _______, _______, _______,    KC_T,    KC_S, _______,                   _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
                             _______, _______,  KC_ENT, _______, _______,  _______, _______, _______
),
/* SYM
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | BOOT |      |      |      |      |      |                    |      |      |      |      |      | BOOT |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |   7  |   8  |   9  |   0  |  F6  |                    |      |   )  |   }  |   (  |   {  |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |   4  |   5  |   6  |   ^  |   @  |-------.    ,-------|   =  |   $  |   +  |   &  |   %  |      |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * |      |   1  |   2  |   3  |   #  |      |-------|    |-------|      |   *  |   ]  |   !  |   [  |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   |      |      |      | /       /       \      \  |      |      |      |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */
[_SYMBOL] = LAYOUT(
  QK_BOOT, _______, _______, _______, _______, _______,                   _______, _______, _______,_______, _______, QK_BOOT,
  XXXXXXX,    KC_7,    KC_8,    KC_9,    KC_0, XXXXXXX,                   XXXXXXX, KC_RPRN, KC_RCBR, KC_LPRN, KC_LCBR, XXXXXXX,
   KC_ESC,    KC_4,    KC_5,   ALT_6, CTL_CRC,   KC_AT,                     KC_EQ, CTL_DLR, ALT_PLS, KC_AMPR, KC_PERC, XXXXXXX,
  _______,    KC_1,    KC_2,    KC_3, KC_HASH, XXXXXXX, _______, _______, XXXXXXX, KC_ASTR, KC_RBRC, KC_EXLM, KC_LBRC, _______,
                             _______, _______, SYM_TAB, _______, _______,  _______, _______, _______
),
/* NAV
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | BOOT |      |      |      |      |      |                    |      |      |      |      |      | BOOT |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |                    |      |  F1  |  F2  |  F3  |  F4  |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      | Left | Down |  Up  |Right |      |-------.    ,-------|      |  F5  |  F6  |  F7  |  F8  |      |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------|    |-------|      |  F9  |  F10 |  F11 |  F12 |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   |      |      |      | /       /       \      \  |      |      |      |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */

[_NAVIGATION] = LAYOUT(
  QK_BOOT, _______, _______, _______, _______, _______,                     _______, _______, _______, _______, _______, QK_BOOT,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX,   KC_F1,   KC_F2,   KC_F3,   KC_F4, XXXXXXX,
  XXXXXXX, KC_LEFT, KC_DOWN,  ALT_UP,  CTL_RT, XXXXXXX,                   XXXXXXX,  CTL_F5,  ALT_F6,   KC_F7,   KC_F8, XXXXXXX,
  _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, XXXXXXX,   KC_F9,  KC_F10,  KC_F11,  KC_F12, _______,
                             _______, _______, SYM_ENT,  _______, _______,  _______, _______, _______
),
/* ADJUST
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------.    ,-------|      |      |RGB ON| HUE+ | SAT+ | VAL+ |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------|    |-------|      |      | MODE | HUE- | SAT- | VAL- |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   |      |      |      | /       /       \      \  |      |      |      |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */
  [_ADJUST] = LAYOUT(
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                             _______, _______, _______, _______, _______,  _______, _______, _______
  )
};

layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}

//SSD1306 OLED update loop, make sure to enable OLED_ENABLE=yes in rules.mk
#ifdef OLED_ENABLE

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_keyboard_master())
    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
  return rotation;
}

// When you add source files to SRC in rules.mk, you can use functions.
const char *read_layer_state(void);
const char *read_logo(void);
void set_keylog(uint16_t keycode, keyrecord_t *record);
const char *read_keylog(void);
const char *read_keylogs(void);

// const char *read_mode_icon(bool swap);
// const char *read_host_led_state(void);
// void set_timelog(void);
// const char *read_timelog(void);

bool oled_task_user(void) {
  if (is_keyboard_master()) {
    // If you want to change the display of OLED, you need to change here
    oled_write_ln(read_layer_state(), false);
    oled_write_ln(read_keylog(), false);
    oled_write_ln(read_keylogs(), false);
    //oled_write_ln(read_mode_icon(keymap_config.swap_lalt_lgui), false);
    //oled_write_ln(read_host_led_state(), false);
    //oled_write_ln(read_timelog(), false);
  } else {
    oled_write(read_logo(), false);
  }
    return false;
}
#endif // OLED_ENABLE

const key_override_t quot_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_QUOT, KC_UNDS);
const key_override_t mins_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_MINS, KC_DQT);
const key_override_t comm_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_COMM, KC_QUES);
const key_override_t slsh_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_SLSH, KC_LT);
const key_override_t **key_overrides = (const key_override_t *[]){
    &quot_key_override,
    &mins_key_override,
    &comm_key_override,
    &slsh_key_override,
    NULL
};

enum combo_events {
    GAMING_MODE,
    NORMAL_MODE,
};

// disables mod tap for nav layer (on space), LCTRL on S, and LALT on T
const uint16_t PROGMEM gaming_combo[] = {KC_X, KC_M, COMBO_END};

// re-enables mod tap for nav layer (on space), LCTRL on S, and LALT on T
const uint16_t PROGMEM normal_combo[] = {KC_DOT, KC_MINUS, COMBO_END};

combo_t key_combos[] = {
    [GAMING_MODE] = COMBO(gaming_combo, DF(_GAMING)),
    [NORMAL_MODE] = COMBO(normal_combo, DF(_GRAPHITE)),
};
