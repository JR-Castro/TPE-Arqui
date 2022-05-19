#ifndef KEYBOARD_H
#define KEYBOARD_H

#include <stdint.h>

#define BUFFER_SIZE 200

uint16_t getKey();

void keyboard_handler();

char get();

#endif