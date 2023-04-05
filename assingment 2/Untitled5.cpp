#include <stdio.h>

int main()
{
    int arr[50], size, i, j, k;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array: ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size;)
        {
            if (arr[j] == arr[i])
            {
                for (k = j; k < size; k++)
                {
                    arr[k] = arr[k + 1];
                }
                size--;
            }
            else
            {
                j++;
            }
        }
    }

    printf("Resultant Array after removing duplicates: ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
