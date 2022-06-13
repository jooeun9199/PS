#include <iostream>
#include <map>
using namespace std;

map<int, int> num;
map<int, int>::iterator it;
int n, i, x;

main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(i = 0; i < n; i++){
        cin >> x;
        it = num.find(x);
        if(it != num.end()) it->second++;
        else num[x] = 1;
    }
    cin >> n;
    for(i = 0; i < n; i++){
        cin >> x;
        it = num.find(x);
        cout << (it != num.end() ? it->second : 0) << " ";
    }
}