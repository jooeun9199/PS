#include <stdio.h>
#include <algorithm>

int n,i,j,ind=0,type[313],cnt;
bool map[25][25]={};
void DFS(int x, int y){
    map[x][y]=0;
    cnt++;
    if(x>0&&map[x-1][y]) DFS(x-1,y);
    if(y>0&&map[x][y-1]) DFS(x,y-1);
    if(x+1<n&&map[x+1][y]) DFS(x+1,y);
    if(y+1<n&&map[x][y+1]) DFS(x,y+1);
}
main(){
    scanf("%d",&n);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%1d",&map[i][j]);
    
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            if(map[i][j]){
                cnt=0;
                DFS(i,j);
                type[ind++]=cnt;
            }

    std::sort(type,type+ind);
    printf("%d\n",ind);
    for(i=0;i<ind;i++) printf("%d\n",type[i]);
}