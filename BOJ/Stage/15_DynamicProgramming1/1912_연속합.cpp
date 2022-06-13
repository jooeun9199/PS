#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,x,m=-1000;
    cin >> n;
    int dp[n+1][2]={};
    for(int i = 1 ; i <= n; i++){
        cin >> x;
        dp[i][0] = x;
        dp[i][1] = max(dp[i-1][0],dp[i-1][1])+x;
        if(dp[i][0]>m)m=dp[i][0];
        if(dp[i][1]>m)m=dp[i][1];
    }
    cout << m;
    return 0;

}