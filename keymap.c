#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /* Layer 0 Colemak
     * ,-----------------------------------------------------------------------------------.
     * | Esc  |   Q  |   W  |   F  |   P  |   B  |   J  |   L  |   U  |   Y  |   ;  |   `  |
     * |------+------+------+------+------+-------------+------+------+------+------+------|
     * | Bksp |   A  |   R  |   S  |   T  |   G  |   M  |   N  |   E  |   I  |   O  |  '   |
     * |------+------+------+------+------+------|------+------+------+------+------+------|
     * |  Tab |   Z  |   X  |   C  |   D  |   V  |   K  |   H  |   ,  |   .  |  /   |Enter |
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * |      | CTlr |  ALT | Shift|Layer1|    Space    |Layer2| GUI  | Ctlr |      |      |
     * `-----------------------------------------------------------------------------------'
     */
    [0] = LAYOUT_planck_mit(
        KC_ESC,  KC_Q,    KC_W,    KC_F,    KC_P,  KC_B,   KC_J,   KC_L,  KC_U,    KC_Y,    KC_SCLN, KC_GRV,
        KC_BSPC, KC_A,    KC_R,    KC_S,    KC_T,  KC_G,   KC_M,   KC_N,  KC_E,    KC_I,    KC_O,    KC_QUOT,
        KC_TAB,  KC_Z,    KC_X,    KC_C,    KC_D,  KC_V,   KC_K,   KC_H,  KC_COMM, KC_DOT,  KC_SLSH, KC_ENT,
        XXXXXXX, KC_LCTL, KC_LALT, KC_LSFT, MO(1),     KC_SPC,     MO(2), KC_RGUI, KC_RCTL, KC_ALGR, XXXXXXX
    ),

    /* Layer 1 Numbers and Symbols
     * ,-----------------------------------------------------------------------------------.
     * |      |  !   |  @   |  #   |  $   |   %  |  =   |  7   |  8   |  9   |  +   |       |
     * |------+------+------+------+------+-------------+------+------+------+------+------ |
     * |      |shift |   [  |   }  |   (  |   ^  |  *   |  4   |   5  |  6   |  -   |       |
     * |------+------+------+------+------+------|------+------+------+------+------+------ |
     * |      |  |   |   ]  |   }  |   )  |   &  |  _   |  1   |   2  |  3   |  \   |       |
     * |------+------+------+------+------+------+------+------+------+------+------+------ |
     * |      |      |      |      |      |      0      |      |      |      |      |       |
     * `----------------------------------------------------------------------------------- '
     */
    [1] = LAYOUT_planck_mit (
        XXXXXXX, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_EQL,  KC_7,    KC_8,    KC_9,    KC_RPRN, XXXXXXX ,
        XXXXXXX, KC_LSFT, KC_LBRC, KC_LCBR, KC_LPRN, KC_CIRC, KC_ASTR, KC_4,    KC_5,    KC_6,    KC_MINS, XXXXXXX ,
        XXXXXXX, KC_PIPE, KC_RBRC, KC_RCBR, KC_RPRN, KC_AMPR, KC_UNDS, KC_1,    KC_2,    KC_3,    KC_BSLS, XXXXXXX ,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,       KC_O,       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
    ),

     /* Layer 2 Navigation and music
      * ,-----------------------------------------------------------------------------------.
      * |      |      |      | MStop| Vol+ |      | Home | PGDN | PGUP | End  |      |      |
      * |------+------+------+------+------+-------------+------+------+------+------+------|
      * |  Del | CTRL |      | MPrev| Mplay|MNext | Left | Down |  Up  |Right |      |      |
      * |------+------+------+------+------+------|------+------+------+------+------+------|
      * |      |      |      | Mute | Vol- |      |      |   Å  |   Ä  |  Ö   |      |      |
      * |------+------+------+------+------+------+------+------+------+------+------+------|
      * |      |      |      | Shift|Layer3|      |      |      |      |      |      |      |
      * `-----------------------------------------------------------------------------------'
      */
     [2] = LAYOUT_planck_mit(
         XXXXXXX, XXXXXXX, XXXXXXX, KC_MSTP, KC_VOLU, XXXXXXX, KC_HOME, KC_PGDN, KC_PGUP, KC_END,  XXXXXXX, XXXXXXX,
         KC_DEL,  KC_LCTL, XXXXXXX, KC_MPRV, KC_MPLY, KC_MNXT, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, XXXXXXX, XXXXXXX,
         XXXXXXX, XXXXXXX, XXXXXXX, KC_MUTE, KC_VOLD, XXXXXXX, XXXXXXX, ALGR(KC_W), ALGR(KC_A), ALGR(KC_O), XXXXXXX, XXXXXXX,
         XXXXXXX, XXXXXXX, XXXXXXX, KC_LSFT, MO(3),       _______,      KC_TRNS, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
     ),

      /* Layer 3
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
     [3] = LAYOUT_planck_mit(
         NK_TOGG, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, RGB_M_P, RGB_M_B, RGB_M_R, XXXXXXX, XXXXXXX,
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
