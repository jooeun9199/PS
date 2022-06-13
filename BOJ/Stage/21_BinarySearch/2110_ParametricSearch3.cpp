#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,c,x,i=0;
    cin >> n >> c;
    vector<int> loc(n);
    for(;i<n;i++) cin >> loc[i];

    sort(loc.begin(),loc.end());

    int L=1,R=loc[n-1]-loc[0],M;
    while(L<=R){
        M = (L+R)/2;

        int a=loc[0], cnt=1;
        for(i=1;i<n;i++){
            if(a+M<=loc[i]) {
                a = loc[i];
                cnt++;
            }
        }

        if(cnt>=c) L = M+1;
        else R = M-1;
    }
    cout << R;

}