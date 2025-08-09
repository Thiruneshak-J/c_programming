#include <stdio.h>
#include <stdlib.h>
void rev(int *arr,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("enter the number:");
        scanf("%d",&arr[i]);
    }

    printf("you entered:[");
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

    printf("printing reverse of array is [");
    for(i=n-1;i>=0;i--)
    {
        if(i!=0)
        {
        printf("%d,",arr[i]);
        }
        else
        {
            printf("%d",arr[i]);
        }

    }
    printf("]\n");

    //logic
    int j,temp;
    for(j=0;j<n/2;j++)
    {
        temp=arr[j];
        arr[j]=arr[n-1-j];
        arr[n-1-j]=temp;

    }

    printf("storing reversed :[");
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

}
int main()
{
    int *arr,n;
    printf("enter the size of array:");
    scanf("%d",&n);
    arr=(int *)malloc(n*(sizeof(int)));
    rev(arr,n);
    free(arr);
    return 0;
}