#include <stdio.h>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

class PAIR{
public:
    int node;
    int weight;

    PAIR(int node, int weight){
        this->node = node;
        this->weight = weight;
    }

    bool operator<(const PAIR &other) const{
        return weight > other.weight;
    }
};

void SEARCH(int start, int G, int H, vector<vector<int>> &weight, vector<vector<PAIR>> &edge){
    priority_queue<PAIR> Q;

    weight[0][start] = 0;
    Q.emplace(start,0);
    while(Q.size()){
        auto now = Q.top();
        Q.pop();
        for(auto next:edge[now.node]){
            int W = next.weight + now.weight;
            if(weight[0][next.node]==-1||weight[0][next.node] > W || (weight[0][next.node] == W&&weight[1][next.node] == -1)){
                if(weight[0][next.node]==W&&weight[1][now.node]==1) {
                    weight[1][next.node] = 1;
                }
                else weight[1][next.node] = weight[1][now.node];
                weight[0][next.node] = W;
                Q.emplace(next.node, W);
                if((now.node==G&&next.node==H)||(now.node==H&&next.node==G)) {
                    weight[1][next.node] = 1;
                }
            }
        }        
    }
}

main(){
    int T,V,E,t,S,G,H,u,v,w,i;
    scanf("%d",&T);
    while(T--){
        scanf("%d%d%d%d%d%d",&V,&E,&t,&S,&G,&H);
        vector<vector<PAIR>> edge(V+1);
        vector<vector<int>> weight(2,vector<int>(V+1,-1));
        int dest[t];
        while(E--){
            scanf("%d%d%d",&u,&v,&w);
            edge[u].emplace_back(v,w);
            edge[v].emplace_back(u,w);
        }
        for(i=0;i<t;i++){
            scanf("%d",&dest[i]);
        }
        SEARCH(S,G,H,weight,edge);
        sort(dest,dest+t);
        for(i=0;i<t;i++)
            if(weight[1][dest[i]]!=-1) printf("%d ",dest[i]);
        printf("\n");
    }
}