#include <stdio.h>
#include <string.h>
#include <math.h>


int main()
{
    int lower,upper;
    scanf("%d%d", &lower,&upper);

    bool isPrime[upper+1];
    memset(isPrime, true, sizeof(isPrime));
    isPrime[1] = false;
    for (int i = 2; i <= floor(sqrt(upper)); i++)
    {
        if(!isPrime[i]) continue;
        
        for (int j = i*i; j <= upper; j += i)
        {
            isPrime[j] = false;
        }
    }

    for(int i = lower; i<=upper; i++){
        if(isPrime[i])
            printf("%d\n",i);
    }

    return 0;

}