#define MAX_SIZE 100

int main()
{
    char str[MAX_SIZE];
    int freq[256] = {0}, i, maxFreq = -1, len;
    char maxChar;

    printf("Enter a string");
    gets(str);

    len = strlen(str);

    for(i=0; i<len; i++)
    {
        freq[str[i]]++; 
    }

    for(i=0; i<len; i++)
    {
        if(maxFreq < freq[str[i]])
        {
            maxFreq = freq[str[i]];
            maxChar = str[i];
        }
    }

    printf("Max repeated character in the string = %c\n", maxChar);
    printf("It occurs %d times\n", maxFreq);

    return 0;
}
