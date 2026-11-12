#include "global.h"
void incrementCounter(void) {
    // Modifies the exact same variable defined in main.c
    shared_counter += 10; 
}