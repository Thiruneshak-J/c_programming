#include <stdio.h>
#define pf printf //-----> to renane function printf is a function      ----> #define   new_name func_name
typedef int i;    //-----> to rename data type int,char,float is a type ----> #typedef  type_name new_name;
int main(){
    i a=10;
    pf("%d",a);
    pf("hello world");
    return 0;
}