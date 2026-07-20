#include <stdio.h>

int global = 10;

int main(){
    int a  = 2;
    int modify = global;
    modify+=1;
    int square = a * a;
    int transfer = square;
    
    printf("%d \n",transfer);
    printf("%d",modify);
    
    return 0;
}