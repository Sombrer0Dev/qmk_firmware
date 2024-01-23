#include QMK_KEYBOARD_H
#include "features/select_word.h"

enum layer_number {
  _QWERTY = 0,
  _SYM,
  _NAV,
  _DOUBLE,
};

enum custom_keycodes {
    LNG_SWC = SAFE_RANGE,
    FUNNY,
    SELWORD,
    ENDW,
};

#define LGUIA LGUI_T(KC_A)
#define LALTS LALT_T(KC_S)
#define LSFTF LSFT_T(KC_F)
#define LCTLD LCTL_T(KC_D)
#define RGUICLN RGUI_T(KC_SCLN)
#define RALTL LALT_T(KC_L)
#define RSFTJ RSFT_T(KC_J)
#define RCTLK RCTL_T(KC_K)
#define SYM LT(_SYM, KC_ENT)
#define NAV LT(_NAV, KC_TAB)
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* QWERTY
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | Caps |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  `   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  |  -   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | ESC  |   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ;  |  '   |
 * |------+------+------+------+------+------|   [   |    |    ]  |------+------+------+------+------+------|
 * |LShift|   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   /  |RShift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | lang | LGUI |NAVTAB| /Space  /       \BSPC  \  |SYMENT|RGUI  | FUNNY|
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '----------------------------'
 */
[_QWERTY] = LAYOUT(
  KC_CAPS,  KC_1,  KC_2,  KC_3,  KC_4,  KC_5,                     KC_6, KC_7,  KC_8,    KC_9,   KC_0,    KC_GRV,
  KC_TAB,   KC_Q,  KC_W,  KC_E,  KC_R,  KC_T,                     KC_Y, KC_U,  KC_I,    KC_O,   KC_P,    KC_MINS,
  KC_ESC,   LGUIA, LALTS, LCTLD, LSFTF, KC_G,                     KC_H, RSFTJ, RCTLK,   RALTL,  RGUICLN, KC_QUOT,
  KC_LSFT,  KC_Z,  KC_X,  KC_C,  KC_V,  KC_B, KC_LBRC,  KC_RBRC,  KC_N, KC_M,  KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,
                   LNG_SWC, KC_LGUI,  NAV,  KC_SPC,     KC_BSPC,  SYM, KC_RGUI, FUNNY
),
/* SYM
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |                    |  F7  |  F8  |  F9  | F10  | F11  | F12  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |   `  |   !  |   @  |   #  |   $  |   %  |                    |   ^  |   &  |   *  |   (  |   )  |   ~  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |   1  |   2  |   3  |   4  |   5  |-------.    ,-------|   6  |   7  |   8  |   9  |   0  |   _  |
 * |------+------+------+------+------+------|   [   |    |    ]  |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------|    |-------|      |   _  |   +  |   {  |   }  |   |  |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | lang | LGUI |NAVTAB| /Space  /       \BSPC  \  |SYMENT|RGUI  | FUNNY|
 *                   |      |      |      |/       /         \      \ |      |//////|      |
 *                   `----------------------------'           '----------------------------'
 */
[_SYM] = LAYOUT(
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    XXXXXXX,
  XXXXXXX, KC_DLR,  KC_PLUS, KC_LPRN, KC_RPRN, KC_AT,                     KC_PIPE, KC_MINS, KC_EQL,  KC_UNDS, KC_ASTR, XXXXXXX,
  XXXXXXX, KC_EXLM, KC_HASH, KC_LCBR, KC_RCBR, KC_TILD, KC_BSLS, KC_SLSH, KC_AMPR, KC_LBRC, KC_RBRC, KC_PERC, KC_CIRC, XXXXXXX,
                             _______, _______, _______, _______, _______,  _______, _______, _______
),
/* NAV
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |   `  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------.    ,-------|      | Left | Down |  Up  |Right |      |
 * |------+------+------+------+------+------|   [   |    |    ]  |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------|    |-------|   +  |   -  |   =  |   [  |   ]  |   \  |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | lang | LGUI |NAVTAB| /Space  /       \BSPC  \  |SYMENT|RGUI  | FUNNY|
 *                   |      |      |//////|/       /         \      \ |      |      |      |
 *                   `----------------------------'           '----------------------------'
 */

[_NAV] = LAYOUT(
   _______, _______, _______,    _______, _______, _______,                    _______, _______,  _______, _______, _______, _______,
   _______, _______, C(KC_RGHT), _______, C(KC_P), C(KC_LEFT),                 KC_DOWN, KC_RIGHT, _______, C(KC_C), _______, _______,
   _______, KC_END,  _______,    _______, _______, _______,                     _______, _______,  ENDW,    KC_HOME, _______, _______,
   _______, _______, _______,    _______, _______, SELWORD, _______, _______,  KC_UP,   KC_LEFT,  _______, _______, _______, _______,
                             _______, _______, _______,  _______, _______,  _______, _______,  _______
),
/* DOUBLE
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------.    ,-------|      |      |      |      |      |      |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------|    |-------|      |      |      |      |      |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | lang | LGUI |NAVTAB| /Space  /       \BSPC  \  |SYMENT|RGUI  | FUNNY|
 *                   |      |      |//////|/       /         \      \ |      |//////|      |
 *                   `----------------------------'           '----------------------------'
 */
  [_DOUBLE] = LAYOUT(
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                             _______, _______, _______, _______, _______,  _______, _______, _______
  )
};

layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, _SYM, _NAV, _DOUBLE);
}

//SSD1306 OLED update loop, make sure to enable OLED_ENABLE=yes in rules.mk
#ifdef OLED_ENABLE

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_keyboard_master())
    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
  return rotation;
}

// When you add source files to SRC in rules.mk, you can use functions.
const char *read_logo_l(void);
const char *read_logo_r(void);

bool oled_task_user(void) {
  if (is_keyboard_master()) {
    oled_write(read_logo_l(), false);
  } else {
    oled_write(read_logo_r(), false);
  }
    return false;
}
#endif // OLED_ENABLE

// remap shift+backspace to delete
const key_override_t delete_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_BSPC, KC_DEL);

// This globally defines all key overrides to be used
const key_override_t **key_overrides = (const key_override_t *[]){
    &delete_key_override,
    NULL // Null terminate the array of overrides!
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (!process_select_word(keycode, record, SELWORD)) { return false; }
  switch (keycode){
    case ENDW:
      if (record->event.pressed) {
        register_code(KC_LCTL);
        tap_code(KC_RGHT);
        unregister_code(KC_LCTL);
        tap_code(KC_LEFT);
      }
    case LNG_SWC:
      if (record->event.pressed) {
        register_code(KC_LGUI);
        tap_code(KC_SPC);
      } else {
        unregister_code(KC_LGUI);
      }
    case FUNNY:
      if (record->event.pressed) {
        tap_code(KC_L);
        tap_code(KC_U);
        tap_code(KC_B);
        tap_code(KC_L);
        tap_code(KC_U);
        tap_code(KC_SPC);
        tap_code(KC_Z);
        tap_code(KC_I);
        tap_code(KC_N);
        tap_code(KC_U);
      }
  }
  return true;
}
