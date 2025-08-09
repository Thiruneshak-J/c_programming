#include <stdio.h>
int main()
{
    int a[50][50],r,c;
    printf("enter the number of row:");
    scanf("%d",&r);
    printf("enter the number of column:");
    scanf("%d",&c);
    int i,j,co=0,sum=0;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("enter the number:");
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("you entered matrix :\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(a[i][j]==0)
            {
                printf("%d ",a[i][j]);
                co++;
                sum+=a[i][j];
            }
            else
            {
                printf("%d ",a[i][j]);
                sum+=a[i][j];
            }
        }
        printf("\n");
    }
    printf("in the matrix there is %d number of zeros\n",co);
    printf("sum of matrix are %d\n",sum);
    return 0;

}