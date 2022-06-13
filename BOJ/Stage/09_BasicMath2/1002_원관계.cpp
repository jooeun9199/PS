#include <stdio.h>

int main()
{
    int n;
    int x1, y1, r1, x2, y2, r2;
    scanf("%d", &n);
    while (n--)
    {
        scanf("%d%d%d%d%d%d", &x1, &y1, &r1, &x2, &y2, &r2);
        int ret;
        int dist = (x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
        if(dist==0&&r1==r2) ret = -1;
        else if(dist<(r1-r2)*(r1-r2)||dist>(r1+r2)*(r1+r2)) ret = 0;
        else if(dist==(r1-r2)*(r1-r2)||dist==(r1+r2)*(r1+r2)) ret = 1;
        else ret = 2;

        printf("%d\n",ret);
    }

    return 0;
}