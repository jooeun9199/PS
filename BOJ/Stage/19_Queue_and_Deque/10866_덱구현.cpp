#include <iostream>
#include <string>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    string s;
    cin >> n;
    int d[2*n],f=n,b=n;
    while(n--){
        cin >> s;
        if(s=="push_front") cin >> d[--f];
        else if(s=="push_back") cin >> d[b++];
        else if(s=="pop_front") cout << (b-f?d[f++]:-1) << "\n";
        else if(s=="pop_back") cout << (b-f?d[--b]:-1) << "\n";
        else if(s=="size") cout << b-f << "\n";
        else if(s=="empty") cout << (b-f?0:1) << "\n";
        else if(s=="front") cout << (b-f?d[f]:-1) << "\n";
        else if(s=="back") cout << (b-f?d[b-1]:-1) << "\n";
    }
}