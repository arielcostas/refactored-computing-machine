#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    for (int a = argc - 1; a > 0; a--) {
        char *chorrada = argv[a];
        size_t end = strlen(chorrada) - 1;

        for (int i = (int) end; i >= 0; i--) {
            printf("%c", chorrada[i]);
        }
        printf(" ");
    }
    return 0;
}