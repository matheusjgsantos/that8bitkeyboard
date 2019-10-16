# That 8 Bit Keyboard - MSX Sharp Hotbit Stile

This keyboard settings was created for the prototype veresio of the MSX keyboard to be used with the Raspberry Pi MSX Slot.

There are a lot of things I've learned during the whole process, from the acrylic lasercutting up to the QMK configuration, which I will describe here in order to improve the next versions:

I've followed the instuctions from the https://68keys.io/ site, with my own adaptations since I didn't wanted to have a PCB made for the prototype. There are basically 2 web tools needed to create the physical layout and the body designs for laser/CNC cutting:


 - Keyboard-layout-editor.com - this is where I defined the layout and key types/size. Here is my original design with some additional changes: http://www.keyboard-layout-editor.com/#/gists/be4f2eada523232efbb69f6812e7acc2

 - http://builder.swillkb.com/ - following the steps from the 68keys guide (https://68keys.io/guide/case/) I've imported the raw data on the builder tool to generate the CAD design files, sent to a local laser cutting service for a 4 acrylic layers. 

The switches and keycaps where acquired on aliexpress, being the arrow keys the most expensive ones since the sizes aren't the most common ones (1.25U and 3U). Function keys also weren't cheap (2U). One of the next things I will try is to create "artisan keycaps" by myself for those keys, or set a deal with a chinese manufacturer for the key set with a good price.

The wiring process wasn't actually very planned ahead,being basically soldering the rows and columns following the order they were laid on the keyboard. Since I was using the ATMega32U4 board Arduino Micro Pro, the available number of pins was 18, which allowed me to create a 10x8 matrix for all the 80 keys I've defined on the layout. The resulting layout became quite a mess and gave me some work to implement on the QMK firmware, but I ended with the following working layout:

|   |COL PIN|D1|D0|D4|C6|D7|E6|B4|B5
|---|---|---|---|---|---|---|---|---|---|
ROW PIN|#|0|1|2|3|4|5|6|7|
D3|0|KC_ESC|KC_1|KC_3|KC_2|KC_4|KC_5|KC_6|KC_7|
D2|1|KC_TAB|KC_Q|KC_E|KC_W|KC_R|KC_T|KC_Y|KC_U|
F4|2|KC_STOP|KC_SLCT|KC_F1|KC_F2|KC_F3|KC_F4|KC_F5|KC_F6|
F5|3|KC_8|KC_9|KC_MINU|KC_0|KC_EQUAL|KC_GRAVE|KC_BSPACE|KC_HOME|
F6|4|KC_I|KC_O|KC_LBRC|KC_P|KC_RBRC|KC_BSLS|KC_INS|KC_DEL|
F7|5|KC_K|KC_L|KC_QUOTE|KC_COMM|KC_ENTER|KC_END|KC_PGUP|KC_PGDN|
B1|6|KC_COMM|KC_DOT|KC_RSFT|KC_SLASH KC_LEFT|KC_UP|KC_DOWN|KC_RIGHT|
B3|7|KC_LCTL|KC_LGUI|KC_SPACE|KC_LALT|KC_RALT|KC_NO|KC_RGUI|KC_RCTL|
B2|8|KC_LSFT|KC_Z|KC_C|KC_X|KC_V|KC_B|KC_N|KC_M|
B6|9|KC_CAPS|KC_A|KC_D|KC_S|KC_F|KC_G|KC_H|KC_J|

Make example for this keyboard (after setting up your build environment):

    make that8bitkeyboard/msx_sharp_hotbit:default
    
To build and write the firmware on the Arduino Pro Mini (Atmega32U4), use the commmand:

    make that8bitkeyboard/msx_sharp_hotbit:avrdude
