#include <iostream>
#include <vector>
using namespace std;
main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,m,i,j,x,y;

    cin >> n;
    int num[n];
    vector<vector<bool>> dp(n,vector<bool>(n));
    for(i=0;i<n;i++) cin >> num[i];

    for(i=0;i<n;i++) {
        dp[i][i] = 1;
        for(j=1;i-j>=0&&i+j<n;j++){
            if(num[i-j]==num[i+j])dp[i-j][i+j] = 1;
            else break;
        }
        for(j=0;i-j>=0&&i+j+1<n;j++){
            if(num[i-j]==num[i+j+1])dp[i-j][i+j+1] = 1;
            else break;
        }
    }

    cin >> m;
    while(m--){
        cin >> x >> y;
        cout << dp[x-1][y-1] << "\n";
    }
}