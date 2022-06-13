#include <iostream>
#include <string>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int index = 0;
    string a,b;
    cin >> a >> b;
    int n = a.length(), m = b.length();
    int dp[n+1][m+1] = {};
    for(int i = 1 ; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(a[i-1]==b[j-1]) dp[i][j] = dp[i-1][j-1]+1;
            else dp[i][j] = max(dp[i][j-1],dp[i-1][j]);
        }
    }
    cout << dp[n][m];
    return 0;
}