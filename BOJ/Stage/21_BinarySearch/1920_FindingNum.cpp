#include <iostream>
#include <algorithm>
using namespace std;
main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, m, i, ind, l, r, x;
    cin>>n;
    int num[n];
    for(i=0; i<n; i++) cin>>num[i];
    sort(num, num+n);
    cin>>m;
    for(i=0; i<m; i++){
        cin >> x;
        l = 0;
        r = n-1;
        while(1){
            ind = (l+r)/2;
            if(l>r){
                printf("0\n");
                break;
            }
            else if(num[ind]==x) {
                printf("1\n");
                break;
            }
            else if(num[ind]>x){
                r=ind-1;
            }
            else if(num[ind]<x){
                l=ind+1;
            }
        }
    }
}