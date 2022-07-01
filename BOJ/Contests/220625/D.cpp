#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int N,M,K,i,j,x,y,step=-1,s,x_,y_;
vector<vector<int>> MAP;
queue<pair<int,int>> q;
vector<pair<int,int>> mannequin, directions = {{0,1},{0,-1},{1,0},{-1,0}};


int check(int x, int y){

    if(x>=0&&x<N&&y>=0&&y<M){
        if (MAP[x][y]==2) return 2;
        if (MAP[x][y]==0) return 0;
    }
    return -1;
}



void BFS(){
    

    while(q.size()){
        s = q.size(); 
        while(s--){
            x = q.front().first;
            y = q.front().second;
            q.pop();
            for(i=0;i<4;i++){
                x_ = x + directions[i].first;
                y_ = y + directions[i].second;
                if(check(x_,y_)==0) {
                    q.emplace(x_,y_);
                    MAP[x_][y_] = 1;
                }
                if(check(x_,y_)==2) {
                    printf("%d",step+1);
                    return;
                }
            }
        }
        step++;
    }
    step = -1;
}

main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M >> K;
    for(i=0;i<N;i++){
        vector<int> v;
        for(j=0;j<M;j++)
            {
                cin >> x;
                v.push_back(x);
                if(x==4) q.emplace(i,j);
                if(x==3) mannequin.push_back(pair<int,int>(i,j));
            }
        MAP.push_back(v);
    }
    BFS();
    cout << step;
}