#include <stdio.h>
#include <queue>
using namespace std;

pair<int,int> dir[8] = {{1,2},{2,1},{-1,2},{-2,1},{1,-2},{2,-1},{-1,-2},{-2,-1}};

int BFS(int I, int A, int B, int C, int D){
    bool visited[I][I]={};
    queue<pair<int,int>> q;
    int cnt = 0, x, y, i, s;

    q.emplace(A,B);
    visited[A][B] = 1;
    while(q.size()&&!visited[C][D]){
        cnt++;
        s = q.size();
        while(s--){
            for(i=0;i<8;i++){
                x = q.front().first + dir[i].first;
                y = q.front().second + dir[i].second;
                if(x>=0&&x<I&&y>=0&&y<I&&!visited[x][y]) {
                    visited[x][y] = 1;
                    q.emplace(x,y);
                } 
            }
            q.pop();
        }
    }
    return cnt;
}

main(){
    int T,I,A,B,C,D;
    scanf("%d",&T);
    while(T--){
        scanf("%d%d%d%d%d",&I,&A,&B,&C,&D);
        printf("%d\n",BFS(I,A,B,C,D));
    }
}