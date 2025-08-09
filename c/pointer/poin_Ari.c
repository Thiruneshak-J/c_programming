//arthimatic pointer
#include <stdio.h>
int main(){
    int a[]={5,3,4,5,6};
    int *p=a;
    printf("1st element :%d\n",*p);
    printf("2nd element :%d\n",*(p+1));
    return 0;

}