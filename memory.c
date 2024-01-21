#include <stdio.h>
#include <stdlib.h>
#include "Types.h"

int main(int argc, char** argv) {
    Foo* foopointer = malloc(sizeof(Foo));
    // we have no data in foopointer here only a piece of memory we control
    // when we call this we get the default values
    printf("foopointer->state == %d\n", foopointer->state);
    printf("foopointer->len  == %d\n", foopointer->len);

    foopointer->len = 5;
    foopointer->state = kActive;

    // now we have the two values we assigned
    printf("foopointer->state == %d\n", foopointer->state);
    printf("foopointer->len  == %d\n", foopointer->len);

    free(foopointer);

    // now we have undefined behaviour as we no longer control the memory
    // this data is most likely garbage
    printf("foopointer->state == %d\n", foopointer->state);
    printf("foopointer->len  == %d\n", foopointer->len);
}
