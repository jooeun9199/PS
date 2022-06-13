#include <stdio.h>
main(){
    int N,i,j,sum=0,cnt=0;
    scanf("%d",&N);
    bool notPrime[N+1] = {1,1,};
    for(i=2;i*i<=N;i++){
        if(!notPrime[i])
            for(j=i*i;j<=N;j+=i)
                notPrime[j] = 1;
    }

    for(i=2,j=2;j<=N;){
        if(sum<=N){
            if(!notPrime[j]) {
                if(sum==N) cnt++;
                sum+=j;
            }
            j++;
        }
        else if(sum>N){
            if(!notPrime[i]) sum-=i;
            i++;
        }
    }
    while(sum>N){
        if(!notPrime[i]) sum-=i;
        i++;
    }
    if(sum==N) cnt++;
    printf("%d",cnt);

}