/*
 * Lookup table to access key information for a PS/2 scan code.
 *
 * Author: Julie Zelenski <zelenski@cs.stanford.edu>
 */

#include "ps2.h"

#define UNUSED { PS2_KEY_NONE, PS2_KEY_NONE }

ps2_key_t const ps2_keys[] = {
/* scan code */
    /* 00 */      UNUSED,
    /* 01 */   { PS2_KEY_F9,  0 },
    /* 02 */      UNUSED,
    /* 03 */   { PS2_KEY_F5,  0 },
    /* 04 */   { PS2_KEY_F3,  0 },
    /* 05 */   { PS2_KEY_F1,  0 },
    /* 06 */   { PS2_KEY_F2,  0 },
    /* 07 */   { PS2_KEY_F12, 0 },
    /* 08 */      UNUSED,
    /* 09 */   { PS2_KEY_F10, 0 },
    /* 0A */   { PS2_KEY_F8,  0 },
    /* 0B */   { PS2_KEY_F6,  0 },
    /* 0C */   { PS2_KEY_F4,  0 },
    /* 0D */   { '\t', 0 },
    /* 0E */   { '`', '~' },
    /* 0F */      UNUSED,
    /* 10 */      UNUSED,
    /* 11 */   { PS2_KEY_ALT, 0 },
    /* 12 */   { PS2_KEY_SHIFT, 0 },
    /* 13 */      UNUSED,
    /* 14 */   { PS2_KEY_CTRL, 0 },
    /* 15 */   { 'q', 'Q' },
    /* 16 */   { '1', '!' },
    /* 17 */      UNUSED,
    /* 18 */      UNUSED,
    /* 19 */      UNUSED,
    /* 1A */   { 'z', 'Z' },
    /* 1B */   { 's', 'S' },
    /* 1C */   { 'a', 'A' },
    /* 1D */   { 'w', 'W' },
    /* 1E */   { '2', '@' },
    /* 1F */      UNUSED,
    /* 20 */      UNUSED,
    /* 21 */   { 'c', 'C' },
    /* 22 */   { 'x', 'X' },
    /* 23 */   { 'd', 'D' },
    /* 24 */   { 'e', 'E' },
    /* 25 */   { '4', '$' },
    /* 26 */   { '3', '#' },
    /* 27 */      UNUSED,
    /* 28 */      UNUSED,
    /* 29 */   { ' ', ' ' },
    /* 2A */   { 'v', 'V' },
    /* 2B */   { 'f', 'F' },
    /* 2C */   { 't', 'T' },
    /* 2D */   { 'r', 'R' },
    /* 2E */   { '5', '%' },
    /* 2F */      UNUSED,
    /* 30 */      UNUSED,
    /* 31 */   { 'n', 'N' },
    /* 32 */   { 'b', 'B' },
    /* 33 */   { 'h', 'H' },
    /* 34 */   { 'g', 'G' },
    /* 35 */   { 'y', 'Y' },
    /* 36 */   { '6', '^' },
    /* 37 */      UNUSED,
    /* 38 */      UNUSED,
    /* 39 */      UNUSED,
    /* 3A */   { 'm', 'M' },
    /* 3B */   { 'j', 'J' },
    /* 3C */   { 'u', 'U' },
    /* 3D */   { '7', '&' },
    /* 3E */   { '8', '*' },
    /* 3F */      UNUSED,
    /* 40 */      UNUSED,
    /* 41 */   { ',', '<' },
    /* 42 */   { 'k', 'K' },
    /* 43 */   { 'i', 'I' },
    /* 44 */   { 'o', 'O' },
    /* 45 */   { '0', ')' },
    /* 46 */   { '9', '(' },
    /* 47 */      UNUSED,
    /* 48 */      UNUSED,
    /* 49 */   { '.', '>' },
    /* 4A */   { '/', '?' },
    /* 4B */   { 'l', 'L' },
    /* 4C */   { ';', ':' },
    /* 4D */   { 'p', 'P' },
    /* 4E */   { '-', '_' },
    /* 4F */      UNUSED,
    /* 50 */      UNUSED,
    /* 51 */      UNUSED,
    /* 52 */   { '\'', '"' },
    /* 53 */      UNUSED,
    /* 54 */   { '[', '{' },
    /* 55 */   { '=', '+' },
    /* 56 */      UNUSED,
    /* 57 */      UNUSED,
    /* 58 */   { PS2_KEY_CAPS_LOCK, 0 },
    /* 59 */   { PS2_KEY_SHIFT, 0 },
    /* 5A */   { '\n', 0 },
    /* 5B */   { ']', '}' },
    /* 5C */      UNUSED,
    /* 5D */   { '\\', '|' },
    /* 5E */      UNUSED,
    /* 5F */      UNUSED,
    /* 60 */      UNUSED,
    /* 61 */      UNUSED,
    /* 62 */      UNUSED,
    /* 63 */      UNUSED,
    /* 64 */      UNUSED,
    /* 65 */      UNUSED,
    /* 66 */   { '', 0 },
    /* 67 */      UNUSED,
    /* 68 */      UNUSED,
    /* 69 */   { PS2_KEY_END, '1' },
    /* 6A */      UNUSED,
    /* 6B */   { PS2_KEY_ARROW_LEFT, '4' },
    /* 6C */   { PS2_KEY_HOME, '7' },
    /* 6D */      UNUSED,
    /* 6E */      UNUSED,
    /* 6F */      UNUSED,
    /* 70 */   { PS2_KEY_INSERT, '0' },
    /* 71 */   { PS2_KEY_DELETE, '.' },
    /* 72 */   { PS2_KEY_ARROW_DOWN, '2' },
    /* 73 */   { '5' , '5' },
    /* 74 */   { PS2_KEY_ARROW_RIGHT, '6' },
    /* 75 */   { PS2_KEY_ARROW_UP, '8' },
    /* 76 */   { PS2_KEY_ESC, 0 },
    /* 77 */   { PS2_KEY_NUM_LOCK, 0 },
    /* 78 */   { PS2_KEY_F11, 0 },
    /* 79 */   { '+', 0 },
    /* 7A */   { PS2_KEY_PAGE_DOWN, '3' },
    /* 7B */   { '-', 0 },
    /* 7C */   { '*', 0 },
    /* 7D */   { PS2_KEY_PAGE_UP, '9' },
    /* 7E */   { PS2_KEY_SCROLL_LOCK, 0 },
    /* 7F */      UNUSED,
    /* 80 */      UNUSED,
    /* 81 */      UNUSED,
    /* 82 */      UNUSED,
    /* 83 */   { PS2_KEY_F7, 0 },
};
