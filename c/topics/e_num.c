#include <stdio.h>
int main(){
    enum days{sun,mon,tue,wed,thu,fri,sat}; // also can give globally (above main function      )
    int i;
    for(i=sun;i<=sat;i++){
        printf("%d",i);
    }
    return 0;
}
/*
#include <stdio.h>

enum days {sun, mon, tue, wed, thu, fri, sat};

int main() {
    const char* day_names[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    
    int i;
    for(i = sun; i <= sat; i++) {
        printf("%s\n", day_names[i]);
    }

    return 0;
}
*/