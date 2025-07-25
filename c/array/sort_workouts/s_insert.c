#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,*a;
    printf("enter the size of array:");
    scanf("%d",&n);
    a=(int *)malloc(n*(sizeof(int)));
    if(a==NULL){
        printf("memory allocation nor found\n");
        return 1;
    }
    int i;
    for(i=0;i<n;i++){
    printf("enter the number:");
    scanf("%d",&a[i]);
    }
    printf("you enterd numbers are [");
    for(i=0;i<n;i++){
        if(i==n-1){
        printf("%d",a[i]);
        }
        else{
            printf("%d,",a[i]);
        }
    }
    printf("]\n");
    int j,k,key;
    for(j=1;j<n;j++){
        key=a[j];
        k=j-1;
        while(k>=0 && a[k]>key){
            a[k+1]=a[k];
            k--;
        }
        a[k+1]=key;
    }
    
    printf("you sortes numbers are [");
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