#include <stdio.h>

int main()
{
    int n, i, max1, max2;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements of the array: ");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    max1 = arr[0];  //initialize max1 to the first element
    max2 = arr[1];  //initialize max2 to the second element

    if(max2>max1){  //swap max1 and max2 if necessary
        max1 = arr[1];
        max2 = arr[0];
    }

    for(i=2;i<n;i++){
        if(arr[i]>max1){  //if arr[i] is greater than max1, update max1 and max2
            max2 = max1;
            max1 = arr[i];
        }
        else if(arr[i]>max2){  //if arr[i] is greater than max2, update max2
            max2 = arr[i];
        }
    }

    printf("The largest two numbers are: %d and %d\n", max1, max2);

    return 0;
}
