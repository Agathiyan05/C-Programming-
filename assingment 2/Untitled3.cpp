#include <stdio.h>

#define MAX_SIZE 100 // Maximum array size

int main()
{
    int arr[MAX_SIZE], size, i, j, temp;
    float avg, sum = 0;
    int second_largest, second_smallest;
    int found = 0;

    // Input array size
    printf("Enter array size: ");
    scanf("%d", &size);

    // Input array elements
    printf("Enter %d elements:\n", size);
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i]; // Calculate sum for finding average later
    }

    // Sort array in descending order
    for(i=0; i<size-1; i++)
    {
        for(j=i+1; j<size; j++)
        {
            if(arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Find second largest and second smallest elements
    second_largest = arr[1];
    second_smallest = arr[size-2];

    // Calculate average of second largest and second smallest elements
    avg = (second_largest + second_smallest) / 2.0;

    // Check if average is present in array
    for(i=0; i<size; i++)
    {
        if(arr[i] == avg)
        {
            found = 1;
            break;
        }
    }

    // Display results
    printf("Second largest element in array: %d\n", second_largest);
    printf("Second smallest element in array: %d\n", second_smallest);
    printf("Average of second largest and second smallest elements: %.2f\n", avg);
    if(found)
    {
        printf("Average element is present in the array.\n");
    }
    else
    {
        printf("Average element is not present in the array.\n");
    }

    return 0;
}

