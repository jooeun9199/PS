#include <iostream>
#include <queue>
#include <tuple>
using namespace std;

int h,n,m,i,j,k,x,y,z,step=-1,cnt=0,s;
int ***map;
queue<tuple<int,int,int>> q;

void BFS(){
    for(k=0;k<h;k++)
        for(i=0;i<n;i++)
            for(j=0;j<m;j++)
                if(map[k][i][j]==1) q.emplace(k,i,j);

    while(q.size()){
        s = q.size(); 
        while(s--){
            tie(x,y,z) = q.front();
            q.pop();
            cnt++;
            if(x>0&&map[x-1][y][z]==0) {
                q.emplace(x-1,y,z);
                map[x-1][y][z] = 1;
            }
            if(y>0&&map[x][y-1][z]==0) {
                q.emplace(x,y-1,z);
                map[x][y-1][z] = 1;
            }
            if(z>0&&map[x][y][z-1]==0) {
                q.emplace(x,y,z-1);
                map[x][y][z-1] = 1;
            }
            if(x+1<h&&map[x+1][y][z]==0) {
                q.emplace(x+1,y,z);
                map[x+1][y][z] = 1;
            }
            if(y+1<n&&map[x][y+1][z]==0) {
                q.emplace(x,y+1,z);
                map[x][y+1][z] = 1;
            }
            if(z+1<m&&map[x][y][z+1]==0) {
                q.emplace(x,y,z+1);
                map[x][y][z+1] = 1;
            }
        }
        step++;
    }
}

main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> m >> n >> h;
    map = new int**[h];
    for(k=0;k<h;k++){
        map[k] = new int*[n];
        for(i=0;i<n;i++){
            map[k][i] = new int[m];
            for(j=0;j<m;j++){
                cin >> map[k][i][j];
                if(map[k][i][j]==-1) cnt++;
            }
        }
    }
    BFS();
    cout << (cnt==m*n*h?step:-1);
}