#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,*a,s;
    printf("enter the size of array:");
    scanf("%d",&n);
    a=(int *)malloc(n *(sizeof(int)));
    if (a==NULL){
        printf("memory allocation is not found\n");
        return 1;
    }
    int i,j,k,temp=0;
    for(i=0;i<n;i++){
        printf("enter the number:");
        scanf("%d",&a[i]);
    }
    printf("you enterd array is [");
    for(i=0;i<n;i++){
        if(i!=n-1){
        printf("%d,",a[i]);
        }
        else{
            printf("%d",a[i]);
        }
    }
    printf("]\n");
    for(i=0;i<n-1;i++){
        s==0;
        for(j=0;j<n-1-i;j++){
            if (a[j]>a[j+1]){
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
                s=1;
            }
        }
        if(s==0){
            break;
        }
    }
    printf("sorted array is [");
    for(k=0;k<n;k++){
        if(k!=n-1){
        printf("%d,",a[k]);
        }
        else{
            printf("%d",a[k]);
        }
    }
    printf("]\n");
    free(a);
    return 0;
}