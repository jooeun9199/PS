#include <iostream>
using namespace std;
main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int k, n, i;

    cin >> k >> n;
    int num[k];
    for(i = 0; i < k; i++) cin >> num[i];

    long long l = 1, r = 2147483648LL, mid, cnt = 0;
    while(l < r){
        mid = (l + r) / 2;
        cnt = 0;
        for(i = 0; i < k; i++) cnt += num[i] / mid;
        if(cnt >= n)
            l = mid + 1;
        else
            r = mid;
    }
    cout << l-1;

}