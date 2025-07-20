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
    printf("you entered numbers in array [");
    for(i=0;i<n;i++){
        if(i==n-1){
            printf("%d",a[i]);
        }
        else{
            printf("%d,",a[i]);
        }
    }
    printf("]\n");
    int max=0;
    for(i=0;i<n;i++){
        if(max<a[i]){
            max=a[i];
        }
    }
    printf("maximum in array is %d",max);
    return 0;

}