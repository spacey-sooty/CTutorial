#pragma once

typedef enum {
    kIdle = 0,
    kActive = 1,
} State;

typedef struct {
    int len;
    State state;
} Foo;
