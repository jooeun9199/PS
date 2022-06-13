#include <stdio.h>
#include <string.h>


int main()
{

    int lower,upper;
    scanf("%d%d", &lower, &upper);

    bool isPrime[10001];
    memset(isPrime, true, sizeof(isPrime));
    isPrime[1] = false;
    for (int i = 2; i <= 100; i++)
    {
        if(!isPrime[i]) continue;
        for (int j = i*i; j <= 10000; j += i)
        {
            isPrime[j] = false;
        }
    }

    int min = 0;
    int sum = 0;
    for(int i = lower ; i <= upper ; i++){
        if(isPrime[i]){
            if(sum == 0) min = i;
            sum += i;
        }
    }
    if(sum) printf("%d\n%d",sum,min);
    else printf("-1");

    return 0;

}