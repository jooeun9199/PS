#include <stdio.h>
#include <vector>
#include <stack>
using namespace std;

bool isBipartite;

void DFS(int node, vector<vector<int>> &graph, int *region){
    stack <int> S;
    int reg;
    
    S.push(node);
    while(S.size()){
        node = S.top();
        reg = region[node];
        S.pop();
        for(int i:graph[node]){
            if(region[i]==0) {
                region[i] = 3-reg;
                S.push(i);
            }
            else if(region[i]==reg){
                isBipartite = 0;
                return;
            }
        }
    }
}

main(){
    int T,V,E,A,B,i;
    scanf("%d",&T);
    while(T--){
        scanf("%d%d",&V,&E);
        vector<vector<int>> graph(V);
        int region[V] ={};
        for(i=0;i<E;i++){
            scanf("%d%d",&A,&B);
            graph[A-1].push_back(B-1);
            graph[B-1].push_back(A-1);
        }
        
        isBipartite = 1;
        for(i=0;i<V&&isBipartite;i++) {
            if(!region[i]) {
                region[i]=1;
                DFS(i,graph,region);
            }
        }
        
        printf(isBipartite?"YES\n":"NO\n");
    }
}