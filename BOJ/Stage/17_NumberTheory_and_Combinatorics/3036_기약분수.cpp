#include <iostream>
using namespace std;
int gcd(int a, int b){
    return a%b ? gcd(b,a%b):b;
}
int main(){
    int n;
    cin >> n;
    int num[n];
    for(int i = 0; i < n; i++) cin >> num[i];
    for(int i = 1; i < n; i++) {
        int GCD = gcd(num[0],num[i]);
        cout << num[0]/GCD << "/" << num[i]/GCD << "\n";
    }
    return 0;
}