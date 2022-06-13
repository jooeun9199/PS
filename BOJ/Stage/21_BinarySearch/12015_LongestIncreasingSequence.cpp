#include <iostream>
#include <vector>
using namespace std;
main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,i,x,l,r,mid;
    vector<int> num;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> x;
        l = 0;
        r = num.size()-1;
        while(l<=r){
            mid = (l+r)/2;
            if(num[mid]>=x) r = mid-1;
            else l = mid+1;
        }
        if(l>=num.size()) num.push_back(x);
        else num[l] = x;
    }
    cout << num.size();
}