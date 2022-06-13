#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int n,m,i,j,x,y,step=-1,cnt=0,s;
vector<vector<int>> map;
queue<pair<int,int>> q;

void BFS(){
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            if(map[i][j]==1) q.emplace(i,j);

    while(q.size()){
        s = q.size(); 
        while(s--){
            x = q.front().first;
            y = q.front().second;
            q.pop();
            cnt++;
            if(x>0&&map[x-1][y]==0) {
                q.emplace(x-1,y);
                map[x-1][y] = 1;
            }
            if(y>0&&map[x][y-1]==0) {
                q.emplace(x,y-1);
                map[x][y-1] = 1;
            }
            if(x+1<n&&map[x+1][y]==0) {
                q.emplace(x+1,y);
                map[x+1][y] = 1;
            }
            if(y+1<m&&map[x][y+1]==0) {
                q.emplace(x,y+1);
                map[x][y+1] = 1;
            }
        }
        step++;
    }
}

main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> m >> n;
    for(i=0;i<n;i++){
        vector<int> v;
        for(j=0;j<m;j++)
            {
                cin >> x;
                v.push_back(x);
                if(x==-1) cnt++;
            }
        map.push_back(v);
    }
    BFS();
    cout << (cnt==m*n?step:-1);
}