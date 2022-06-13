#include <stdio.h>

int main()
{
    int x = 0, y = 0;
    for (int a, b, i = 3; i--; x ^= a, y ^= b)
        scanf("%d%d", &a, &b);
    printf("%d %d", x, y);
    return 0;
}