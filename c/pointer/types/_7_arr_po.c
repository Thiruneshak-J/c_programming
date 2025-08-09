#include <stdio.h>
int main(){
    int arr[]={1,2,3,4};
    int *p=arr; // array pointer
    printf("%d",*p);
    printf("%d",*(p+1));
}