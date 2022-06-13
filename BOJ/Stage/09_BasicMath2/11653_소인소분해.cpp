#include <stdio.h>
#include <string.h>
#include <math.h>


int main()
{
    int n;
    scanf("%d", &n);

    int bound = floor(sqrt(n));
    bool isPrime[bound+1];
    memset(isPrime, true, sizeof(isPrime));
    isPrime[1] = false;
    for (int i = 2; i <= bound; i++)
    {
        if(!isPrime[i]) continue;
        
        for (int j = i*i; j <= bound; j += i)
        {
            isPrime[j] = false;
        }
    }

    for(int i = 2; i<=bound; i++){
        if(isPrime[i])
            while(n%i == 0){
                printf("%d\n",i);
                n/=i;
            }
    }
    if(n!=1) printf("%d",n);


    return 0;

}