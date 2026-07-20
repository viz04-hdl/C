#include <stdio.h>
#include <string.h>

int main(void) {
    int a = 5;
    int lsb = a & 1;
    char res[10];

    if (lsb == 0)
        strcpy(res, "even");
    else
        strcpy(res, "odd");

    printf("%s\n", res);
    return 0;
}
