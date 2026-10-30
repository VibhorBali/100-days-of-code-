#include <stdio.h>
#include <string.h>

void checkAnagram(char s[], char t[])
{
    int count1[26] = {0};
    int count2[26] = {0};
    for(int i = 0; s[i] != '\0'; i++)
    {
        count1[s[i] - 'a']++;
    }
    for(int i = 0; t[i] != '\0'; i++)
    {
        count2[t[i] - 'a']++;
    }
    for(int i = 0; i < 26; i++)
    {
        if(count1[i] != count2[i])
        {
            printf("Not Anagram");
            return;
        }
    }
    printf("Anagram");
}
int main()
{
    char s[100];
    char t[100];
    printf("Enter first string: ");
    scanf("%s", s);
    printf("Enter second string: ");
    scanf("%s", t);
    checkAnagram(s, t);

    return 0;
}