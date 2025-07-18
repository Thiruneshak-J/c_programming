/*#include <stdio.h>
int main(){
    int n,s,len;
    printf("enter the size of array:");
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++){
        printf("enter the number:");
        scanf("%d",&a[i]);
    }
    printf("you entered numbers in array is ");
    for(i=0;i<n;i++){
        if (i==n-1){
            printf("%d \n",a[i]);
        }
        else{
        printf("%d ",a[i]);
        }
    }
    printf("enter the index to print:");
    scanf("%d",&s);
    len=sizeof(a)/sizeof(a[0]);
    if(s>=len){
        printf("you enterd maximum number");
    }
    else{
    printf("you asked index %d that is %d",s,a[s]);
    }
    return 0;
}*/
#include <stdio.h>
int main(){
    int n;
    printf("enter the size of array:");
    scanf("%d",&n);
    int a[n],i,s,len;
    for(i=0;i<n;i++){
        printf("enter the number %d = ",i);
        scanf("%d",&a[i]);
    }
    printf("you enterd numbers are : ");
    for(i=0;i<n;i++){
        if(i==n-1){
            printf("%d\n",a[i]);
        }
        printf("%d ",a[i]);
    }
    printf("enter the index to get a number:");
    scanf("%d",&s);
    len=sizeof(a)/sizeof(a[0]);
    if(s>=len){
        printf("you enter maximum number");
    }
    else{
        printf("you asked the index %d that is %d",s,a[s]);
    }
    return 0;
}
