#include <stdio.h>
void t_a(){
    auto int i=0;
    i++;
    printf("auto i = %d\n",i); 
}
void t_s(){
    static int j=0;
    j++;
    printf("static j =%d\n",j);

}
int main(){
    for(int i=0;i<=3;i++){
        t_a();
        t_s();
    }
    return 0;

}