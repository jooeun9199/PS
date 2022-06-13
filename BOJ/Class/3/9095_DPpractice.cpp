#include <stdio.h>
main(){
    int t,n,dp[11] = {1,1,2};
    scanf("%d",&t);
    for(int i=3; i<11; i++) dp[i] = dp[i-1]+dp[i-2]+dp[i-3];
    while(t--){
        scanf("%d",&n);
        printf("%d\n",dp[n]);
    }
}