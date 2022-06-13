#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int cur, pre1=1, pre2=2;
    if(n==1) cur = 1;
    else if(n==2) cur = 2;
    else for(int i = 3; i<=n; i++) {
        cur = (pre1 + pre2)%15746;
        pre1 = pre2;
        pre2 = cur;
    }
    cout << cur;
    return 0;
}