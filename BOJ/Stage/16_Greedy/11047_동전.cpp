#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,k,cnt=0;
    cin >> n >> k;
    int coin[n];
    for(int i = 0 ; i < n ; i++) cin >> coin[i];
    for(int i = n-1 ; i >= 0 ; i--){
        while(coin[i]<=k){
            cnt++;
            k-=coin[i];
        }
    }
    cout << cnt;
    return 0;
}