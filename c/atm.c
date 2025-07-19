#include <stdio.h>
int am=50000;
int main(){
    int pass,ch,wd,dop;
    printf("----------------------Welcome To ICICI Bank---------------------------\n");
    while(1){
        printf("enter your password(four digit(####)):");
        scanf("%d",&pass);
        if(pass<=9999 && pass>=1000){
            printf("correct password\n");
            break;
        }
        else{
            printf("invalid password\n");
        }      
    }
    while(1){
        printf("enter the choice (1-withdrawn , 2- balance eniqury , 3- deposit , 4-exit):");
        scanf("%d",&ch);
        if(ch>4 ){
            printf("enter the correct option:\n");
        }
    switch(ch){
        case 1:
        printf("enter the amount to withdrawn:");
        scanf("%d",&wd);
        am-=wd;
        int v;
        printf("you want recepit:(1-yes , 2-no):");
        scanf("%d",&v);
        if(v==1){
            printf("collect your amount.............\n");
            printf("remaining balance amount is : %d\n",am);
            printf("Thank you, come again......\n");
            break;
        }
        else{
            printf("collect your amount..........\n");
            printf("Thankyou ,come again.......\n");
            break;
        }
        case 2:
        printf("your bank balance is : %d\n",am);
        printf("Thank you,come again\n");
        break;

        case 3:
        printf("enter the amount to deposit to your account:");
        scanf("%d",&dop);
        am+=dop;
        int w;
        printf("you want recepit:(1-yes , 2-no):");
        scanf("%d",&w);
        if(w==1){
            printf("your amount deposit is done sucessfully.............\n");
            printf("your account balance amount is : %d\n",am);
            printf("Thank you, come again......\n");
            break;
        }
        else{
            printf("your amount deposit is done sucessfully..........\n");
            printf("Thankyou ,come again.......\n");
            break;
        }
        case 4:
        printf("Thankyou ,come again.......\n");
        return 0;
    }
    }
}