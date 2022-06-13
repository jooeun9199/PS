#include <stdio.h>
#include <vector>
#define INF 5'000'000
using namespace std;
main(){
    int N,M,A,B,C,i,j;
    scanf("%d%d",&N,&M);
    vector<vector<pair<int,int>>> Edges(N+1);
    vector<long long> Time(N+1,INF);
    while(M--){
        scanf("%d%d%d",&A,&B,&C);
        Edges[A].emplace_back(B,C);
    }
    bool loop = 0;
    Time[1] = 0;
    for(i=1;i<=N;i++){
        for(j=1;j<=N;j++){
            for(auto &next:Edges[j]){
                long long t = 1LL*next.second + Time[j];
                if(Time[j] != INF && Time[next.first]>t) {
                    Time[next.first] = t;
                    if(i==N) loop = 1;
                }
            }
        }   
    }
    if(loop) printf("-1");
    else for(i=2;i<=N;i++) printf("%d\n",Time[i]==INF?-1:Time[i]);
}