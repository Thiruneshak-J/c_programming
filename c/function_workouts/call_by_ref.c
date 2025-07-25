#include <stdio.h>
void sub(int *y){
    *y=*y-30;
    printf("the value in function %d\n",*y);
}
int main(){
    int a=80;
    sub(&a);
    printf("value a in main %d\n",a);
    return 0;

}