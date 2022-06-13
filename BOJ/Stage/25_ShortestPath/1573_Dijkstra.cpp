#include <stdio.h>
#include <vector>
#include <queue>
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

void SEARCH(int start, vector<int> &weight, vector<vector<PAIR>> &edge){
    priority_queue<PAIR> Q;
    int cur_weight = 0, cur_node = start;

    weight[cur_node] = cur_weight;
    Q.emplace(cur_node,cur_weight);
    while(Q.size()){
        auto now = Q.top();
        Q.pop();
        for(auto next:edge[now.node]){
            int W = next.weight + now.weight;
            if(weight[next.node]==-1){
                weight[next.node] = W;
                Q.emplace(next.node, W);
            }
            else if(weight[next.node] > W){
                weight[next.node] = W;
                Q.emplace(next.node, W);
            }
        }        
    }
}

main(){
    int V,E,K,u,v,w,i,tmp;
    scanf("%d%d%d",&V,&E,&K);
    vector<vector<PAIR>> edge(V+1);
    vector<int> weight(V+1,-1);
    while(E--){
        scanf("%d%d%d",&u,&v,&w);
        edge[u].emplace_back(v,w);
    }
    SEARCH(K,weight,edge);
    for(i=1;i<=V;i++) {
        tmp = weight[i];
        if(tmp==-1) printf("INF\n");
        else printf("%d\n",tmp);
    }
}