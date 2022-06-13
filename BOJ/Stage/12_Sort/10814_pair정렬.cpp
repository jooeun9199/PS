#include <iostream>
#include <algorithm>
#include <string>

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    pair<int,string> input[n];
    for(int i = 0 ; i < n ; i++)
        cin >> input[i].first >> input[i].second;
    stable_sort(input,input+n,[](pair<int,string> a, pair<int,string> b){
        return a.first<b.first;
    });
    for(int i = 0 ; i < n ; i++)
        cout << input[i].first << " " << input[i].second << "\n";

    return 0;
}