# Aiz's NIU Mini layout
My personal layout for the [NIU Mini](https://kbdfans.com/products/niu-mini-40-diy-kit). 

This is based on the [colemak](https://colemak.com/) layout since I like it more than qwerty.

Sometimes I write in Swedish and need the nordic characters for that. I don't know if unicode maps are the best way to solve that though.

The NIU Mini can run QMK firmware and this layout is made with QMK. If you don't know what QMK is read the next section.

## What is QMK
QMK firmware is the software that runs on your keyboard.

If you are brand new to QMK, check out the [documentation](https://docs.qmk.fm/#/) and the [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

To build QMK keymaps you need to setup your QMK environment. See the [setup tutorial](https://docs.qmk.fm/#/newbs_getting_started) on how to do that.

## Build and flash
I don't actually recommend flashing this layout, instead use it as inspiration for your own.
Check out the included [NIU Mini layouts](https://github.com/qmk/qmk_firmware/tree/master/keyboards/niu_mini/keymaps) if you haven't already. 

Prerequisites:
- QMK environment
- A NIU Mini keyboard

Clone or download this repository.
```
git clone https://github.com/Aiz0/NIU-Mini-keymap
```
Create a new directory for the keymap in the QMK NIU Mini keymaps folder.

```
mkdir ~/qmk_firmware/keyboards/niu_mini/keymaps/aiz
```

Copy the necessary files to the new directory you made. They are:
- keymap.c
- rules.mk
- config.h

Compile the layout.
```
qmk compile -kb niu_mini -km aiz
```

Finally flash the layout.
```
qmk compile -kb niu_mini -km aiz
```
