#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    long long sum = 0;
    cin >> n;
    int num[n+1][10] = {{0},{0,1,1,1,1,1,1,1,1,1}};
    for(int i = 2 ; i<=n ; i++){
        num[i][0] = num[i-1][1];
        for(int j = 1 ; j <= 9 ; j++)
            num[i][j] = (num[i-1][j-1] + num[i-1][j+1])%1000000000;
        num[i][9] = num[i-1][8];
    }
    for(int i = 0 ; i<10 ; i++) sum+= num[n][i];
    cout << sum%1000000000;
    return 0;
}