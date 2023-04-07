
 

#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i*i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int num, i, flag = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("%d = ", num);
    for (i = 2; i <= num/2; i++) {
        if (isPrime(i)) {
            if (isPrime(num-i)) {
                printf("%d + %d\n", i, num-i);
                flag = 1;
            }
        }
    }
    if (flag == 0) {
        printf("No two prime numbers can add up to %d\n", num);
    }
    return 0;
}

