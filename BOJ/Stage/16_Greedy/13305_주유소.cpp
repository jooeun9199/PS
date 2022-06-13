#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,x;
    cin >> n;
    int road[n-1], price=1000000001,index=0;
    long long sum=0;
    for(int i = 0; i < n-1; i++) cin >> road[i];
    for(int i = 0; i < n; i++) {
        cin >> x;
        if(price>x){
            for(int j = index; j < i; j++) sum+=(long long)road[j]*price;
            index = i;
            price = x;
        }
    }
    for(int j = index; j < n-1; j++) sum+= (long long) road[j]*price;
    cout << sum;
    return 0;
}