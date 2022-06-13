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
            if(weight[next.node]==-1 || weight[next.node] > W){
                weight[next.node] = W;
                Q.emplace(next.node, W);
            }
        }        
    }
}

main(){
    int V,E,V1,V2,u,v,w,tmp;
    scanf("%d%d",&V,&E);
    vector<vector<PAIR>> edge(V+1);
    vector<int> weight1(V+1,-1);
    vector<int> weight2(V+1,-1);
    while(E--){
        scanf("%d%d%d",&u,&v,&w);
        edge[u].emplace_back(v,w);
        edge[v].emplace_back(u,w);
    }
    scanf("%d%d",&V1,&V2);

    SEARCH(V1,weight1,edge);
    SEARCH(V2,weight2,edge);
    int a = weight1[1];
    int b = weight2[V];
    int c = weight1[V];
    int d = weight2[1];
    int e = weight1[V2];
    if(a!=-1&&b!=-1&&c!=-1&&d!=-1&&e!=-1) printf("%d",min(a+b,c+d)+e);
    else if(a!=-1&&b!=-1&&e!=-1) printf("%d",a+b+e);
    else if(c!=-1&&d!=-1&&e!=-1) printf("%d",c+d+e);
    else printf("-1");
}