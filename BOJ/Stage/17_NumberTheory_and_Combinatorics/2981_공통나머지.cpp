#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int gcd(int a, int b){
    return a%b ? gcd(b,a%b):b;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int num[n];
    for(int i = 0; i < n; i++) cin >> num[i];
    sort(num,num+n);
    int GCD = num[1]-num[0];
    for(int i = 2; i < n; i++) {
        GCD = gcd(GCD,num[i]-num[0]);
    }
    int cnt = 0, divisor[(int)sqrt(GCD)];
    for(int i = 2; i*i <= GCD; i++){
        if(GCD%i==0) {
            cout << i << "\n";
            if(i!=GCD/i)divisor[cnt++] = GCD/i;
        }
    }
    while(cnt--) cout << divisor[cnt] << "\n";
    cout << GCD << "\n";
    return 0;
}