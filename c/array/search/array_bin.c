#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,*a,i,e;
    printf("enter the size of array:");
    scanf("%d",&n);
    a=(int *)malloc(n *sizeof(int));
    for(i=0;i<n;i++){
        printf("enter the number:");
        scanf("%d",&a[i]);
    }
    printf("you entered array is [");
    for(i=0;i<n;i++){
        if(i!=n-1){
        printf("%d,",a[i]);
        }
        else{
            printf("%d",a[i]);
        }
    }
    printf("]\n");
    printf("enter the element to found:");
    scanf("%d",&e);
    int l=0,m=0,h=n-1;
    while(l<=h){
        m=(l+h)/2;
        if(a[m]==e){
            printf("your element in index of %d",m);
            return 0;
        }
        else if(a[m]<e){
            l=m+1;
        }
        else{
            h=m-1;
        }

    }
    free(a);
}