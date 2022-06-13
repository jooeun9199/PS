#include <stdio.h>
#include <queue>
using namespace std;

int n,m,i,j,x=1,y=1,cnt=0,s;
bool map[101][101];
queue<pair<int,int>> q;

void BFS(){
    q.emplace(1,1);
    map[1][1]=0;
    while(x!=n||y!=m){
        s = q.size(); 
        while(s--){
            x = q.front().first;
            y = q.front().second;
            if(x==n&&y==m) break;
            q.pop();
            if(x>1&&map[x-1][y]) {
                q.emplace(x-1,y);
                map[x-1][y] = 0;
            }
            if(y>1&&map[x][y-1]) {
                q.emplace(x,y-1);
                map[x][y-1] = 0;
            }
            if(x+1<=n&&map[x+1][y]) {
                q.emplace(x+1,y);
                map[x+1][y] = 0;
            }
            if(y+1<=m&&map[x][y+1]) {
                q.emplace(x,y+1);
                map[x][y+1] = 0;
            }
        }
        cnt++;
    }
}

main(){
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            scanf("%1d",&map[i+1][j+1]);
    BFS();
    printf("%d",cnt);
}