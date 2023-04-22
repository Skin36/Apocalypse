#include "keyboard.h"

int Scancode [231] =
{
    0,// SDL_SCANCODE_UNKNOWN 0
    0x1,//  	             // 1
    0x2,                     // 2
    0x3,                     // 3
    0x1E,      //SDL_SCANCODE_A 4
    0x30,      //SDL_SCANCODE_B 5
    0x2E,      //SDL_SCANCODE_C 6
    0x20,      //SDL_SCANCODE_D 7
    0x12,      //SDL_SCANCODE_E 8
    0x21,      //SDL_SCANCODE_F 9
    0x22,      //SDL_SCANCODE_G 10
    0x23,      //SDL_SCANCODE_H 11
    0x17,      //SDL_SCANCODE_I 12
    0x24,      //SDL_SCANCODE_J 13
    0x25,      //SDL_SCANCODE_K 14
    0x26,      //SDL_SCANCODE_L 15
    0x32,      //SDL_SCANCODE_M
    0x31,      //SDL_SCANCODE_N
    0x18,      //SDL_SCANCODE_O
    0x19,      //SDL_SCANCODE_P  19
    0x10,      //SDL_SCANCODE_Q
    0x13,      //SDL_SCANCODE_R
    0x1F,      //SDL_SCANCODE_S
    0x14,      //SDL_SCANCODE_T
    0x16,      //SDL_SCANCODE_U
    0x2F,      //SDL_SCANCODE_V
    0x11,      //SDL_SCANCODE_W
    0x2D,      //SDL_SCANCODE_X
    0x15,      //SDL_SCANCODE_Y
    0x2C,      //SDL_SCANCODE_Z
    0x02,      //SDL_SCANCODE_1   30   
    0x03,      //SDL_SCANCODE_2
    0x04,      //SDL_SCANCODE_3
    0x05,      //SDL_SCANCODE_4
    0x06,      //SDL_SCANCODE_5
    0x07,      //SDL_SCANCODE_6
    0x08,      //SDL_SCANCODE_7
    0x09,      //SDL_SCANCODE_8
    0x0A,      //SDL_SCANCODE_9
    0x0B,      //SDL_SCANCODE_0  39
    0x1C,      //SDL_SCANCODE_RETURN
    0x01,      //SDL_SCANCODE_ESCAPE
    0x0E,      //SDL_SCANCODE_BACKSPACE
    0x0F,      //SDL_SCANCODE_TAB
    0x39,      //SDL_SCANCODE_SPACE
    0x0C,      //SDL_SCANCODE_MINUS
    0x0D,      //SDL_SCANCODE_EQUALS
    0x1A,      //SDL_SCANCODE_LEFTBRACKET
    0x1B,      //SDL_SCANCODE_RIGHTBRACKET
    0x2B,      //SDL_SCANCODE_BACKSLASH
      0,       //SDL_SCANCODE_NONUSHASH
    0x27,      //SDL_SCANCODE_SEMICOLON
    0x28,      //SDL_SCANCODE_APOSTROPHE
    0x29,      //SDL_SCANCODE_GRAVE,
    0x33,      //SDL_SCANCODE_COMMA
    0x34,      //SDL_SCANCODE_PERIOD
    0x35,      //SDL_SCANCODE_SLASH
    0x3A,      //SDL_SCANCODE_CAPSLOCK
    0x3B,      //SDL_SCANCODE_F1  58
    0x3C,      //SDL_SCANCODE_F2
    0x3D,      //SDL_SCANCODE_F3
    0x3E,      //SDL_SCANCODE_F4
    0x3F,      //SDL_SCANCODE_F5
    0x40,      //SDL_SCANCODE_F6
    0x41,      //SDL_SCANCODE_F7
    0x42,      //SDL_SCANCODE_F8
    0x43,      //SDL_SCANCODE_F9
    0x44,      //SDL_SCANCODE_F10
    0x57,      //SDL_SCANCODE_F11
    0x58,      //SDL_SCANCODE_F12
      0,       //SDL_SCANCODE_PRINTSCREEN
    0x46,      //SDL_SCANCODE_SCROLLLOCK
      0,      //SDL_SCANCODE_PAUSE  72
    0x52E0,      //SDL_SCANCODE_INSERT
    0x47E0,      //SDL_SCANCODE_HOME
    0x49E0,      //SDL_SCANCODE_PAGEUP
    0x53E0,      //SDL_SCANCODE_DELETE
    0x4FE0,      //SDL_SCANCODE_END
    0x51E0,      //SDL_SCANCODE_PAGEDOWN
    0x4DE0,      //SDL_SCANCODE_RIGHT 79
    0x4BE0,      //SDL_SCANCODE_LEFT  80
    0x50E0,      //SDL_SCANCODE_DOWN  81
    0x48E0,      //SDL_SCANCODE_UP    82
        0,      //SDL_SCANCODE_NUMLOCKCLEAR
    0x35E0,     //SDL_SCANCODE_KP_DIVIDE
    0x37,       //SDL_SCANCODE_KP_MULTIPLY
    0x4A,       //SDL_SCANCODE_KP_MINUS
    0x4E,       //SDL_SCANCODE_KP_PLUS
    0x1CE0,       //SDL_SCANCODE_KP_ENTER
    0x4F,       //SDL_SCANCODE_KP_1
    0x50,       //SDL_SCANCODE_KP_2
    0x51,       //SDL_SCANCODE_KP_3
    0x4B,       //SDL_SCANCODE_KP_4
    0x4C,       //SDL_SCANCODE_KP_5
    0x4D,       //SDL_SCANCODE_KP_6
    0x47,       //SDL_SCANCODE_KP_7
    0x48,       //SDL_SCANCODE_KP_8
    0x49,       //SDL_SCANCODE_KP_9
    0x52,       //SDL_SCANCODE_KP_0  98
    0x53,       //SDL_SCANCODE_KP_PERIOD
      0,       //SDL_SCANCODE_NONUSBACKSLASH
      0,       //SDL_SCANCODE_APPLICATION
      0,       //SDL_SCANCODE_POWER
      0,       //SDL_SCANCODE_KP_EQUALS
      0,       //SDL_SCANCODE_F13
      0,       //SDL_SCANCODE_F14
      0,       //SDL_SCANCODE_F15
      0,       //SDL_SCANCODE_F16
      0,       //SDL_SCANCODE_F17
      0,       //SDL_SCANCODE_F18
      0,       //SDL_SCANCODE_F19
      0,       //SDL_SCANCODE_F20
      0,       //SDL_SCANCODE_F21
      0,       //SDL_SCANCODE_F22
      0,       //SDL_SCANCODE_F23
      0,       //SDL_SCANCODE_F24
      0,       //SDL_SCANCODE_EXECUTE 116
      0,       //SDL_SCANCODE_HELP
      0,       //SDL_SCANCODE_MENU
      0,       //SDL_SCANCODE_SELECT
      0,       //SDL_SCANCODE_STOP
      0,       //SDL_SCANCODE_AGAIN
      0,       //SDL_SCANCODE_UNDO
      0,       //SDL_SCANCODE_CUT
      0,       //SDL_SCANCODE_COPY
      0,       //SDL_SCANCODE_PASTE
      0,       //SDL_SCANCODE_FIND
      0,       //SDL_SCANCODE_MUTE
      0,       //SDL_SCANCODE_VOLUMEUP
      0,       //SDL_SCANCODE_VOLUMEDOWN
      0,       //SDL_SCANCODE_LOCKINGCAPSLOCK
      0,       //SDL_SCANCODE_LOCKINGNUMLOCK
      0,       //SDL_SCANCODE_LOCKINGSCROLLLOCK
      0,       //SDL_SCANCODE_KP_COMMA
      0,       //SDL_SCANCODE_KP_EQUALSAS400
      0,       //SDL_SCANCODE_INTERNATIONAL1
      0,       //SDL_SCANCODE_INTERNATIONAL2
      0,       //SDL_SCANCODE_INTERNATIONAL3
      0,       //SDL_SCANCODE_INTERNATIONAL4
      0,       //SDL_SCANCODE_INTERNATIONAL5
      0,       //SDL_SCANCODE_INTERNATIONAL6
      0,       //SDL_SCANCODE_INTERNATIONAL7
      0,       //SDL_SCANCODE_INTERNATIONAL8
      0,       //SDL_SCANCODE_INTERNATIONAL9  143
      0,       //SDL_SCANCODE_LANG1
      0,       //SDL_SCANCODE_LANG2
      0,       //SDL_SCANCODE_LANG3
      0,       //SDL_SCANCODE_LANG4
      0,       //SDL_SCANCODE_LANG5
      0,       //SDL_SCANCODE_LANG6
      0,       //SDL_SCANCODE_LANG7
      0,       //SDL_SCANCODE_LANG8
      0,       //SDL_SCANCODE_LANG9
      0,       //SDL_SCANCODE_ALTERASE
      0,       //SDL_SCANCODE_SYSREQ
      0,       //SDL_SCANCODE_CANCEL
      0,       //SDL_SCANCODE_CLEAR
      0,       //SDL_SCANCODE_PRIOR
      0,       //SDL_SCANCODE_RETURN2
      0,       //SDL_SCANCODE_SEPARATOR
      0,       //SDL_SCANCODE_OUT     160
      0,       //SDL_SCANCODE_OPER
      0,       //SDL_SCANCODE_CLEARAGAIN
      0,       //SDL_SCANCODE_CRSEL
      0,       //SDL_SCANCODE_EXSEL  164
      0,
      0,
      0,
      0,
      0,
      0,
      0,
      0,
      0,
      0,
      0,
      0,       //SDL_SCANCODE_KP_00 176
      0,       //SDL_SCANCODE_KP_000
      0,       //SDL_SCANCODE_THOUSANDSSEPARATOR
      0,       //SDL_SCANCODE_DECIMALSEPARATOR
      0,       //SDL_SCANCODE_CURRENCYUNIT
      0,       //SDL_SCANCODE_CURRENCYSUBUNIT
      0,       //SDL_SCANCODE_KP_LEFTPAREN
      0,       //SDL_SCANCODE_KP_RIGHTPAREN
      0,       //SDL_SCANCODE_KP_LEFTBRACE
      0,       //SDL_SCANCODE_KP_RIGHTBRACE
      0,       //SDL_SCANCODE_KP_TAB
      0,       //SDL_SCANCODE_KP_BACKSPACE
      0,       //SDL_SCANCODE_KP_A
      0,       //SDL_SCANCODE_KP_B
      0,       //SDL_SCANCODE_KP_C    190
      0,       //SDL_SCANCODE_KP_D
      0,       //SDL_SCANCODE_KP_E
      0,       //SDL_SCANCODE_KP_F
      0,       //SDL_SCANCODE_KP_XOR
      0,       //SDL_SCANCODE_KP_POWER
      0,       //SDL_SCANCODE_KP_PERCENT
      0,       //SDL_SCANCODE_KP_LESS
      0,       //SDL_SCANCODE_KP_GREATER
      0,       //SDL_SCANCODE_KP_AMPERSAND
      0,       //SDL_SCANCODE_KP_DBLAMPERSAND
      0,       //SDL_SCANCODE_KP_VERTICALBAR
      0,       //SDL_SCANCODE_KP_DBLVERTICALBAR
      0,       //SDL_SCANCODE_KP_COLON
      0,       //SDL_SCANCODE_KP_HASH
      0,       //SDL_SCANCODE_KP_SPACE
      0,       //SDL_SCANCODE_KP_AT
      0,       //SDL_SCANCODE_KP_EXCLAM
      0,       //SDL_SCANCODE_KP_MEMSTORE
      0,       //SDL_SCANCODE_KP_MEMRECALL
      0,       //SDL_SCANCODE_KP_MEMCLEAR  210
      0,       //SDL_SCANCODE_KP_MEMADD
      0,       //SDL_SCANCODE_KP_MEMSUBTRACT
      0,       //SDL_SCANCODE_KP_MEMMULTIPLY
      0,       //SDL_SCANCODE_KP_MEMDIVIDE
      0,       //SDL_SCANCODE_KP_PLUSMINUS
      0,       //SDL_SCANCODE_KP_CLEAR
      0,       //SDL_SCANCODE_KP_CLEARENTRY
      0,       //SDL_SCANCODE_KP_BINARY
      0,       //SDL_SCANCODE_KP_OCTAL
      0,       //SDL_SCANCODE_KP_DECIMAL 220
      0,       //SDL_SCANCODE_KP_HEXADECIMAL
      0,
      0,
      0x1D,    //SDL_SCANCODE_LCTRL  224
      0x2A,    //SDL_SCANCODE_LSHIFT
      0x38,    //SDL_SCANCODE_LALT
      0,       //SDL_SCANCODE_LGUI
      0x1DE0,  //SDL_SCANCODE_RCTRL
      0x36,    //SDL_SCANCODE_RSHIFT
      0x38E0  //SDL_SCANCODE_RALT  230
};

int code_conv(int code)
{
    return Scancode[code];
}


