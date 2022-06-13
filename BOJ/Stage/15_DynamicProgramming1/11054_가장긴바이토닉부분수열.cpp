#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,a,b;
    cin >> n;
    int num[n], dp[n][2]={};
    for(int i = 0 ; i < n ; i++){
        cin >> num[i];
        a=0,b=0;
        for(int j = i-1 ; j >= 0; j--){
            if(num[j]<num[i]&&dp[j][0]>a) a = dp[j][0];
            else if(num[j]>num[i]&&dp[j][1]>b) b = dp[j][1];
        }
        dp[i][0] = a+1;
        dp[i][1] = max(a,b)+1;
    }
    cout << *max_element((int*)dp,(int*)dp+2*n);
    return 0;
}