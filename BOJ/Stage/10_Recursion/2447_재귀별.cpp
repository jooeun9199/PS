#include <stdio.h>
#include <string.h>

#define ARR 2188
void star(int n, char arr[ARR][ARR]);

char arr[ARR][ARR];
int main()
{
    int n;
    scanf("%d", &n);
    star(n, arr);
    for (int i = 0; i<n;i++)
    {
        printf("%s\n", arr[i]);
    }

    return 0;
}


void star(int n, char arr[ARR][ARR])
{
    if (n == 1)
    {
        arr[0][0] = '*';
    }
    else
    {
        star(n / 3, arr);
        for (int i = 0; i < n / 3; i++)
        {
            char tmp[n / 3];
            strcpy(tmp, arr[i]);
            strcat(arr[i], tmp);
            strcat(arr[i], tmp);
            strcpy(arr[i + n / 3], arr[i]);
            strcpy(arr[i + 2 * n / 3], arr[i]);
        }
        for (int i = n / 3 ; i < 2 * n / 3; i++)
        {
            for (int j = n / 3 ; j < 2 * n / 3; j++)
                arr[i][j] = ' ';
        }
    }
}
