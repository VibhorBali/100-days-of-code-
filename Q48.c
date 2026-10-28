#include <stdio.h>
#include <string.h>

int longestSubstring(char str[])
{
    int n = strlen(str);
    int maximum = 0;
    for(int i = 0; i < n; i++)
    {
        int length = 0;
        for(int j = i; j < n; j++)
        {
            int repeated = 0;
            for(int k = i; k < j; k++)
            {
                if(str[k] == str[j])
                {
                    repeated = 1;
                    break;
                }
            }
            if(repeated == 1)
            {
                break;
            }
            length++;
            if(length > maximum)
            {
                maximum = length;
            }
        }
    }
    return maximum;
}
int main()
{
    char str[100];
    printf("Enter string: ");
    scanf("%s", str);
    printf("%d", longestSubstring(str));
    return 0;
}