#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int ans[n];
    for (int i = 0; i < n; i++)
    {
        int height, width, order;
        scanf("%d%d%d", &height, &width, &order);
        int dist = (order - 1) / height + 1;
        int floor = (order - 1) % height + 1;
        int room = floor * 100 + dist;
        ans[i] = room;
    }

    for(int i = 0 ; i< n ; i++) printf("%d\n",ans[i]);

    return 0;
}