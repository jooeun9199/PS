#include <iostream>
using namespace std;
main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,x,BIT=0;
    char s[7];
    cin >> n;

    while(n--){
        cin >> s;
        if(s[1]=='d'){
            cin >> x;
            BIT |= 1<<x;
        }
        else if(s[0]=='r'){
            cin >> x;
            BIT &= ~(1<<x);
        }
        else if(s[0]=='c'){
            cin >> x;
            cout << (BIT&(1<<x) ? 1:0) << "\n";
        }
        else if(s[0]=='t'){
            cin >> x;
            BIT ^= 1<<x;
        }
        else if(s[0]=='e') BIT = 0;
        else BIT = (1<<22)-1;
    }
}