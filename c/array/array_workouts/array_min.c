#include <stdio.h>
int main(){
    int n;
    printf("enter the size of array:");
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++){
        printf("enter the number:");
        scanf("%d",&a[i]);
    }
    printf("array is [");
    for(i=0;i<n;i++){
        if(i==n-1){
            printf("%d",a[i]);
        }
        else{
            printf("%d,",a[i]);
        }
    }
    printf("]\n");
    int min=a[0];
    for(i=0;i<n;i++){
        if(a[i]<min){
            min=a[i];
        }
    }
    printf("minimum in array is %d\n",min);
    return 0;
}