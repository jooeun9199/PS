#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int t,n,index;
string a,s;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while(t--){
        cin >> n;
        int cnt = 0;
        long long mult=1;
        pair<string,int> cloth[n]={};
        for(int i = 0; i < n; i++){
            cin >> s >> s;
            index = find_if(cloth,cloth+cnt,[](pair<string,int> e){
                return e.first == s; 
            }) - cloth;
            if(index>=cnt){
                cloth[index].first = s;
                cnt++;
            }
            cloth[index].second++;
        }
        for(int i = 0; i < cnt; i++) mult*=cloth[i].second+1;
        cout << mult-1 << "\n";
    }
}