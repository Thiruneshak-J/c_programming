/*//auto
#include <stdio.h>
int main(){
    auto int a=9;
    printf("a = %d\n",a);
    return 0;
}*/
//register
/*#include <stdio.h>
int main(){
    register int a=9;
    printf("%d",a);
}*/
//static
/*#include <stdio.h>
void counter(){
    static int count = 0;
    count++;
    printf("Count = %d\n", count);
}
int main() {
    counter();  // Count = 1
    counter();  // Count = 2
    counter();  // Count = 3
    return 0;
}*/
//extern
/*#include <stdio.h>
int a=10;
int main(){
    printf("a =%d",a);

}*/
#include <stdio.h>
extern int a;
int a=9;
int main(){
    printf("a=%d",a);
}

