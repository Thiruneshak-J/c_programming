#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *arr,n;
    printf("enter the size of array:");
    scanf("%d",&n);
    arr=(int *)malloc(n *(sizeof(int)));
    if (arr==NULL)
    {
        printf("memory is not allocated:");
        return 1;
    }
    int i;
    for(i=0;i<n;i++)
    {
        printf("enter the number:");
        scanf("%d",&arr[i]);
    }
    printf("you entered array is [");
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
    int j,k,key;
    for(j=1;j<n;j++)
    {
        key=arr[j];
        k=j-1;
        while(k>=0 && arr[k]>key)
        {
            arr[k+1]=arr[k];
            k--;
        }
        arr[k+1]=key;
    }
    printf("insertion sorted array is [");
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
    int sea,l=0,h=n-1,mid=0,f=0;
    printf("enter the search element:");
    scanf("%d",&sea);
    while(l<=h)
    {
        mid=(l+h)/2;
        if(arr[mid]==sea)
        {
            printf("your element(%d) is found in index %d",sea,mid);
            f=1;
            break;
        }
        else if(arr[mid]>sea)
        {
            h=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    if(!f)
    {
        printf("element not found");
    }
    free(arr);
    return 0;
}