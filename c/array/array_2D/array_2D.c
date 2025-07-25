#include <stdio.h>
int main(){
    int a[10][10],r,c,i,j;
    printf("enter the row :");
    scanf("%d",&r);
    printf("enter the column:");
    scanf("%d",&c);
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("enter the number:");
            scanf("%d",&a[i][j]);
        }
    }
    printf("enterd elements are :\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d\t",a[i][j]);
        }
    printf("\n");
    }
    return 0;

}