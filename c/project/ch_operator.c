#include <stdio.h>
static int g;
void sum(int n1,int n2){
    printf("enter the number 1:");
    scanf("%d",&n1);
    printf("enter the number n2:");
    scanf("%d",&n2);
    int c=n1+n2;
    g=c;
    printf("the addition of two numbers are %d\n",c);
}
void sub(int n1,int n2){
    printf("enter the number 1:");
    scanf("%d",&n1);
    printf("enter the number n2:");
    scanf("%d",&n2);
    int c=n1-n2;
    g=c;
    printf("the subraction of two numbers are %d\n",c);
}
void mul(int n1,int n2){
    printf("enter the number 1:");
    scanf("%d",&n1);
    printf("enter the number n2:");
    scanf("%d",&n2);
    int c=n1*n2;
    g=c;
    printf("the multiplication of two numbers are %d\n",c);
}
void div(float n1,float n2){
    printf("enter the number 1:");
    scanf("%d",&n1);
    printf("enter the number n2:");
    scanf("%d",&n2);
    float c=n1 / n2;
    g=c;
    printf("the division of two numbers are %.2f\n",c);
}
void powi(int n1,int n2){
    printf("enter the number 1:");
    scanf("%d",&n1);
    printf("enter the number n2:");
    scanf("%d",&n2);
    int r=1;
    for(int i=0;i<n2;i++){
        r*=n1;
    }
    g=r;
    printf("the expo of two numbers is : %d\n",r);
}
int main(){
    int n1,n2,ch,ch1,n3;
    while(1){
    printf("enter the choice:\n");
    printf("1-addition\n");
    printf("2-subraction\n");
    printf("3-multiplication\n");
    printf("4-divison\n");
    printf("5-expo(n1,n2)\n");
    printf("6-exit\n");
    scanf("%d",&ch);
    if(ch>6 || ch<0){
        printf("you entered wrongly , enter valid....");
    }
    printf("do want continue with previous:(1-continue )(2- clear or new)\n");
    scanf("%d",&ch1);
    if(ch1==1){
        printf("enter the number 3:");
        


    }
    else if (ch1==2){
    switch(ch){
        case 1:
        sum(n1,n2);
        break;
        case 2:
        sub(n1,n2);
        break;
        case 3:
        mul(n1,n2);
        break;
        case 4:
        div(n1,n2);
        break;
        case 5:
        powi(n1,n2);
        break;
        case 6:
        return 0;
    }
}
else{
    printf("end.....");
    break;
}
    }
}
