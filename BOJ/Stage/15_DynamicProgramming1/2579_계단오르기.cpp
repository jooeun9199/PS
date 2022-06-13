#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, x;
    cin >> n;
    int stair[n+1][2] = {0};
    cin >> stair[1][0];
    for(int i = 2 ; i <= n; i++) {
        cin >> x;
        stair[i][0] = max(stair[i-2][0],stair[i-2][1])+x;
        stair[i][1] = stair[i-1][0]+x;
    }
    cout << max(stair[n][0],stair[n][1]);
    return 0;
}