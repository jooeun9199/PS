#include <stdio.h>
#include <stack>
#define L long long
using namespace std;
stack<pair<int, int>> s;
int n, i, cnt;
L ans, tmp, x;
main(){
    while(1){
        scanf("%d", &n);
        if(!n) break;
        ans = 0;
        for(i=0; i<=n; i++){
            i==n?x=0:scanf("%lld", &x);
            cnt=1;
            while(s.size()&&s.top().first>=x){
                tmp = (L)s.top().first*(L)(s.top().second+cnt-1);
                if(ans<tmp) ans = tmp;
                cnt+=s.top().second;
                s.pop();
            }
            s.push(make_pair(x, cnt));
        }
        printf("%lld\n", ans);
    }
}