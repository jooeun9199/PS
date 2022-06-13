#include <iostream>
using namespace std;
int t,n,m,c[30][30];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    for(int i = 0; i < 30; i++){
        for(int j = 1; j < i; j++){
            c[i][j] = c[i-1][j-1] + c[i-1][j];
        }
        c[i][0] = 1;
        c[i][i] = 1;
    }
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> n >> m;
        cout << c[m][n] << "\n";
    }
    return 0;
}