#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,*a;
    printf("enter the size of array:");
    scanf("%d",&n);
    a=(int *)malloc(n *(sizeof(int)));
    if(a==NULL){
        printf("memory allocation not found\n");
        return 1;
    }
    int i,s,j;
    for(i=0;i<n;i++){
        printf("enter the number:");
        scanf("%d",&a[i]);
    }
    printf("you entered array [");
    for(i=0;i<n;i++){
        if(i==n-1){
        printf("%d",a[i]);
        }
        else{
            printf("%d,",a[i]);
        }
    }
    printf("]\n");
    for(i=0;i<n-1;i++){
        s=i;
        for(j=i+1;j<n;j++){
            if(a[s]>a[j]){
                s=j;
            }
        }
        int temp=a[i];
        a[i]=a[s];
        a[s]=temp;
    }
    printf("you sorted array [");
    for(i=0;i<n;i++){
        if(i==n-1){
        printf("%d",a[i]);
        }
        else{
            printf("%d,",a[i]);
        }
    }
    printf("]\n");
    free(a);
    return 0;
}