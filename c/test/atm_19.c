#include <stdio.h>
static int amo=50000;
int main(){
    printf("welcome to ICICI bank\n");
    int pass,ch;
    int ch1,w_d;
    int d_d,ch2;
    while(1){
    printf("enter the password:");
    scanf("%d",&pass);
    if(pass>9999 || pass<1000){
        printf("invalid password.... enter correct password\n");
    }
    else{
        printf("correct password\n");
        break;
    }
}
while(1){
    int ch;
    printf("enter the choice (1- withdrawn ,2-bank balance ,3-deposit,4-exit ):");
    scanf("%d",&ch);
    if(ch>4){
        printf("enter correct option:\n");
        continue;
    }
    switch(ch){
        case 1:
        printf("enter the amount to withdrawn:");
        scanf("%d",&w_d);
        amo-=w_d;
        printf("do you want your recipt(1-yes)(2-no):");
        scanf("%d",&ch1);
        if(ch1==1){
            printf("collect your amount.....................\n");
            printf("you withdrawn amount is        ---> %d\n",w_d);
            printf("balance amount in your account----> %d\n",amo);
            printf("thank you...visit again...");
            break;
        }
        if(ch1==2){
            printf("collect your amount.....................\n");
            printf("thank you...visit again...\n");
            break;
        }
        case 2:
        printf("balance amount in your account----> %d\n",amo);
        printf("thank you...visit again...\n");
        break;
        case 3:
        printf("enter the amount to deposit:");
        scanf("%d",&d_d);
        amo+=d_d;
        printf("do you want your recipt(1-yes)(2-no):");
        scanf("%d",&ch2);
        if(ch2==1){
            printf("your amount added sucessfully.....................\n");
            printf("you addded amount is        ---> %d\n",d_d);
            printf("balance amount in your account----> %d\n",amo);
            printf("thank you...visit again...\n");
            break;
        }
        if(ch2==2){
            printf("your amount added sucessfully.....................\n");
            printf("thank you...visit again...\n");
            break;
        }
        case 4:
        printf("thank you.....");
        return 0;
    }
}

}