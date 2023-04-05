#include <stdio.h>

int minJumps(int arr[], int n) {
    if (n <= 1)
        return 0;

    if (arr[0] == 0)
        return -1;

    int maxReach = arr[0];
    int steps = arr[0];
    int jumps = 1;

    for (int i = 1; i < n; i++) {
        if (i == n - 1)
            return jumps;

        
        steps--;

        if (steps == 0) {
            jumps++;

            if (i >= maxReach)
                return -1;

            steps = maxReach - i;
        }
    }

    return -1;
}

int main() {
    int arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int minJumpsRequired = minJumps(arr, n);
    printf("Minimum number of jumps required: %d", minJumpsRequired);
    return 0;
}
