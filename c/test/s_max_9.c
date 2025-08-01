#include <stdio.h>
#include <stdlib.h>
int main(){
    int *ar,n;
    printf("enter the size of array:");
    scanf("%d",&n);
    ar=(int *)malloc(n*sizeof(int));
    int i;
    for(i=0;i<n;i++){
        printf("enter the number:");
        scanf("%d",&ar[i]);
    }
    printf("you entered in array [");
    for(i=0;i<n;i++){
        if(i!=n-1){
        printf("%d,",ar[i]);
        }
        else{
            printf("%d",ar[i]);
        }
    }
    printf("]\n");
    int j,k,tm;
    for(j=0;j<n-1;j++){
        for(k=0;k<n-1-j;k++){
            if(ar[k]>ar[k+1]){
                tm=ar[k];
                ar[k]=ar[k+1];
                ar[k+1]=tm;
            }
        }
}
    int key=ar[n-2];
    printf("the second maximum number in array is %d",key);
    return 0;
}