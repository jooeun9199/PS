#include <stdio.h>

int main()
{
    char s[1000000];
    int frequency[26] = {
        0,
    };
    char c;
    scanf("%s", s);
    for (int i = 0; s[i] != '\0'; i++)
    {
        c = s[i];
        if (c >= 97)
            frequency[c - 'a']++;
        else
            frequency[c - 'A']++;
    }

    int max = 0, index;
    for (int i = 0; i < 26; i++)
    {
        if (frequency[i] > max)
        {
            max = frequency[i];
            index = i;
        }
        else if (frequency[i] == max)
            index = -1;
    }

    if (index == -1)
        printf("?");
    else
        printf("%c", index+'A');
    return 0;
}