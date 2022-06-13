#include <iostream>
#define MAX 1000000
using namespace std;
int num[MAX+1] ={0};
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, ret;
    cin >> n;
    for(int i = 2 ; i <= n ; i++){
        ret = num[i-1];
        if(i%3==0&&ret>num[i/3]) ret = num[i/3];
        if(i%2==0&&ret>num[i/2]) ret = num[i/2];
        num[i] = ret+1;
    }
    cout << num[n];
    return 0;
}