#include "stdio.h"

// ..



void foo(int *a) {
    a = a + 1; // acessa variavel global
}

void main(void) {
    int a;
    int b;

    while (1) {
        foo(&a);     
        if (a > 5) {
            b = 1;
        }
    }
}
