#include <stdio.h>

void descendingSort(int arr[], int n);

int main() {
    int n, i;
    printf("Enter the value of N: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the numbers: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    descendingSort(arr, n);
    printf("The numbers arranged in descending order are given below:\n");
    for (i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }
    return 0;
}

void descendingSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

