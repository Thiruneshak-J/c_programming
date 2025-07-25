#include <stdio.h>
int main(){
    int n;
    printf("enter the size of array:");
    scanf("%d",&n);
    int a[n],i;
    float avg=0,sum=0;
    for(i=0;i<n;i++){
        printf("enter the number:");
        scanf("%d",&a[i]);
    }
    printf("you enter array is [");
    for(i=0;i<n;i++){
        if(i==n-1){
            printf("%d",a[i]);
        }
        else{
            printf("%d,",a[i]);
        }
    }
    printf("]\n");
    for(i=0;i<n;i++){
        sum+=a[i];
    }
    printf("sum of array is %.2f\n",sum);
    avg=sum/(sizeof(a)/sizeof(a[0]));
    printf("average of array is %.2f\n",avg);
    return 0;
}