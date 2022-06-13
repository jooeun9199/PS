#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    int ans = 0,num=0, sign = 1;
    for(char c:s){
        if(c!='+'&&c!='-'){
            num*=10;
            num+=c-'0';
        }
        else{
            ans += sign*num;
            num = 0;
            if(c=='-'&&sign==1) sign = -1;
        }
    }
    ans += sign*num;
    cout << ans;
    return 0;
}