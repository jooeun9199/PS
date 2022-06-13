#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{

    int bound = 123456 * 2;
    bool isPrime[bound + 1];
    memset(isPrime, true, sizeof(isPrime));
    isPrime[1] = false;
    for (int i = 2; i <= floor(sqrt(bound)); i++)
    {
        if (!isPrime[i])
            continue;

        for (int j = i * i; j <= bound; j += i)
        {
            isPrime[j] = false;
        }
    }


    while (1)
    {
        int n;
        scanf("%d", &n);
        if(n==0) break;

        int cnt = 0;
        for (int i = n+1; i <= n*2; i++)
        {
            if (isPrime[i])
                cnt++;
        }
        printf("%d\n", cnt);
    }

    return 0;
}