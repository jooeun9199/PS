#include <iostream>
#include <memory.h>
using namespace std;

int dp[500][500], H[500][500];
int m,n,i,j;

int route(int x, int y){
    int &ret = dp[x][y];
    if(x==0&&y==0) return 1;
    if(ret!=-1) return ret;

    ret = 0;
    int h = H[x][y];
    if(x>0 && h<H[x-1][y]) ret+=route(x-1,y);
    if(y>0 && h<H[x][y-1]) ret+=route(x,y-1);
    if(x<m-1 && h<H[x+1][y]) ret+=route(x+1,y);
    if(y<n-1 && h<H[x][y+1]) ret+=route(x,y+1);
    return ret;
}

main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> m >> n;
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            cin >> H[i][j];
    
    memset(dp,-1,sizeof(dp));
    cout << route(m-1,n-1);
}