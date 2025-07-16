#include <stdio.h>
int main(){
    const int a=10;
    int b=9;
    int sum=a+b;
    //a++; if a is not constant it will run also can a=a+b
    printf("the answer is %d\n",sum);
    return 0;    
}