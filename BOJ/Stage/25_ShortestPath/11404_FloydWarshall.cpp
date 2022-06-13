#include <iostream>
#include <vector>
#define INF 10'000'000
using namespace std;
main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N,M,A,B,C,i,j,k;
    cin >> N >> M;
    vector<vector<int>> Cost(N+1,vector<int>(N+1,INF));
    while(M--){
        cin >> A >> B >> C;
        if(Cost[A][B]>C) Cost[A][B] = C;
    }
    for(i=1;i<=N;i++){
        Cost[i][i] = 0;
    }
    for(k=1;k<=N;k++){
        for(i=1;i<=N;i++){
            for(j=1;j<=N;j++){
                if(Cost[i][j]>Cost[i][k]+Cost[k][j]) Cost[i][j] = Cost[i][k]+Cost[k][j];
            }
        }
    }
    for(i=1;i<=N;i++){
        for(j=1;j<=N;j++){
            if(Cost[i][j]==INF) cout << "0 ";
            else cout << Cost[i][j] << " ";
        }
        cout << "\n";
    }
}