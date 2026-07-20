#include <stdio.h>

int main() {
    
    int a  = 1;
    char b = 'b';
    float c = 1.1;
    double d = 1.212121212121212;
    
    printf("a = %zu , b = %zu , c = %zu , d = %zu \n",sizeof(a),sizeof(b),sizeof(c),sizeof(d));

    printf("The size of the variable are %d = a , %c = b , %f = c , %lf = d  \n", a,b,c,d);
    return 0;
}