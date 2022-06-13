#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,a,b,c;
    cin >> n;
    int paint[n+1][3] = {0};
    for(int i = 1 ; i <= n; i++){
        cin >> a >> b >> c;
        paint[i][0] = min(paint[i-1][1],paint[i-1][2])+a;
        paint[i][1] = min(paint[i-1][0],paint[i-1][2])+b;
        paint[i][2] = min(paint[i-1][0],paint[i-1][1])+c;
    }
    cout << min({paint[n][0],paint[n][1],paint[n][2]});
    return 0;
}