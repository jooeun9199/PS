#include <iostream>
#include <stack>
#include <memory.h>
using namespace std;
int n,x,i,ans[1000000];
stack<pair<int,int>> s;

main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    memset(ans,-1,sizeof(ans));
    for(i=0; i<n; i++){
        cin >> x;
        while(!s.empty()&&x>s.top().first){
            ans[s.top().second] = x;
            s.pop();
        }
        s.push(make_pair(x,i));
    }
    for(i=0; i<n; i++) cout << ans[i] << " ";
}