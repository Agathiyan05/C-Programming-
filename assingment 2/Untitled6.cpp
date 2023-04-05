#include <stdio.h>

#define MAX_SIZE 100

int main()
{
    int arr[MAX_SIZE], even[MAX_SIZE], odd[MAX_SIZE];
    int i, j = 0, k = 0, size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter %d elements in the array:\n", size);
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i=0; i<size; i++)
    {
        if(arr[i]%2 == 0)
        {
            even[j] = arr[i];
            j++;
        }
        else
        {
            odd[k] = arr[i];
            k++;
        }
    }

    printf("\nEven elements in the array are: ");
    for(i=0; i<j; i++)
    {
        printf("%d ", even[i]);
    }

    printf("\nOdd elements in the array are: ");
    for(i=0; i<k; i++)
    {
        printf("%d ", odd[i]);
    }

    return 0;
}
