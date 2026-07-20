#include <stdio.h>

int main(void) {
    int a = 10;
    float b = 3.14;
    char c = 'A';

    printf("size of int = %zu bytes\n", sizeof(a));
    printf("size of float = %zu bytes\n", sizeof(b));
    printf("size of char = %zu bytes\n", sizeof(c));

    return 0;
}
