#include <stdio.h>

int main()
{
    int amount, notes;

    printf("Enter the amount: ");
    scanf("%d", &amount);

    printf("Denominations: \n");

    notes = amount / 500;
    if(notes > 0)
    {
        printf("Rs. 500 x %d\n", notes);
        amount -= notes * 500;
    }

    notes = amount / 100;
    if(notes > 0)
    {
        printf("Rs. 100 x %d\n", notes);
        amount -= notes * 100;
    }

    notes = amount / 50;
    if(notes > 0)
    {
        printf("Rs. 50 x %d\n", notes);
        amount -= notes * 50;
    }

    notes = amount / 20;
    if(notes > 0)
    {
        printf("Rs. 20 x %d\n", notes);
        amount -= notes * 20;
    }

    notes = amount / 10;
    if(notes > 0)
    {
        printf("Rs. 10 x %d\n", notes);
        amount -= notes * 10;
    }

    notes = amount / 5;
    if(notes > 0)
    {
        printf("Rs. 5 x %d\n", notes);
        amount -= notes * 5;
    }

    notes = amount / 2;
    if(notes > 0)
    {
        printf("Rs. 2 x %d\n", notes);
        amount -= notes * 2;
    }

    notes = amount / 1;
    if(notes > 0)
    {
        printf("Rs. 1 x %d\n", notes);
        amount -= notes * 1;
    }

    return 0;
}

