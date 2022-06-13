#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int prime[1001] = {1,1,0,};
    for (int i = 2; i <= 31; i++)
    {
        if (prime[i])
            continue;
        for (int j = i*2; j <= 1000; j += i)
        {
            prime[j]++;
        }
    }

    int cnt = 0;
    int input;
    for(int i =0 ; i<n; i++){
        scanf("%d",&input);
        if(prime[input] == 0) cnt++;
    }
    printf("%d\n",cnt);

}