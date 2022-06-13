#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, cnt=0, tmp =0;
    cin >> n;
    pair<int,int> time[n];
    for(int i = 0; i < n; i++) cin >> time[i].first >> time[i].second;
    sort(time,time+n,[](pair<int,int>a,pair<int,int>b){
        if(a.second==b.second) return a.first < b.first;
        else return a.second < b.second;
    });
    for(int i = 0; i < n; i++) {
        if(time[i].first>=tmp) {
            tmp = time[i].second;
            cnt++;
        }
    }
    cout << cnt;

    return 0;
}