
#include "prog3.h"

int main() {
    char buffer[1024];
    int i = 0;

    while(fgets(buffer, 1024, stdin) != NULL) {
        printf("%d: %s", i++, buffer);
    }

    return 0;
}