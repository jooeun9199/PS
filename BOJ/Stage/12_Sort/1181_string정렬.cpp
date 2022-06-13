#include <iostream>
#include <string>
#include <algorithm>
 
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    string a[n];

    for(int i=0;i<n;i++) cin>>a[i];
    
    sort(a,a+n,[](string a,string b){
    if(a.length()!=b.length()) return a.length()<b.length();
    return a<b;
    });
    
    string tmp;
    for(int i=0;i<n;i++){
        if(tmp==a[i])continue;
        cout<<a[i]<<'\n';
        tmp=a[i];
    }
    return 0;
}