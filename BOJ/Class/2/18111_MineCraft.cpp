#include <iostream>
using namespace std;
main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,m,b,i,x,l=256,r=0;
    cin>>n>>m>>b;
    int block[n*m]={};
    for(i=0;i<n*m;i++) {
        cin>>x;
        block[i] = x;
        if(x<l) l=x;
        if(x>r) r=x;
    }
    
    int h,MIN=(r-l)*2*n*m+1,block_cnt,diff,t;
    for(x=r;x>=l;x--){
        block_cnt=0;
        t=0;
        for(i=0;i<n*m;i++){
            diff = x-block[i];
            if(diff>0) t+=diff;
            else t+=-2*diff;
            block_cnt+=diff;
        }
        if(block_cnt>b) continue;
        if(MIN>t){
            MIN = t;
            h = x;
        }
    }
    cout << MIN<< " " <<h;
}