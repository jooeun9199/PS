#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    char ans[n][80];

    for (int i = 0; i < n; i++)
    {
        int score = 0, point = 0;
        scanf("%s", ans[i]);
        for (int j = 0; ans[i][j] != '\0'; j++)
        {
            if (ans[i][j] == 'O')
            {
                point++;
            }
            else
            {
                point = 0;
            }
            score += point;
        }
        printf("%d\n", score);
    }

    return 0;
}