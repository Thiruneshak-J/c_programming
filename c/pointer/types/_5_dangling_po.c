#include <stdio.h>
#include <stdlib.h>
int main() {
    int *p = (int*)malloc(sizeof(int));
    *p = 10;
    free(p);           // memory is free
    printf("%d", *p);  // Dangling pointer accessing free memory
    return 0;
}
