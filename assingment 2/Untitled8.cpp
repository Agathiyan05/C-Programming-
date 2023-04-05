#include <stdio.h>

int main() {
   int arr[100], freq[100];
   int n, i, j, count;

   printf("Enter the number of elements in array: ");
   scanf("%d", &n);

   // Input array elements
   printf("Enter array elements: ");
   for(i=0; i<n; i++) {
      scanf("%d", &arr[i]);
      freq[i] = -1;
   }

   // Count frequency of each element
   for(i=0; i<n; i++) {
      count = 1;
      for(j=i+1; j<n; j++) {
         if(arr[i] == arr[j]) {
            count++;
            freq[j] = 0;
         }
      }
      if(freq[i] != 0) {
         freq[i] = count;
      }
   }

   // Print frequency of each element
   printf("Frequency of all elements of array : \n");
   for(i=0; i<n; i++) {
      if(freq[i] != 0) {
         printf("%d occurs %d times\n", arr[i], freq[i]);
      }
   }

   return 0;
}

