#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,*ar;
    printf("enter the size of array:");
    scanf("%d",&n);
    ar=(int *)malloc(n * sizeof(int));
    int i;
    for(i=0;i<n;i++){
        printf("enter the number:");
        scanf("%d",&ar[i]);
    }
    printf("you entered array [");
    for(i=0;i<n;i++){
        if(i!=n-1){
        printf("%d,",ar[i]);
    }
    else{
        printf("%d",ar[i]);
    }
}  
    printf("]\n");
    int j,k,key,c,al;
    for(j=0;j<n;j++){
        key=ar[j];
        c=0;
        al=0;
        for(k=0;k<j;k++){
            if(ar[k]==key){
            al+=1;
            break;
            }
        }
        if (al)
        continue;
        for(k=0;k<n;k++){
            if(ar[k]==key){
                c+=1;
            }
        }
        printf("the number %d is occurs %d times\n",key,c);
    }
    return 0;
}