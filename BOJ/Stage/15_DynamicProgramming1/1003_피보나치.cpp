#include <iostream>
#define MAX 41
using namespace std;

pair<int,int> cnt[MAX] = {{1,0},{0,1}};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;

    for(int i = 2 ; i < MAX ; i++) {
        cnt[i].first = cnt[i-1].first + cnt[i-2].first;
        cnt[i].second = cnt[i-1].second + cnt[i-2].second;
    }

    for(int i = 0 ; i < n ; i++){
        int x;
        cin >> x;
        cout << cnt[x].first << " " << cnt[x].second << "\n";
    }
    
    return 0;
}