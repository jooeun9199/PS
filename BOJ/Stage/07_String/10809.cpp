#include <stdio.h>
#include <iostream>

int main()
{
    int index[26];
    std::fill_n(index,26,-1);
    char s[100];
    int x;
    scanf("%s", &s);

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (index[x = (int)(s[i] - 'a')] == -1)
            index[x] = i;
    }


    for (int i = 0; i < 26; i++)
    {
        printf("%d ", index[i]);
    }
    return 0;
}