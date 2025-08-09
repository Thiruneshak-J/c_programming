#include <stdio.h>
#include <stdlib.h>
void sum(int *arr,int n)
{
    int i,*pt=arr,total=0;
    for(i=0;i<n;i++)
    {
        printf("enter the number:");
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        total+=*(pt+i);
        
    }
    printf("sum of array is %d",total);
    
}
int main()
{
    int *arr,n;
    printf("enter the size of array:");
    scanf("%d",&n);
    arr=(int *)malloc(n*(sizeof(int)));
    sum(arr,n);
    free(arr);
    return 0;

}