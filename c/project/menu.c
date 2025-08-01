#include <stdio.h>
int to_i=0;
int main(){
    int ch;
    while(1){
    printf("------------------------------------------------------------------------------------------------\n");
    printf("|\t \t \t enter the choice of dish given below \t\t\t\t\t|\n");
    printf("|\t \t \t \t 1 -> IDLY \t\t\t\t\t\t\t|\n");
    printf("|\t \t \t \t 2 -> DOSA \t\t\t\t\t\t\t|\n");
    printf("|\t \t \t \t 3 -> POROTTA \t\t\t\t\t\t\t|\n");
    printf("|\t \t \t \t 4 -> BRIRIYANI \t\t\t\t\t\t|\n");
    printf("|\t \t \t \t 5 -> TEA \t\t\t\t\t\t\t|\n");
    printf("|\t \t \t \t 6 -> COFFEE \t\t\t\t\t\t\t|\n");
    printf("|\t \t \t \t 0 -> exit \t\t\t\t\t\t\t|\n");
    printf("------------------------------------------------------------------------------------------------\n");
    printf("enter the choice:");
    scanf("%d",&ch);
    if(ch==0){
        printf("thank you.. exiting");
        break;
    }
        switch(ch){
            case 1:
            printf("you chosen IDLY...\n");
            printf("IDLY PRICE (per)= 10.00\n");
            int id=10,ho,cho,to;
            printf("how many IDLIES do you want ? ");
            scanf("%d",&ho);
            to=id*ho;
            to_i+=to;
            printf("getting ready..........................................................................\n");
            printf("have a nice breakfest\\dinner...\n");
            printf("do want to bill(1)? or Continue the Order(0) or any integer(to exit)?");
            scanf("%d",&cho);
            if(cho==1){
                printf("--------------------------------------------------------\n");
                printf("|                                                      |\n");
                printf("|              TOTAL AMOUNT : %d                      |\n",to_i);
                printf("|          thank you.. visit again                     |\n");
                printf("--------------------------------------------------------\n");
                return 0;
            }
            else if(cho>1){
                return 0;
            }
            else{
                continue;
            }
            case 2:
            printf("you choosen dosa\n");
            printf("DOSA PRICE (per)= 40.00\n");
            int dos=40,ho_1,cho_1,to_1;
            printf("how many DOSA do you want ?");
            scanf("%d",&ho_1);
            to_1=dos*ho_1;
            to_i+=to_1;
            printf("getting ready..........................................................................\n");
            printf("have a nice breakfest\\dinner...\n");
            printf("do want to bill(1)? or Continue the Order(0)? any integer(to exit)");
            scanf("%d",&cho_1);
            if(cho_1==1){
                printf("--------------------------------------------------------\n");
                printf("|                                                      |\n");
                printf("|              TOTAL AMOUNT : %d                      |\n",to_i);
                printf("|          thank you.. visit again                     |\n");
                printf("--------------------------------------------------------\n");
                return 0;
            }
            else if(cho_1>1){
                return 0;
            }
            else{
                continue;
            }
            case 3:
            printf("you choosen POROTTA\n");
            printf("POROTTA PRICE (per)= 20.00\n");
            int por=20,ho_2,cho_2,to_2;
            printf("how many POROTTA do you want ?");
            scanf("%d",&ho_2);
            to_2=por*ho_2;
            to_i+=to_2;
            printf("getting ready..........................................................................\n");
            printf("have a nice Lunch\\dinner...\n");
            printf("do want to bill(1)? or Continue the Order(0)? any integer(to exit)");
            scanf("%d",&cho_2);
            if(cho_2==1){
                printf("--------------------------------------------------------\n");
                printf("|                                                      |\n");
                printf("|              TOTAL AMOUNT : %d                      |\n",to_i);
                printf("|          thank you.. visit again                     |\n");
                printf("--------------------------------------------------------\n");
                return 0;
            }
            else if(cho_2>1){
                return 0;
            }
            else{
                continue;
            }
            case 4:
            printf("you choosen BRIYANI\n");
            printf("BRIYANI PRICE (per)= 150.00\n");
            int bri=150,ho_3,cho_3,to_3;
            printf("how many BRIRIYANI do you want ?");
            scanf("%d",&ho_3);
            to_3=bri*ho_3;
            to_i+=to_3;
            printf("getting ready..........................................................................\n");
            printf("have a nice Lunch...\n");
            printf("do want to bill(1)? or Continue the Order(0)? any integer(to exit)");
            scanf("%d",&cho_3);
            if(cho_3==1){
                printf("--------------------------------------------------------\n");
                printf("|                                                      |\n");
                printf("|              TOTAL AMOUNT : %d                      |\n",to_i);
                printf("|          thank you.. visit again                     |\n");
                printf("--------------------------------------------------------\n");
                return 0;
            }
            else if(cho_3>1){
                return 0;
            }
            else{
                continue;
            }
            case 5:
            printf("you choosen TEA\n");
            printf("TEA PRICE (per)= 15.00\n");
            int tea=15,ho_4,cho_4,to_4;
            printf("how many TEA do you want ?");
            scanf("%d",&ho_4);
            to_4=tea*ho_4;
            to_i+=to_4;
            printf("getting ready..........................................................................\n");
            printf("have a nice Drink...\n");
            printf("do want to bill(1)? or Continue the Order(0)? any integer(to exit)");
            scanf("%d",&cho_4);
            if(cho_4==1){
                printf("--------------------------------------------------------\n");
                printf("|                                                      |\n");
                printf("|              TOTAL AMOUNT : %d                      |\n",to_i);
                printf("|          thank you.. visit again                     |\n");
                printf("--------------------------------------------------------\n");
                return 0;
            }
            else if(cho_4>1){
                return 0;
            }
            else{
                continue;
            }
            case 6:
            printf("you choosen COFFEE\n");
            printf("COFFEE PRICE (per)= 20.00\n");
            int co=20,ho_5,cho_5,to_5;
            printf("how many COFFEE do you want ?");
            scanf("%d",&ho_5);
            to_5=co*ho_5;
            to_i+=to_5;
            printf("getting ready..........................................................................\n");
            printf("have a nice DRINK..\n");
            printf("do want to bill(1)? or Continue the Order(0)? any integer(to exit)");
            scanf("%d",&cho_5);
            if(cho_5==1){
                printf("--------------------------------------------------------\n");
                printf("|                                                      |\n");
                printf("|              TOTAL AMOUNT : %d                      |\n",to_i);
                printf("|          thank you.. visit again                     |\n");
                printf("--------------------------------------------------------\n");
                return 0;
            }
            else if(cho_5>1){
                return 0;
            }
            else{
                continue;
            }
        }
    }
}
    