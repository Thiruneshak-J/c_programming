#include <stdio.h>
int main(){
    int n,sum=0;
    printf("enter the size of array:");
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++){
        printf("enter the number:");
        scanf("%d",&a[i]);
    }
    printf("you enter array is [");
    for(i=0;i<n;i++){
        if(i==n-1){
            printf("%d",a[i]);
        }
        else{
        printf("%d,",a[i]);
        }
    }
    printf("]\n");
    for(i=0;i<n;i++){
        sum+=a[i];
    }
    printf("sum of array is : %d",sum);
    return 0;
}