#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *arr,n;
    printf("enter the size of array:");
    scanf("%d",&n);
    arr=(int *)malloc(n *(sizeof(int)));
    int i;
    for(i=0;i<n;i++)
    {
        printf("enter the number:");
        scanf("%d",&arr[i]);
    }
    printf("you enterd array is [");
    for(i=0;i<n;i++)
    {
        if(i!=n-1)
        {
            printf("%d,",arr[i]);
        }
        else
        {
            printf("%d",arr[i]);
        }
    }
    printf("]\n");
    printf("even numbers in array [");
    i=0;
    while(i<n)
    {
        if(arr[i]%2==0)
        {
            if(i!=n-1)
            {
            printf("%d,",arr[i]);
            }
            else
            {
                printf("%d",arr[i]);
            }
        }
        i++;
    }
    printf("]\n");
    free(arr);
    return 0;
}