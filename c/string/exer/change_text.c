/*#include <stdio.h>
#include <string.h>
int main(){
    char n[50];
    int len,i,j,index=0,k;
    printf("enter the name:");
    fgets(n,sizeof(n),stdin); //instead of scanf("%s",n);
    n[strcspn(n,"\n")]='\0';
    len=strlen(n);
    printf("you entered:");
    for(i=0;i<len;i++){
        printf("%c",n[i]);
        }
        printf("\n");
    char *space=strchr(n,' ');
    char s=*space;
    printf("modified:");
    for(i=0;i<len;i++){
        if(n[i]==s){
            index=i;
            for(j=i;j<len;j++){
                printf("%c",n[j]);
            }
            printf(" ");
    }
}
    for(k=0;k<index;k++){
            printf("%c",n[k]);
        }
    return 0;
}*/
/*#include <stdio.h>
#include <string.h>
int main(){
    char n[50];
    int len,i;
    printf("enter the name:");
    fgets(n,sizeof(n),stdin);
    n[strcspn(n,"\n")]='\0';
    len=strlen(n);
    printf("you entered :");
    for(i=0;i<len;i++){
        printf("%c",n[i]);
    }
    printf("\n");
    int j,k,index=0;;
    printf("modified:");
    char *space=strchr(n,' ');
    char s = *space;
    for(i=0;i<len;i++){
        if(n[i]==s){
            index=i;
            for(j=i;j<len;j++){
                printf("%c",n[j]);
            }
            printf(" ");
        }
    }
    for(k=0;k<index;k++){
        printf("%c",n[k]);
    }
    return 0;

}
    */
#include <stdio.h>
#include <string.h>
int main(){
    char n[50];
    int i,len;
    printf("enter the name:");
    fgets(n,sizeof(n),stdin);
    n[strcspn(n,"\n")]='\0';
    len=strlen(n);
    printf("you entered name:");
    for(i=0;i<len;i++){
        printf("%c",n[i]);
    }
    printf("\n");
    printf("modified:");
    char *s=strchr(n,' ');
    char sp=*s;
    int j,k,ind;
    for(i=0;i<len;i++){
        if(n[i]==sp){
            ind=i;
        for(j=i;j<len;j++){
            printf("%c",n[j]);
        }
        printf(" ");
    }
}
    for(k=0;k<ind;k++){
        printf("%c",n[k]);
}
return 0;

}

