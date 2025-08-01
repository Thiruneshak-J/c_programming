#include <stdio.h>
int main(){
    int a[50][50],r,c;
    printf("enter the row of matrix:");
    scanf("%d",&r);
    printf("enter the column :");
    scanf("%d",&c);
    int i,j;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("enter the number:");
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("you entered:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    int temp=0,temp1=0,m_r=r/2,m_c=c/2;
    for(i=0;i<r;i++){
                temp+=a[i][m_r];
            }
    for(j=0;j<c;j++){
                temp1+=a[m_c][j];
            }
    printf("sum of middle column:%d\n",temp);
    printf("sum of middle row :%d\n",temp1);
    return 0;


}