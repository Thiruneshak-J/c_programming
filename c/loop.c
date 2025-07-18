//for loop
/*#include <stdio.h>
int main(){
    int i;
    //for(initilaization ; condition ; incre/decre){}
    for(i=0;i<=5;i++){
        printf("%d\n",i);
    }
    return 0;
}*/
//while loop
/*#include <stdio.h>
int main(){
    int i;
    i=0; // initailaization
    while(i<5){  // condition
        printf("%d\n",i);
        i++;  // incre/decre
    }
return 0;
}*/
//do-while
/*#include <stdio.h>
int main(){
    int i;
    i=0;
    do{
        printf("%d\n",i);
        i++;
    }
    while(i<9);
return 0;
}*/

// exer-1 (for loop)
/*#include <stdio.h>
int main(){
    int n,i;
    printf("enter the number to print even number between that:");
    scanf("%d",&n);
    for(i=2;i<=n;i+=2){
        printf("%d ",i);
    }
    return 0;
} */
// exer -2 (while loop)
/*#include <stdio.h>
int main(){
    int n,s,rem=0;
    printf("enter the number:");
    scanf("%d",&n);
    while(n!=0){
        s=n%10;
        rem+=s;
        n=n/10;
    }
    printf("sum of didgits is %d",rem);
    return 0;
}*/
// exer -3 (do while)
#include <stdio.h>
int main(){
    int n;
    do{
        printf("enter the number:");
        scanf("%d",&n);
        if(n<0 || n==0){
            printf("Invalid. Try again.\n");
        }
        else{
            printf("Thank you!");
    }
}
    while(n<=0);
    return 0;
}