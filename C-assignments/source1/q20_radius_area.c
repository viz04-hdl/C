#include <stdio.h> //input output library in c

#define PI 3.14 //defining gloabl variable pi with its value

int main() {  // point where code enters 
    int radius; 
    float area;
    char unit;   // initializing variables integer radius , float area, character unit

    printf("Enter radius of circle: "); 
    scanf("%d", &radius); // we print a stateement asking asking for input for radius variable

    printf("Enter unit of measurement (e.g., c for cm): ");
    scanf(" %c", &unit); // getting input for vareiable unit

    area = PI * (float)(radius * radius); // using (float) to keep the value in float datatype 

    printf("Size of float variable: %lu bytes\n", sizeof(area)); // pritning sizeof variable area in bytes

    if (area > 0) {
        printf("Area = %.2f %c%c\n", area, unit, 178);
    } else {
        printf("Invalid radius entered.\n");
        
    //area less than or equal to 0 print else block statement
    //if area greater than 0 print area upto 2 decimal point , unit as it is and 178 as a ascci character
    }

    return 0;
}
