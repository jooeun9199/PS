#include <iostream>
#include <algorithm>

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    pair<int,int> num[n];
    for(int i = 0 ; i < n ; i++) {
        cin >> num[i].first;
        num[i].second = i;
    }

    sort(num,num+n);

    int order[n];
    int cnt = 0;
    for(int i = 0 ; i < n ; i++) {
        if(i==0);
        else if(num[i].first!=num[i-1].first) cnt++;
        order[num[i].second] = cnt;
    }

    for(int i = 0 ; i < n ; i++) cout << order[i] << " ";
    
    return 0;
}