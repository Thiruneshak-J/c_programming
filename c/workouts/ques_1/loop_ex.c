//for loop
/*#include <stdio.h>
int main(){
    int n,i;
    printf("enter the number to print series:");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        if(i==n){
        printf("%d .",i);
        }
        else{
            printf("%d,",i);
        }
    }
    return 0;
}*/
//while
/*#include <stdio.h>
int main(){
    int n,i;
    printf("enter the number to print series:");
    scanf("%d",&n);
    i=0;
    while(i<=n){
        if(i==n){
        printf("%d.",i);
        i++;
        }
        else{
            printf("%d,",i);
            i++;

        }
    }
    return 0;
}
*/
//do while
#include <stdio.h>
int main(){
    int n;
    printf("enter the size of array:");
    scanf("%d",&n);
    int i=0;
    do{
        printf("%d",i);
        i++;
    }
    while(i<=n);
    return 0;
}