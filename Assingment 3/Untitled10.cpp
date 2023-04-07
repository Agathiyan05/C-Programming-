#include <stdio.h>
#include <string.h>

void reverse_string(char *);

int main()
{
    char str[100];

    printf("Enter any String :: ");
    gets(str);

    printf("The Reverse of the String [ %s ] is :: ", str);

    reverse_string(str);

    printf("%s\n", str);

    return 0;
}

void reverse_string(char *str)
{
    char *start, *end, temp;

    start = str;
    end = str + strlen(str) - 1;

    while (start < end)
{
        temp = *start;
        *start = *end;
        *end = temp;

        (start++);
getch();		
}
