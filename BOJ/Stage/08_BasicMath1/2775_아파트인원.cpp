#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int people[15][15];
    for(int j = 1 ; j<=14; j++) people[0][j] = j;
    for(int i = 1; i<=14; i++) people[i][1] = people[0][1];
    for(int i = 1; i<=14; i++)
        for(int j=2; j<=14;j++)
            people[i][j] = people[i-1][j] + people[i][j-1];
    

    int ans[n];
    for (int i = 0; i < n; i++)
    {
        int level, dist;
        scanf("%d%d", &level, &dist);
        ans[i] = people[level][dist];
    }

    for(int i = 0 ; i< n ; i++) printf("%d\n",ans[i]);

    return 0;
}