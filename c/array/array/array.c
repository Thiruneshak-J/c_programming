/*#include <stdio.h>
int main(){
    int i,n;
    printf("enter the size of array:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("enter the numbers:");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
    printf("%d ",a[i]);
    }
    return 0;

}*/
#include <stdio.h>
int main(){
    int a=10;
    int *p=&a;
    printf("%d\n",*p);
    return 0;
}

