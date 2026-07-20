#include <stdio.h>

int main(){
    int arr[] = {1,2,3,4,5};
    printf("%d \n",sizeof(arr));
    for(int i = 0 ; i < 5 ; i++){
        printf("%d \n", sizeof(arr[i]));
    }
    return 0;
}