#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,a,b;
    cin >> n;
    int num[n], dp[n]={};
    for(int i = 0 ; i < n ; i++){
        cin >> num[i];
        a=0;
        for(int j = i-1 ; j >= 0; j--)
            if(num[j]<num[i]&&dp[j]>a) a = dp[j];
        dp[i] = a+1;
    }
    cout << *max_element(dp,dp+n);
    return 0;
}