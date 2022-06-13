#include <iostream>
#include <queue>
using namespace std;
main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,x,m;
    cin >> n;
    priority_queue<int> L;
    priority_queue<int,vector<int>,greater<int>> R;

    cin >> m;
    cout << m << "\n";
    while(--n){
        cin >> x;
        if(L.size()==R.size()){
            if(m<=x){
                R.push(x);
            }
            else{
                R.push(m);
                L.push(x);
                m = L.top();
                L.pop();
            }
        }
        else{
            if(m<x){
                L.push(m);
                R.push(x);
                m = R.top();
                R.pop();
            }
            else {
                L.push(x);
            }
        }
        cout << m << "\n";
    }
}