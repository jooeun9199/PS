#include <iostream>
#include <algorithm>


using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, pre =0, cur, x;
    cin >> n;
    int num[n] ={0};
    for(int i = 1 ; i <= n; i++){
        for(int j = 0 ; j < i ; j++){
            cin >> x;
            cur = num[j];
            num[j] = max(pre,cur)+x;
            pre = cur;
        }
    }
    cout << *max_element(num,num+n);
    return 0;
}