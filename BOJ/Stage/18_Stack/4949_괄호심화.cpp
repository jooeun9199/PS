#include <iostream>
#include <string>
using namespace std;
string s,stack;
main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    while(1){
        getline(cin,s);
        if(s==".") break;
        int ind=0;
        stack = s;
        for(char c : s){
            if(ind<0) break;
            if(c=='('||c=='[') stack[ind++]=c;
            else if(c==')') stack[ind-1]=='('? ind--:stack[ind++]=c;
            else if(c==']') stack[ind-1]=='['? ind--:stack[ind++]=c;
        }
        cout << (ind?"no\n":"yes\n");
    }
}