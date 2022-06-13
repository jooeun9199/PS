#include <iostream>
#include <set>
using namespace std;
main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,x,i;
    set<int> set;
    char s[7];
    cin >> n;

    while(n--){
        cin >> s;
        if(s[1]=='d'){
            cin >> x;
            set.insert(x);
        }
        else if(s[0]=='r'){
            cin >> x;
            set.erase(x);
        }
        else if(s[0]=='c'){
            cin >> x;
            cout << (set.find(x)!=set.end()?1:0) << "\n";
        }
        else if(s[0]=='t'){
            cin >> x;
            if(set.find(x)!=set.end()) set.erase(x);
            else set.insert(x);
        }
        else if(s[0]=='e') set.clear();
        else for(i=1;i<21;i++) set.insert(i);
    }
}