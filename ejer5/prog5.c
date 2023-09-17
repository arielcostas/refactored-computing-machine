#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Invalid argument count\n");
        return 1;
    }

    char *chorrada = argv[1];

    while(*chorrada != '\0') {
        chorrada++;
    }

    chorrada--;

    while (*chorrada != '\0') {
        printf("%c", *chorrada);
        chorrada--;
    }

    return 0;
}