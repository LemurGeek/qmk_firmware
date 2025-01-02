# Banana Macropad

![banana_macropad](https://i.imgur.com/2F6gi57.jpg)

This is the QMK firmware with VIA support for the 3D printed _8x1_ Banana Macropad project ([original from dbostian](https://github.com/dbostian/banana/tree/main))

-   Keyboard Maintainer: [lemurgeek](https://github.com/lemurgeek)
-   Hardware Supported: ATMEGA32U4 (Pro Micro)
-   STLS: https://github.com/dbostian/banana/tree/main/stls

Make example for this keyboard (after setting up your build environment):

    make banana_macropad:default

Flashing example for this keyboard:

    make banana_macropad:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

-   **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
-   **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
-   **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
