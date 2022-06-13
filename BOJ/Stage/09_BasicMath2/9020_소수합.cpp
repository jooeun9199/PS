#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{

    int bound = 10000;
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


    int t;
    scanf("%d", &t);
    for(int i = 0; i<t; i++)
    {
        int n;
        scanf("%d", &n);

        for(int a =n/2 ; a>0; a--){
            int b = n - a;
            if(isPrime[a]&&isPrime[b]) {
                printf("%d %d\n", a,b);
                break;
            }
        }

    }

    return 0;
}