#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,*a,i,f=0,e;
    printf("enter the size of array:");
    scanf("%d",&n);
    a=(int *)malloc(n *sizeof(int));
    if(a==NULL){
        printf("memory allocation is not found\n");
        return 1;
    }
    for(i=0;i<n;i++){
        printf("enter the number:");
        scanf("%d",&a[i]);
    }
    printf("you entered numbers [");
    for(i=0;i<n;i++){
        if(i==n-1){
            printf("%d",a[i]);
        }
        else{
        printf("%d,",a[i]);
        }
    }
    printf("]\n");
    printf("enter the element to find:");
    scanf("%d",&e);
    for(i=0;i<n;i++){
        if(a[i]==e){
            printf("your element in index %d\n",i);
            f=1;
            break;
        }
    }
    if(!f){
            printf("not found\n");
        }
    free(a);
    return 0;
}