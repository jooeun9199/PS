#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);

    char order[n];
    int x[n], y[n];
    memset(order, 1, sizeof(order));
    for (int i = 0; i < n; i++)
    {
        scanf("%d%d", &x[i], &y[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (x[i] < x[j] && y[i] < y[j])
                order[i]++;
        }
    }
    for (int i = 0; i<n;i++) printf("%d ",order[i]);

    return 0;
}