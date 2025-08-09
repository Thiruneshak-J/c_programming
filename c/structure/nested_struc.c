#include <stdio.h>
#include <string.h>
struct Address {
    int house_no;
    char street[50];
    char city[50];
};

struct Person {
    char name[50];
    int age;
    struct Address addr;
};

int main() {
    struct Person p;
    printf("enter the name:");
    scanf("%s",p.name);
    p.age = 21;
    p.addr.house_no = 123;
    printf("enter the street address:");
    scanf("%s",p.addr.street);
    strcpy(p.addr.city, "Coimbatore");
    printf("Name: %s\n", p.name);
    printf("Age: %d\n", p.age);
    printf("House No: %d\n", p.addr.house_no);
    printf("Street: %s\n", p.addr.street);
    printf("City: %s\n", p.addr.city);

    return 0;
}
