#include <stdio.h>
#include <memory.h>

int n,m,x,y,cnt=0;
bool *visited;
bool **v;

void DFS(int s){
    visited[s] = 1;
    for(int i=1;i<=n;i++){
        if(v[s][i]&&!visited[i]){
            cnt++;
            DFS(i);
        }
    }
}

main(){
    scanf("%d%d",&n,&m);

    visited = new bool[n+1];
    v = new bool*[n+1];
    for(int i=0;i<n+1;i++){
        v[i] = new bool[n+1];
        memset(v[i],0,sizeof(bool)*(n+1));
    }
    memset(visited,0,sizeof(bool)*(n+1));
    
    while(m--){
        scanf("%d%d",&x,&y);
        v[x][y]=1;
        v[y][x]=1;
    }
    DFS(1);
    printf("%d",cnt);

    for(int i=0;i<n+1;i++)
        delete [] v[i];
    delete [] v;
    delete [] visited;
}