#include <stdio.h>

typedef struct Student{
    int marks;
    float attendance;
    char name;
}stud;

int main(){
    stud a  = {99,99.9,'c'};
    printf("Marks: %d\n", a.marks);
    printf("Attendance: %.1f\n", a.attendance);
    printf("Name: %c\n", a.name);
    return 0;
}