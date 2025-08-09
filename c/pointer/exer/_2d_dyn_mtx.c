#include <stdio.h>
int main(){
    int a[20][20],r,c;
    printf("enter the row:");
    scanf("%d",&r);
    printf("enter the column:");
    scanf("%d",&c);

    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("enter the number :");
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("you enterd:\n");
    i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }

}