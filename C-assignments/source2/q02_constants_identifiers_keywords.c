#include <stdio.h>

typedef struct Student {
    int marks;
    float attendance;
} Student;

union Data {
    int i;
    float f;
};

int main(void) {
    int arr[3] = {1, 2, 3};
    int *p = arr;

    Student s = {90, 95.5};
    union Data d;

    printf("arr[0] = %d\n", arr[0]);
    printf("*p = %d\n", *p);
    printf("marks = %d\n", s.marks);

    d.i = 5;
    printf("union i = %d\n", d.i);

    return 0;
}
