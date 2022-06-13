#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,a=1000001,b=1,x;
    cin >> n;
    while(n--) {
        cin >> x;
        if(x<a) a = x;
        if(x>b) b = x;
    }
    cout << a*b;
    return 0;
}