#include <stdio.h>

#define PI 3.14

int main(void) {
    int radius;
    float area;
    char unit;

    printf("Enter radius of circle: ");
    scanf("%d", &radius);

    printf("Enter unit of measurement (e.g., c for cm): ");
    scanf(" %c", &unit);

    area = PI * (float)(radius * radius);
    printf("Area = %.2f %c\n", area, unit);
    return 0;
}
