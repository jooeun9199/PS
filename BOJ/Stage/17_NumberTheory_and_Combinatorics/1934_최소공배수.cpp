#include <iostream>
using namespace std;

int gcd(int a, int b){
    return a%b ? gcd(b,a%b):b;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,a,b;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        cout << a*b/gcd(a,b) << "\n";
    }
    return 0;
}