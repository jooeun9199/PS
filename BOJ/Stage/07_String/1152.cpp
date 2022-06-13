#include <stdio.h>
#define MAX_STR_SIZE 1000000
int main()
{
    char s[MAX_STR_SIZE + 2];
    int cnt = 1;
    char c;

    fgets(s, MAX_STR_SIZE + 2, stdin);
    if (s[0] == ' ' && s[1] == '\n')
        cnt = 0;
    else
        for (int i = 1; s[i + 2] != '\0'; i++)
        {
            c = s[i];
            if (c == ' ')
                cnt++;
        }

    printf("%d", cnt);
    return 0;
}