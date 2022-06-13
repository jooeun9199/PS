#include <iostream>
#include <string>
using namespace std;
int n,i,stack[10000]={},ind=0;
string s;
main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(i=0; i<n; i++){
        cin >> s;
        if(s=="push") cin >> stack[ind++];
        else if(s=="pop") cout << (ind?stack[--ind]:-1) << "\n";
        else if(s=="size") cout << ind << "\n";
        else if(s=="empty") cout << (ind?0:1) << "\n";
        else if(s=="top") cout << (ind?stack[ind-1]:-1) << "\n";
    }
}