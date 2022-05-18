#ifndef IDTLOADER_H
#define IDTLOADER_H

#include <stdint.h>
#include <idtLoader.h>
#include <defs.h>
#include <interrupts.h>

static void setup_IDT_entry (int index, uint64_t offset);

void load_idt();

static void setup_IDT_entry (int index, uint64_t offset);
#endif