#include <iostream>
#include <algorithm>
#include <math.h>
#include <set>
#define p pair<int,int>
using namespace std;

int sqr(const int& a){
    return a*a;
}

int dist(const p& a, const p& b){
    return sqr(a.first-b.first)+sqr(a.second-b.second);
}

main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, ind=0, i, tmp, l, u, d;
    cin>>n;
    p coor[n],now;
    for(i=0; i<n; i++) cin>>coor[i].second>>coor[i].first;
    sort(coor, coor+n,[](const p &a, const p &b){
        if(a.second==b.second) return a.first<b.first;
        return a.second<b.second;
    });
    set<p> s = {coor[0],coor[1]};
    int ans = dist(coor[0],coor[1]);
    for(i=2; i<n; i++){
        tmp=(int)sqrt((double)ans);
        now = coor[i];
        l=now.second-tmp;
        u=now.first+tmp;
        d=now.first-tmp;
        while(ind<i&&coor[ind].second<=l-tmp) s.erase(coor[ind++]);

        for(auto j=s.lower_bound(p(d,l)); j!=s.upper_bound(p(u,now.second)); j++){
            tmp=dist(now, *j);
            if(ans>tmp) ans=tmp;
        }
        s.insert(now);
    }
    cout<<ans;
}