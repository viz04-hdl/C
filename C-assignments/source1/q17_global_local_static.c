int temp =  4;

int func1(int a){
    int local = 1;
    int next  = a + local + temp;
    printf("%d \n",next);
}

int func2(int a){
    int static test = 10;
    test+=1;
    int next = a + temp;
    printf("%d \n",next);
    printf("%d \n",test);
}
    
    
int main(){
    func1(1);
    func2(1);
    func2(1);
    func2(1);
    return 0;
    
}