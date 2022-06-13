#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, w, a, b, m=0;
    cin >> n >> w;
    int val[n+1][w+1] ={};
    for (int i = 1; i <= n; i++) {
        cin >> a >> b;
        for (int j = 1; j <= w; j++){
            val[i][j] = max(val[i][j-1],val[i-1][j]);
            if(j>=a)
                if(val[i][j]<val[i-1][j-a]+b)
                    val[i][j] = val[i-1][j-a]+b;
        }
    }
    cout << val[n][w];
    return 0;
}