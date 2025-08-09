#include <stdio.h>
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    printf("swapped a=%d and b=%d",*a,*b);
}
int main()
{
    int a,b;
    printf("enter the number a and b(with space):");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    return 0;

}