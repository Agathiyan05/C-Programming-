#include <stdio.h>

int main() {
    int arr[5] = {12, 56, 34, 78, 100};
    int n = 5;
    int max = arr[0]; // initialize max to the first element of the array

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i]; // update max if a larger element is found
        }
    }

    printf("The largest element in the array is %d", max);
    return 0;
}

