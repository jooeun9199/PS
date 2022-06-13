#include <iostream>
#include <set>
#include <tuple>
#define T tuple<int,int,int>
using namespace std;
main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int m,n,h,i,j;
    cin >> m >> n;
    int H[m][n];
    int ROUTE[m][n] ={};
    set<T,greater<T>> q;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cin >> H[i][j];
        }
    }
    
    q.emplace(H[0][0],0,0);
    ROUTE[0][0]=1;
    while(q.size()){
        auto t = q.begin();
        tie(h,i,j) = *t;
        q.erase(t);
        if(i>0 && h>H[i-1][j]){
            ROUTE[i-1][j]+=ROUTE[i][j];
            q.emplace(H[i-1][j],i-1,j);
        }
        if(j>0 && h>H[i][j-1]){
            ROUTE[i][j-1]+=ROUTE[i][j];
            q.emplace(H[i][j-1],i,j-1);
        }
        if(i<m-1 && h>H[i+1][j]){
            ROUTE[i+1][j]+=ROUTE[i][j];
            q.emplace(H[i+1][j],i+1,j);
        }
        if(j<n-1 && h>H[i][j+1]){
            ROUTE[i][j+1]+=ROUTE[i][j];
            q.emplace(H[i][j+1],i,j+1);
        }
    }
    cout << ROUTE[m-1][n-1];
}