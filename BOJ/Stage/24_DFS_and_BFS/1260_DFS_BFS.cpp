#include <stdio.h>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

int n, m, s, x, y, i, j;
bool visited[1001] = {};
vector<int> graph[1001];
queue<int> q;

void DFS(int s){
    printf("%d ",s);
    visited[s] = 1;
    for(int i : graph[s])
        if(!visited[i])
            DFS(i);
}

void BFS(int s){
    bool visited[n + 1] = {};

    q.push(s);
    for(i=0;i<n&&q.size();){
        x = q.front();
        q.pop();
        if(!visited[x]) {
            printf("%d ",x);
            visited[x] = 1;
            i++;
        }
        for(auto j : graph[x])
            if(!visited[j])
                q.push(j);
    }
}

main(){
    scanf("%d%d%d",&n,&m,&s);
    while(m--){
        scanf("%d%d",&x,&y);
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    for(i=1;i<=n;i++)
        sort(graph[i].begin(),graph[i].end());
    
    DFS(s);
    printf("\n");
    BFS(s);
}