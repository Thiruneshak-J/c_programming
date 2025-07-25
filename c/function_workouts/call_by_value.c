//call by value  ----->>> valuw will different in func and main
#include <stdio.h>
void add(int x){ // x or a -- if any variable name it can access
    x=x+25;
    printf("value of a in function is %d\n",x);
}
int main(){
    int a=25;
    add(a);
    printf("value of a in main %d\n",a);
    return 0;
}