#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,a,m = 0;
    cin >> n;
    pair<int, int> num[n];
    int dp[n]={};
    for(int i = 0 ;i < n; i++)
        cin >> num[i].first >> num[i].second;
    
    sort(num,num+n);
    for(int i = 0 ;i < n; i++){
        a=0;
        for(int j = i-1 ; j >= 0 ; j--)
            if(num[i].second>num[j].second)
                if(a<dp[j]) a = dp[j];
        dp[i]=a+1;
        if(m<dp[i]) m=dp[i];
    }
    cout << n - m;
    return 0;
}