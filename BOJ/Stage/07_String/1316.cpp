#include <stdio.h>
#define MAX_STR_SIZE 100

int main()
{
    int n;
    scanf("%d", &n);
    char str[n][MAX_STR_SIZE];
    for (int i = 0; i < n; i++)
    {
        scanf("%s", str[i]);
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int alpha[26] = {0};
        bool ans = true;
        for (int j = 0; str[i][j] != '\0'; j++)
        {
            char ch = str[i][j];
            if (alpha[ch - 'a'] == 0)
                alpha[ch - 'a']++;
            else if (ch == str[i][j - 1])
                continue;
            else{
                ans = false;
                break;
            }
        }
        if(ans == true) sum++;
    }
    printf("%d", sum);

        return 0;
}