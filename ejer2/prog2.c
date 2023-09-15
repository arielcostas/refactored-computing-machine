#include <stdio.h>
#include "prog2.h"

int main() {
    struct tonteria mitonteria;
    mitonteria.c = 69;

    printf("Hello world\n");
    printf("C is %d\n", mitonteria.c);

    return 0;
}
