/*//1- if 
#include <stdio.h>
int main(){
    int a,b;
    printf("enter the number:");
    scanf("%d",&a);
    if (a>0){
        printf("positive");
    }
    else if (a<0){
        printf("negative");
    }
    else{
        printf("none");
    }
        return 0;
}
*/
// 2- if else
/*#include <stdio.h>
int main(){
    int a;
    while(1){
    printf("enter the year:");
    if(scanf("%d",&a)!=1){
        printf("invalid.....");
        break;
    }
    if (a<0){
        printf("invalid.....");
        break;
    } 
    if((a%4==0 && a%100!=0) || (a%400==0)){
        printf("it is leap year \n");
    }
    else{
        printf("not a leap year \n");
        }
    }
    return 0;
}*/
// 3- else if -n
/*#include <stdio.h>
int main(){
    char name[50],reg[50];
    int e,t,m,sc,ss,to;
    float avg;
    printf("enter the name:");
    scanf("%s",name);
    printf("enter the register number:");
    scanf("%s",reg);
    printf("enter the english mark:");
    scanf("%d",&e);
    printf("enter the tamil mark:");
    scanf("%d",&t);
    printf("enter the maths mark:");
    scanf("%d",&m);
    printf("enter the science mark:");
    scanf("%d",&sc);
    printf("enter the social mark:");
    scanf("%d",&ss);
    to=e+t+m+sc+ss;
    avg=to/5.0;
    printf("-------report card-------\n");
    printf("name         : %s\n",name);
    printf("reg_no       : %s\n",reg);
    printf("total marks  :%d\n",to);
    printf("average is   :%.2f\n",avg);
    if(avg>=85 && (e>=85 && t>=85 && m>=85 && sc>=85 && ss>=85)){
        printf("Grade       : A grade and excellent\n");
    }
    else if(avg>=85){
        printf("Grade       : A grade\n");
    }
    else if(70<=avg && avg<85 && 
            70<=e && e<85 &&
            70<=t && t<85 &&
            70<=m && m<85 &&
            70<=sc && sc<85 &&
            70<=ss && ss<85){
        printf("grade     : b grade very good\n");
    }
    else if (70<=avg && avg<85){
        printf("grade    : b grade");
    }
    else if(55<=avg && avg<70 && 
            55<=e && e<70 &&
            55<=t && t<70 &&
            55<=m && m<70 &&
            55<=sc && sc<70 &&
            55<=ss && ss<70){
        printf("grade   : c grade good\n");
    }
    else if(55<=avg && avg<70){
        printf("grade   : c grade\n");
    }
    else{
        printf("fail\n");
    }
    return 0;
}*/
//4- nested if - in array
/*#include <stdio.h>
int main(){
    int n,fine,a;
    printf("enter the number of days:");
    scanf("%d",&n);
    printf("enter the fine amount:");
    scanf("%d",&fine);
    if (n<=5){
        if (fine<=200){
            a=fine*n;
            printf("amount is :%d\n",a);
        }
    }
    if(n<=5){
        if(fine>200){
            a=(fine*n)*1.5;
            printf("amount is;%d",a);
        }
    }
    if (n>5){
        if (fine>200){
            a=(fine*n)*2;
            printf("amonut is :%d\n",a);
        }
    }
}*/
// 3-a --- eklse if with array
//switch case
#include <stdio.h>
int main(){
    int ch;
    printf("enter the choice:");
    scanf("%d",&ch);
    switch(ch){
        case 1:
        printf("you entered the number 1\n");
        break;
        case 2:
        printf("you entered the number 2\n");
        break;
        case 3:
        printf("you enter the number 3\n");
        break;
    }
    return 0;
}