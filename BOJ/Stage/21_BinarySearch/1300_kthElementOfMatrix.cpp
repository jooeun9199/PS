#include <iostream>
using namespace std;
main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, k, i;
    cin >> n >> k;

    long long l = 1, r = 1LL * n * n, mid, cnt;
    while(l < r){
        mid = (l + r) / 2;
        cnt = 0;
        for(i = 1; i <= n; i++) cnt += min(mid / i, 1LL * n);
        if(k > cnt) l = mid + 1;
        else r = mid;
    }
    cout << r;

}