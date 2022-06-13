#include <iostream>
#include <vector>
using namespace std;
main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, m, i, x;

    cin >> n >> m;
    vector<int> num(n);
    for(i = 0; i < n; i++) cin >> num[i];

    long long l = 0, r = 1000000001, mid, sum = 0;
    while(l < r){
        mid = (l + r) / 2;
        sum = 0;
        for(i = 0; i < n; i++) sum += max(num[i] - mid,0LL);
        if(sum >= m)
            l = mid + 1;
        else
            r = mid;
    }
    cout << l-1;

}