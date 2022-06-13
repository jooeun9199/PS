#include <stdio.h>

int main()
{
    int n, sum;
    scanf("%d%d", &n, &sum);
    int card[n];
    for (int i = n; i--;)
    {
        scanf("%d", &card[i]);
    }

    int max = 0;
    for(int i = 0; i<n-2;i++){
        for(int j = i+1; j<n-1;j++){
            for(int k = j+1; k<n; k++){
                int tmp = card[i]+card[j]+card[k];
                if(tmp<=sum&&tmp>max) max = tmp;
            }
        }
    }

    printf("%d",max);

    return 0;
}