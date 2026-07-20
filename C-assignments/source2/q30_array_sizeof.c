#include <stdio.h>

int main(void) {
    int arr[] = {1, 2, 3, 4, 5};
    printf("size of array = %zu\n", sizeof(arr));

    for (int i = 0; i < 5; i++) {
        printf("size of arr[%d] = %zu\n", i, sizeof(arr[i]));
    }

    return 0;
}
