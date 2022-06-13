#include <iostream>
#include <queue>
using namespace std;

struct PAIR{
    int x;
    int y;
};
int n,m,i,j,MIN=-1,s,cnt,tmp;
bool map[1000][1000]={};
int dp[2][1000][1000]={};
PAIR dir[4]={{0,1},{0,-1},{1,0},{-1,0}};
queue<PAIR> q;

void BFS(int x, int y, int ord){
    cnt=1;
    q.push({x,y});
    dp[ord][x][y]=cnt;
    while(q.size()){
        s = q.size();
        cnt++;
        while(s--){
            for(i=0;i<4;i++){
                x = q.front().x + dir[i].x;
                y = q.front().y + dir[i].y;
                if(x>=0&&x<n&&y>=0&&y<m&&!dp[ord][x][y]){
                    if(!map[x][y]) q.push({x,y});
                    dp[ord][x][y] = cnt;
                }
            }
            q.pop();
        }
    }
}

main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    char c[m+1];
    for(i=0;i<n;i++){
        cin >> c;
        for(j=0;j<m;j++){
            map[i][j] = c[j] - '0';
        }
    }
    
    BFS(0,0,0);
    BFS(n-1,m-1,1);

    MIN = -1;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            tmp = dp[0][i][j] + dp[1][i][j] - 1;
            if(dp[0][i][j]!=0&&dp[1][i][j]!=0)
                if(MIN==-1||tmp<MIN) 
                    MIN = tmp;
        }
    }

    cout << MIN;
}