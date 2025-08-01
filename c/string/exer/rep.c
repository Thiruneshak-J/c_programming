/*#include <stdio.h>
#include <string.h>
int main(){
    char name[50],rep[50];
    //char *name2;
    int len,len1;
    printf("enter the name:");
    fgets(name,sizeof(name),stdin); //scanf("%s",name);
    //printf("enter the name2:");
    //scanf("%s",name2);
    //printf("you entered name2 %s",name2);
    name[strcspn(name,"\n")]='\0';
    len=strlen(name);
    printf("you entered %s\n",name);
    int i,j;
    for(i=0;i<len-1;i++){
        for(j=i+1;j<len;j++){
            if(name[i]==name[j]){
                rep[i]==name[j];
            }
        }
    }
    rep[strcspn(rep,"\n")]='\0';
    printf("repetation words are :");
    printf("%s",rep);
    return 0;
    
}*/
#include <stdio.h>
#include <string.h>
int main(){
    char n[50],rep[50];
    int i,j,len;
    printf("enter the name :");
    scanf("%s",n);
    len=strlen(n);
    int c=0,s=0;
    for(i=0;i<len-1;i++){
        for(j=i+1;j<len;j++){
            if(n[i]==n[j]){
                c+=1;
                rep[s]=n[j];
                s+=1;
                break;
    }
    }
}
rep[s]='\0';
    printf("there are %d repeated letters.\n",c);
    int k,h,len1,co;
    char temp;
    len1=strlen(rep);
    for(k=0;k<len1;k++){
        co=0;
        temp=rep[k];
        for(h=k;h<len1;h++){
            if(temp==rep[h]){
            co+=1;
        }
    }
        printf("the letter %c is repeated %d times\n",temp,co);
    }
        
    printf("repeating letters are %s\n",rep);
    return 0;
}
