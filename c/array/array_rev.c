#include <stdio.h>
int main(){
    int n;
    printf("enter the size of the array:");
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++){
        printf("enter the number %d:",i);
        scanf("%d",&a[i]);
    }
    printf("you entered in array is : ");
    for(i=0;i<n;i++){
        if(i==n-1){
            printf("%d \n",a[i]);
        }
        else{
        printf("%d ",a[i]);
        }
    }
    printf("reverse array is :");
    for(i=n-1;i>=0;i--){
        printf("%d ",a[i]);
    }
    return 0;
}