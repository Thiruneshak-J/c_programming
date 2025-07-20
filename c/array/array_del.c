#include <stdio.h>
int main(){
    int n;
    printf("enter the size of array:");
    scanf("%d",&n);
    int a[n],i,d,j;
    for(i=0;i<n;i++){
        printf("enter the number:");
        scanf("%d",&a[i]);
    }
    printf("enterd array is [");
    for(i=0;i<n;i++){
        if(i==n-1){
            printf("%d",a[i]);
        }
        else{
            printf("%d,",a[i]);
        }
    }
    printf("]\n");
    printf("enter the element to delete(by index):");
    scanf("%d",&d);
    if(d<0||d>n){
        printf("invalid");
    }
    else{
    for(j=d;j<n;j++){
        a[j]=a[j+1];
    }
    }
    n--;
    printf("updated array is [");
    for(i=0;i<n;i++){
        if(i==n-1){
            printf("%d",a[i]);
        }
        else{
            printf("%d,",a[i]);
        }
    }
    printf("]\n");

    return 0;
}