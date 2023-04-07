#include <stdio.h>

int main() {
    int arr1[10], arr2[10], i;
    int *ptr1 = arr1, *ptr2 = arr2;

    printf("Input array1 elements: ");
    for(i=0; i<10; i++) {
        scanf("%d", ptr1);
        ptr1++;
    }

    ptr1 = arr1; // resetting pointer to start of array

    for(i=0; i<10; i++) {
        *ptr2 = *ptr1;
        ptr1++;
        ptr2++;
    }

    printf("Array1: ");
    ptr1 = arr1;
    for(i=0; i<10; i++) {
        printf("%d ", *ptr1);
        ptr1++;
    }

    printf("\nArray2: ");
    ptr2 = arr2;
    for(i=0; i<10; i++) {
        printf("%d ", *ptr2);
        ptr2++;
    }

    return 0;
}

