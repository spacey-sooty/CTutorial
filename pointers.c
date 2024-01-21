#include <stdio.h>

int main(int argc, char** argv) {
    int i;
    i = 0;
    int* pointer = &i;
    printf("This is the value of i: %d\n", 0);
    printf("This is the memory adress of i: %p\n", pointer);
}
