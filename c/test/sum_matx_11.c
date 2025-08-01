#include <stdio.h>
int main(){
    int i,j,r,c,a[20][20];
    printf("enter the matix row:");
    scanf("%d",&r);
    printf("enter the matix column:");
    scanf("%d",&c);
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("enter the number:");
            scanf("%d",&a[i][j]);
        }
    }
    printf("you entered :\n");
    for(i=0;i<r;i++){
        int temp=0;
        for(j=0;j<c;j++){
            printf("%d ",a[i][j]);
            temp+=a[i][j];
        }
        printf(" %d",temp);
        printf("\n");
    }
    return 0;
}