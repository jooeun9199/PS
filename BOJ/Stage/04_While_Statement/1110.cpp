#include <stdio.h>

int main()
{
    int n, cycle = 0, x;
    scanf("%d", &n);
    x = n;
    do
    {
        x = x % 10 * 10 + (x % 10 + x / 10) % 10;
        cycle++;
    } while (x != n);
    printf("%d",cycle);
    return 0;
}