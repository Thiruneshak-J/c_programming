#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter the number of strings: ");
    scanf("%d", &n);
    char *str[n]; 
    getchar();
    printf("Enter %d strings:\n", n);
    for (int i = 0; i < n; i++) {
        str[i] = (char *)malloc(100 * sizeof(char));
        if (str[i] == NULL) {
            printf("Memory allocation failed\n");
            return 1;
        }
        printf("String %d: ", i + 1);
        fgets(str[i], 100, stdin);
    }

    printf("\nYou entered:\n");
    for (int i = 0; i < n; i++) {
        printf("%s", str[i]);
    }\
    for (int i = 0; i < n; i++) {
        free(str[i]);
    }
    return 0;
}
