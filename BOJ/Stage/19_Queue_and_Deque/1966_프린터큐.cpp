#include <iostream>
#include <queue>
using namespace std;
int t,n,m,i,x,val;
main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while(t--){
        cin >> n >> m;
        queue<int> q;
        int sum=0,cnt[10]={};
        for(i=0; i<n; i++){
            cin >> x;
            cnt[x]++;
            if(i==m) {
                val = x;
                x = -1;
            }
            q.push(x);
        }
        for(i=9; i>val; i--){
            while(cnt[i]){
                if(q.front()==i){
                    sum++;
                    cnt[i]--;
                }
                else q.push(q.front());
                q.pop();
            }
        }
        while(q.front()!=-1) {
            if(q.front()==i) sum++;
            else q.push(q.front());
            q.pop();
        }
        cout << sum+1 << "\n";
    }
}