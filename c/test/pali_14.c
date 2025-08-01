#include <stdio.h>
#include <string.h>
void pal(int n);
void pali(char a[]);
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    char a[50];
    printf("enter the name:");
    scanf("%s",a);
    pal(n);
    printf("\n");
    pali(a);
    return 0;
}
void pal(int n){
    int org=n,rev=0,rem;
    while(n!=0){
        rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }
    if(rev==org){
        printf("yes,it is palindrome");
    }
    else{
        printf("not a palindrome");
    }
}
void pali(char a[]){
    char rev[50];
    int len=0,i,j=0;
    while(a[len]!='\0'){
        len+=1;
    }
    for(i=len-1;i>=0;i--){
        rev[j]=a[i];
        j++;
    }
    rev[j]='\0';
    if(strcmp(a,rev)==0){
        printf("yes");
    }
    else{
        ("no");
    }
    
}