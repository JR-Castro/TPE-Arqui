#include <irqDispatcher.h>

void (*handlers[15])() = {timer_handler, keyboard_handler};

void irqDispatcher(uint64_t irq) {
	(handlers[irq])();
	return;
}
