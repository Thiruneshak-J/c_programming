#include <stdio.h>
int main(){
    int n;
    printf("enter the size of array:");
    scanf("%d",&n);
    int a[n],i,pos,e,j;
    for(i=0;i<n;i++){
       printf("enter the number");
       scanf("%d",&a[i]);
    }
    printf("you enterd numbers in array [");
    for(i=0;i<n;i++){
    if(i!=n-1){
            printf("%d,",a[i]);
    }
    else{
            printf("%d",a[i]);
    }
}
    printf("]\n");
    printf("enter the elemen to add:");
    scanf("%d",&e);
    printf("enter the position to add(by index):");
    scanf("%d",&pos);
    for(j=n;j>pos;j--){
        a[j]=a[j-1];
            }
    a[pos]=e;
    n++;
    printf("the updated array is [");
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