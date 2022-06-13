#include <stdio.h>
main(){
    int n,m,i,j,x,MAX=10001;
    scanf("%d%d",&n,&m);
    int mem[n],dp[MAX]={};
    for(i=0;i<n;i++) scanf("%d",&mem[i]);
    for(i=0;i<n;i++) {
        scanf("%d",&x);
        for(j=MAX-1;j>=x;j--) if(dp[j]<dp[j-x] + mem[i]) dp[j] = dp[j-x] + mem[i];
    }
    for(i=0;i<=MAX;i++) {
        if(dp[i]>=m) {
            printf("%d",i);
            break;
        }
    }
}