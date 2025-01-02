#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐
     * │ A ││ B ││ C ││ D ││ E ││ F ││ G ││ H │
     * └───┘└───┘└───┘└───┘└───┘└───┘└───┘└───┘
     */
    [0] = LAYOUT_8x1(
        KC_A, KC_B, KC_C, KC_D, KC_E, KC_F, KC_G, KC_H
    ),

    /*
     * ┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐┌───┐
     * │ 1 ││ 2 ││ 3 ││ 4 ││ 5 ││ 6 ││ 7 ││ 8 │
     * └───┘└───┘└───┘└───┘└───┘└───┘└───┘└───┘
     */
    [1] = LAYOUT_8x1(
        KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8
    )
};
