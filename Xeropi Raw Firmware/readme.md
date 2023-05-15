# Xeropi-rp2040

![KeebForMom](https://i.imgur.com/MvBatHSh.jpg)

Xeropi is a low cost 4x3 macropad with single encoder, this macropad has fully enabled QMK feature.

* Keyboard Maintainer: [sandipratama](https://github.com/nendezkombet)
* Hardware Supported: Xeropi-rp2040 PCB
* Hardware Availability: Temporary can be found at Indonesian marketplace

Make example for this keyboard (after setting up your build environment):

    make Xeropi:default

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available