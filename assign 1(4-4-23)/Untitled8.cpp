#include <stdio.h>

int main()
{
    int num, sum = 0, digit;

    printf("Enter an integer: ");
    scanf("%d", &num);

    for(int i = num; i > 0; i /= 10)
    {
        digit = i % 10;
        sum += digit;
    }

    printf("The sum of the digits in the integer is: %d\n", sum);

    return 0;
}
