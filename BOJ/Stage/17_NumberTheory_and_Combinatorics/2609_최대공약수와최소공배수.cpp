#include <iostream>
using namespace std;

int gcd(int a, int b){
    return a%b ? gcd(b,a%b):b;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a,b;
    cin >> a >> b;
    int x = gcd(a,b);
    cout<<x<<"\n"<<a*b/x;
    return 0;
}