#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,x;
    cin>>n;
    int grape[n+3][2]={0};
    for(int i = 3 ; i < n+3 ; i++){
        cin >> x;
        grape[i][0]=max({grape[i-3][1],grape[i-2][0],grape[i-2][1]})+x;
        grape[i][1]=grape[i-1][0]+x;
    }
    cout << max({grape[n][0],grape[n][1],grape[n+1][0],grape[n+1][1],grape[n+2][0],grape[n+2][1]});
    return 0;
}