#include <stdio.h>

int main()
{
    int num, reverse = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    for(int i = num; i > 0; i /= 10)
    {
        reverse = reverse * 10 + (i % 10);
    }

    printf("The reverse of the integer is: %d\n", reverse);

    return 0;
}

