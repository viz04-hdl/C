#include <stdio.h>

int main(void) {
    float a;
    int b;

    printf("enter a float: ");
    scanf("%f", &a);

    b = (int)a;
    printf("The input as int is %d\n", b);
    return 0;
}
