#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *arr,n,i;
    printf("enter the size of array:");
    scanf("%d",&n);
    arr=(int *)malloc(n*(sizeof(int)));
    if(arr==NULL)
    {
        printf("memory is not allocation \n");
        return 1;
    }
    int *pt=arr;
    for(i=0;i<n;i++)
    {
        printf("enter the number:");
        scanf("%d",&pt[i]);
    }
    printf("you entered:");
    for(i=0;i<n;i++)
    {
        printf("%d\n",pt[i]);
    }
    free(arr);
    return 0;
}