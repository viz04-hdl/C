#include <stdio.h>

int main(void) {
    unsigned char c;

    for (c = 0; c <= 255; c++) {
        printf("%u ", c);
    }

    printf("\n");
    return 0;
}
