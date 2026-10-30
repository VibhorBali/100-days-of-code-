#include <stdio.h>

void sentenceCase(char str[])
{
    if(str[0] >= 'a' && str[0] <= 'z')
    {
        str[0] = str[0] - 32;
    }

    for(int i = 1; str[i] != '\0'; i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
    }

    printf("%s", str);
}

int main()
{
    char str[100];

    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);

    sentenceCase(str);

    return 0;
}