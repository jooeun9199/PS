#include <stdio.h>
#include <memory.h>

int t,m,n,k,i,j,cnt;
bool map[50][50];
void DFS(int x, int y){
    map[x][y]=0;
    if(x>0&&map[x-1][y]) DFS(x-1,y);
    if(y>0&&map[x][y-1]) DFS(x,y-1);
    if(x+1<m&&map[x+1][y]) DFS(x+1,y);
    if(y+1<n&&map[x][y+1]) DFS(x,y+1);
}
main(){
    scanf("%d",&t);
    while(t--){
        scanf("%d%d%d",&m,&n,&k);
        memset(map,0,sizeof(map));
        cnt=0;
        while(k--){
            scanf("%d%d",&i,&j);
            map[i][j]=1;
        }
        for(i=0;i<m;i++)
            for(j=0;j<n;j++)
                if(map[i][j]){
                    DFS(i,j);
                    cnt++;
                }
        printf("%d\n",cnt);
    }
}