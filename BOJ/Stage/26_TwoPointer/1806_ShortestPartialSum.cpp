#include <stdio.h>
main(){
    int N,S,i,j,sum=0;
    scanf("%d%d",&N,&S);
    int num[N],MIN=N+1;
    for(i=0;i<N;i++) scanf("%d",&num[i]);
    for(i=0,j=0;j<N;){
        if(sum<S) sum+=num[j++];
        else {
            if(MIN>j-i) MIN = j-i;
            sum-=num[i++];
        }
    }
    while(sum>=S){
        if(MIN>j-i) MIN = j-i;
        sum-=num[i++];
    }
    printf("%d",MIN==N+1?0:MIN);
}