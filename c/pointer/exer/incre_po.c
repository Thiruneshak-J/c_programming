#include <stdio.h>
/*int inc(int *a)
{
   int res;
   res=++(*a);
   return res;
}
int main()
{
    int a;
    printf("enter the number:");
    scanf("%d",&a);
    //printf("how many times want to increment:");
    //scanf("%d",&n);
    int (*incre)(int *)=inc;
    int res=incre(&a);
    printf("answer is %d",res);
    return 0;
}*/

void inc(int *a,int n)
{
    int i;
    for(i=0;i<n;i++){
        ++(*a);
    }
    printf("the answer is %d",*a);
}
int main()
{
    int a,n;
    printf("enter the a value:");
    scanf("%d",&a);
    printf("how many times do you want to increment:");
    scanf("%d",&n);
    inc(&a,n);
    return 0;
}