#include <stdio.h>
#include <stdint.h>
#include "Types.h"

int main(int argc, char** argv) {
    State state;
    state = kIdle;
    printf("This implicitly casts State to an integer: %d\n", state);
    state = kActive;
    uint8_t value;
    value = (uint8_t)state;
    printf("Here we have explicitly cast our value: %d\n", value);
}
