#include <stdio.h>
int main(){
    int n;
    printf("enter the size of array:");
    scanf("%d",&n);
    int a[n],i,ch,pos,temp,j;
    for(i=0;i<n;i++){
        printf("enter the number:");
        scanf("%d",&a[i]);
    }
    printf("array is [");
    for(i=0;i<n;i++){
        if(i!=n-1){
            printf("%d,",a[i]);
        }
        else{
            printf("%d",a[i]);
        }
    }
    printf("]\n");
    printf("how many position want to rotate:");
    scanf("%d",&pos);
    printf("enter the number to rotate:(1-left rotate, 2-right rotate)");
    scanf("%d",&ch);
    if(ch==1){
        for(j=0;j<pos;j++){
            temp=a[0];
            for(i=0;i<n-1;i++){
                a[i]=a[i+1];
            }
            a[n-1]=temp;
        }
    }
    else if(ch==2){
        for(j=0;j<pos;j++){
            temp=a[n-1];
            for(i=n-1;i>=0;i--){
                a[i]=a[i-1];
            }
            a[0]=temp;
        }
    }
    else{
        return 1;
    }
    printf("after rotation [");
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