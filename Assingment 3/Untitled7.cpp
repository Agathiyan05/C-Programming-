#include <stdio.h>

int main() {
    char str[1000];
    int i, sum = 0;

    printf("Enter the string : ");
    fgets(str, 1000, stdin);

    for (i = 0; str[i] != '\0'; i++) {
        sum += (int)str[i];
    }

    printf("Sum of all characters : %d", sum);

    return 0;
}
