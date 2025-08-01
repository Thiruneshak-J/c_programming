#include <stdio.h>
#include <string.h>
int main(){
    //declaration,writing
    /*printf("-------------------------------------------------------------------------------------\n");
    char str1[]="hello world";
    char str2[6]="hello";
    char str3[]={'h','e','l','l','o','\0'};
    printf("%s\n",str1);
    printf("%s\n",str2);
    printf("%s\n",str3);
    printf("%s thiru\n",str1);
    printf("-------------------------------------------------------------------------------------\n");
    //function
    //1- strlen(str)-->finding length
    printf("string manupulation(7)----------------------------------------------------------------------------------\n");
    char name1[100]="what are";
    char name2[100]="doing here?";
    int len1=strlen(name1); // starts from 1 not include '\0'
    int len2=strlen(name2); // starts from 1 not include '\0'
    printf("length of name1= %d\n",len1);
    printf("length of name1= %d\n",len2);
    printf("-------------------------------------------------------------------------------------\n");
    //2- strcpy()---->copying
    char name3[100];
    strcpy(name3,name2); //char *copy=strcpy(name3,name2);
    printf("copying string to name3:%s\n",name3);
    //2-a strncpy()---->n terms
    char name4[100];
    char n5[100];
    char *copy1=strncpy(name4,name1,4);
    name4[5]='\0';
    strncpy(n5,name1,4);
    n5[5]='\0';
    printf("after using (str(n)cpy first to n terms) : %s \n",copy1);
    printf("copying with array:%s\n",n5);
    printf("-------------------------------------------------------------------------------------\n");
    //3-strcat()---->adding string
    char *name5=strcat(name1,name2);
    printf("adding both :%s\n",name5);
    //3-a strncat
    char *name6=strncat(name1,name2,5);
    printf("after using str(n)cat= %s\n",name6);
    printf("-------------------------------------------------------------------------------------\n");
    //4-strcmp()----->comparing
    char n[]="thiru";
    char n1[]="thiru";
    if (strcmp(n,n1)==0){
        printf("both are equal\n");
    }
    //4a -strncmp()----->comparing n letters
    if (strncmp(n,n1,3)==0){
        printf("both are equal\n");
    }
    else{
        printf("not equal");
    }
    printf("-------------------------------------------------------------------------------------\n");*/
    printf("string serach(6)------------------------------------------------------------------------------------\n");
    //1->strchr(str,'p')----->to find 1st position apperence of letter
    char a[100]="apple";
    char *a1=strchr(a,'p');
    printf("the 'p' apperence(occurence or presene) at first in the letter: %d\n",a1-a);
    //2-->for last apperence str(r)chr(a,'p',4)
    char *a2=strrchr(a,'p');
    printf("the 'p' apperence(occurence or presene) at last in the letter: %d\n",(a2-a)+1);
    //3->find presence of the word starting index-> if hello world ans is (6)
    char b[100]="hello world";
    char *b1=strstr(b,"world");
    printf("the word starting at index %d\n",b1-b);
    //4-->find anything with starts with this "aeiou or anything" index str->string , p->pointer , brk-->break;
    char c[100]="thiruneshak";
    char *c1=strpbrk(c,"aeiou");
    printf("in your text , aeiou first present at %d this index\n",c1-c);
    //5--> strcspn(c,123);
    //6--> strspn(c,123);

    //string tokenize
    printf("-------------------------------------------------------------------------------------\n");
    char t[100]="thiru,neshak";
    char *t1=strchr(t,',');
    printf("the space occurs at %d\n",t1-t);

    //string style
    char string[50]="thiruneshak";
    printf("upper:%s\n",strupr(string));
    char string1[50]="THIRUNESHAK";
    printf("lower:%s\n",strlwr(string1));
    printf("reverse:%s\n",strrev(string));

}