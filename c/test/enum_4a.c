#include <stdio.h>
int main(){
    enum day{mon,tue,wed,thu,fri,sat,sun};
    int i;
    for(i=mon;i<=sun;i++){
        printf("%d",i);
    }
}