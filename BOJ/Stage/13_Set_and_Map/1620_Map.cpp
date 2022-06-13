#include <iostream>
#include <map>
using namespace std;
main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    map <int,string> m1;
    map <string,int> m2;

    int n,m,i;
    string s;
    cin >> n >> m;

    for(i=1;i<=n;i++){
        cin >> s;
        m1[i]=s;
        m2[s]=i;
    }
    while(m--){
        cin >> s;
        if(s[0]>='0'&&s[0]<='9') cout << m1[stoi(s)] << "\n";
        else cout << m2[s] << "\n";
    }
}