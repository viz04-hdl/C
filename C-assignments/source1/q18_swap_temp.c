int main(){
    int a  = 1;
    int b = 2;
    
    int c = b;
    b = a;
    a = c;
    
    printf("%d",a);
    printf("%d",b);
    
    return 0;

}