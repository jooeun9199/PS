#include <stdio.h>

int main()
{
    int a, b, c, mul;

    scanf("%d %d %d", &a, &b, &c);

    mul = a * b * c;

    int n[10] = {0,};

    while (mul != 0)
    {
        n[mul % 10]++;
        mul /= 10;
    }

    for(int i = 0 ; i < 10; i++){
        printf("%d\n",n[i]);
    }
    return 0;
}