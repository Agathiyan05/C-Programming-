#include <stdio.h>

int isPrime(int n);

int main() {
    int start, end, i, flag;

    printf("Enter two positive integers: ");
    scanf("%d %d", &start, &end);

    printf("Prime numbers between %d and %d are: ", start, end);

    for(i=start+1; i<end; i++) {
        // If i is a prime number, print it
        if(isPrime(i)) {
            printf("%d ", i);
        }
    }

    return 0;
}

int isPrime(int n) {
    int i, flag = 1;

    
    if(n == 1) {
        flag = 0;
    } else {
        for(i=2; i<=n/2; i++) {
            if(n%i == 0) {
                flag = 0;
                break;
            }
        }
    }

    if(flag == 1) {
        return 1;
    } else {
        return 0;
    }
}
