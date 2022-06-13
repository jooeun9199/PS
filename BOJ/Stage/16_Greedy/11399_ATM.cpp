#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,sum=0;
    cin >> n;
    int num[n];
    for(int i = 0; i < n; i++) cin >> num[i];
    sort(num,num+n);
    for(int i = 0; i < n; i++) sum+=num[i]*(n-i);
    cout << sum;
    return 0;
}