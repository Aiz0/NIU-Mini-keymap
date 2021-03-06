#include QMK_KEYBOARD_H


enum niu_mini_layers {
    _COLEMAK_DH,
    _NUMBER,
    _SYMBOL,
    _NAVIGATION,
    _FUNCTION,
    _SETTING
};

#define NUMBER MO(_NUMBER)
#define SYMBOL MO(_SYMBOL)
#define NAVIGATION MO(_NAVIGATION)
#define FUNCTION MO(_FUNCTION)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /* Colemak
     * ,-----------------------------------------------------------------------------------.
     * | Esc  |   Q  |   W  |   F  |   P  |   B  |   J  |   L  |   U  |   Y  |   ;  |   `  |
     * |------+------+------+------+------+-------------+------+------+------+------+------|
     * | Bksp |   A  |   R  |   S  |   T  |   G  |   M  |   N  |   E  |   I  |   O  |  '   |
     * |------+------+------+------+------+------|------+------+------+------+------+------|
     * |  Tab |   Z  |   X  |   C  |   D  |   V  |   K  |   H  |   ,  |   .  |  /   |Enter |
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * |      | CTlr |  ALT | Shift|Number|    Space    |  Nav | GUI  | Ctlr |      |      |
     * `-----------------------------------------------------------------------------------'
     */
    [_COLEMAK_DH] = LAYOUT_planck_mit(
        KC_ESC,  KC_Q,    KC_W,    KC_F,    KC_P,  KC_B,   KC_J,   KC_L,  KC_U,    KC_Y,    KC_SCLN, KC_GRV,
        KC_BSPC, KC_A,    KC_R,    KC_S,    KC_T,  KC_G,   KC_M,   KC_N,  KC_E,    KC_I,    KC_O,    KC_QUOT,
        KC_TAB,  KC_Z,    KC_X,    KC_C,    KC_D,  KC_V,   KC_K,   KC_H,  KC_COMM, KC_DOT,  KC_SLSH, KC_ENT,
        XXXXXXX, KC_LCTL, KC_LALT, KC_LSFT, NUMBER,   KC_SPC, NAVIGATION, KC_RGUI, KC_RCTL, KC_ALGR, XXXXXXX
    ),

    /* Numbers and Symbols
     * ,-----------------------------------------------------------------------------------.
     * |      |  !   |  @   |  #   |  $   |   %  |  =   |  7   |  8   |  9   |  +   |       |
     * |------+------+------+------+------+-------------+------+------+------+------+------ |
     * | Bksp |shift |   [  |   }  |   (  |   ^  |  *   |  4   |   5  |  6   |  -   |       |
     * |------+------+------+------+------+------|------+------+------+------+------+------ |
     * |  Tab |  |   |   ]  |   }  |   )  |   &  |  _   |  1   |   2  |  3   |  \   |Enter  |
     * |------+------+------+------+------+------+------+------+------+------+------+------ |
     * |      |      |      |      |      |      0      |Symbol|      |      |      |       |
     * `----------------------------------------------------------------------------------- '
     */
    [_NUMBER] = LAYOUT_planck_mit (
        XXXXXXX, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_EQL,  KC_7,    KC_8,    KC_9,    KC_PLUS, XXXXXXX ,
        _______, KC_LSFT, KC_LBRC, KC_LCBR, KC_LPRN, KC_CIRC, KC_ASTR, KC_4,    KC_5,    KC_6,    KC_MINS, XXXXXXX ,
        _______, KC_PIPE, KC_RBRC, KC_RCBR, KC_RPRN, KC_AMPR, KC_UNDS, KC_1,    KC_2,    KC_3,    KC_BSLS, _______ ,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,       KC_0,      SYMBOL,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
    ),

    /* Special Symbols
     * ,-----------------------------------------------------------------------------------.
     * |      |  ¹   |  ²   |  ³   |   £  |  °   |      |      |      |      |  ¦   |       |
     * |------+------+------+------+------+-------------+------+------+------+------+------ |
     * |      |shift |  ‹   |   «  |   €  |  -   |   ×  |   Å  |   Ä  |   Ö  |  ¬   |       |
     * |------+------+------+------+------+------|------+------+------+------+------+------ |
     * |      |      |  ›   |   »  |   ¥  |  —   |   ÷  |      |      |      |  …   |       |
     * |------+------+------+------+------+------+------+------+------+------+------+------ |
     * |      |      |      |      |      |             |      |      |      |      |       |
     * `----------------------------------------------------------------------------------- '
     */
    [_SYMBOL] = LAYOUT_planck_mit (
        XXXXXXX, RSA(KC_1), RSA(KC_2),    RSA(KC_3),     ALGR(KC_4), XXXXXXX,       XXXXXXX,      XXXXXXX,   XXXXXXX,     XXXXXXX,    RSA(KC_BSLS),  XXXXXXX ,
        XXXXXXX, KC_LSFT,   RSA(KC_LBRC), ALGR(KC_LBRC), ALGR(KC_5), ALGR(KC_MINS), ALGR(KC_EQL), ALGR(KC_W), ALGR(KC_A), ALGR(KC_O), ALGR(KC_BSLS), XXXXXXX ,
        XXXXXXX, XXXXXXX,   RSA(KC_RBRC), ALGR(KC_RBRC), RSA(KC_4),  RSA(KC_MINS),  RSA(KC_EQL),  XXXXXXX,    XXXXXXX,    XXXXXXX,    RSA(KC_SLSH),  XXXXXXX ,
        XXXXXXX, XXXXXXX,   XXXXXXX,      XXXXXXX,       _______,              XXXXXXX,           _______,    XXXXXXX,    XXXXXXX,    XXXXXXX,       XXXXXXX
    ),

     /* Navigation and Music
      * ,-----------------------------------------------------------------------------------.
      * |      |MStop | Mute | Vol- | Vol+ |MNext | Home | PGDN | PGUP | End  |      |      |
      * |------+------+------+------+------+-------------+------+------+------+------+------|
      * |  Del | ALT  | CTRL |Shift | GUI  |MPlay | Left | Down |  Up  |Right |      |      |
      * |------+------+------+------+------+------|------+------+------+------+------+------|
      * | Tab  | Undo | Cut  | Copy | Paste|MPrev |      |      |      |      |      |Enter |
      * |------+------+------+------+------+------+------+------+------+------+------+------|
      * |      |      |      |      |Funct |      |      |      |      |      |      |      |
      * `-----------------------------------------------------------------------------------'
      */
     [_NAVIGATION] = LAYOUT_planck_mit(
         XXXXXXX, KC_MSTP, KC_MUTE, KC_VOLD, KC_VOLU, KC_MNXT, KC_HOME, KC_PGDN, KC_PGUP, KC_END,  XXXXXXX, XXXXXXX,
         KC_DEL,  KC_LALT, KC_LCTL, KC_LSFT, KC_LGUI, KC_MPLY, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, XXXXXXX, XXXXXXX,
         _______, C(KC_Z), C(KC_X), C(KC_C), C(KC_V), KC_MPRV, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,
         XXXXXXX, XXXXXXX, XXXXXXX, KC_LSFT, FUNCTION,       _______,      KC_TRNS, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
     ),

      /* Function keys
      * ,------------------------------------------------------------------------------------.
      * |      |      |      |      |      |      |      |  F1  |  F2  |  F3  |  F4  |Setting|
      * |------+------+------+------+------+-------------+------+------+------+------+-------|
      * |      | ALT  | CTRL |Shift | GUI  |      |      |  F5  |  F6  |  F7  |  F8  |       |
      * |------+------+------+------+------+------|------+------+------+------+------+-------|
      * |      |      |      |      |      |      |      |  F9  |  F10 |  F11 |  F12 |       |
      * |------+------+------+------+------+------+------+------+------+------+------+-------|
      * |      |      |      |      |      |      |      |      |      |      |      |       |
      * `------------------------------------------------------------------------------------'
      */
     [_FUNCTION] = LAYOUT_planck_mit(
         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_F1, KC_F2,  KC_F3,  KC_F4,    TG(_SETTING),
         XXXXXXX, KC_LALT, KC_LCTL, KC_LSFT, KC_LGUI, XXXXXXX, XXXXXXX, KC_F5, KC_F6,  KC_F7,  KC_F8,    XXXXXXX,
         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_F9, KC_F10, KC_F11, KC_F12, XXXXXXX,
         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_TRNS,     XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
     ),

      /* Settings
      * ,-----------------------------------------------------------------------------------.
      * |Tgnkro|      |      |      |      |      |      | RMo_P| RMO_B| RMo_R|      |      |
      * |------+------+------+------+------+-------------+------+------+------+------+------|
      * |      |RMode+|RHue+ | RSat+| RVa+ | REf+ |      |RMo_SW|RTggle| RMo_K|      |      |
      * |------+------+------+------+------+------|------+------+------+------+------+------|
      * |      |RMode-|RHue- | RSat-| RVa- | REf- |      |RMo_X |RMo_SN| RMo_G|      |      |
      * |------+------+------+------+------+------+------+------+------+------+------+------|
      * |      |      |      |      |      |      |      |      |      |      |      |      |
      * `-----------------------------------------------------------------------------------'
      */
     [_SETTING] = LAYOUT_planck_mit(
         NK_TOGG, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, RGB_M_P, RGB_M_B, RGB_M_R, XXXXXXX, TG(_SETTING),
         XXXXXXX, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, RGB_SPI, XXXXXXX, RGB_M_SW,RGB_TOG, RGB_M_K, XXXXXXX, XXXXXXX,
         XXXXXXX, RGB_RMOD,RGB_HUD, RGB_SAD, RGB_VAD, RGB_SPD, XXXXXXX, RGB_M_X, RGB_M_SN,RGB_M_G, XXXXXXX, XXXXXXX,
         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_TRNS,     XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
     )


      /* Layer 4 Game 1 qwerty and numbers
      * ,-----------------------------------------------------------------------------------.
      * |      |   1  |   2  |   3  |   4  |  5   |      |      |      |      |      |      |
      * |------+------+------+------+------+-------------+------+------+------+------+------|
      * |      |      |   Q  |   W  |   E  |      |      |      |      |      |      |      |
      * |------+------+------+------+------+------|------+------+------+------+------+------|
      * |      |      |   A  |   S  |   D  |      |      |      |      |      |      |      |
      * |------+------+------+------+------+------+------+------+------+------+------+------|
      * |      |      |   Z  |   X  |   C  |    Space    |      |      |      |      |      |
      * `-----------------------------------------------------------------------------------'
      */
};



void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    return true;
}

void led_set_user(uint8_t usb_led) {

    if (IS_LED_ON(usb_led, USB_LED_NUM_LOCK)) {

    } else {

    }

    if (IS_LED_ON(usb_led, USB_LED_CAPS_LOCK)) {

    } else {

    }

    if (IS_LED_ON(usb_led, USB_LED_SCROLL_LOCK)) {

    } else {

    }

    if (IS_LED_ON(usb_led, USB_LED_COMPOSE)) {

    } else {

    }

    if (IS_LED_ON(usb_led, USB_LED_KANA)) {

    } else {

    }

}
