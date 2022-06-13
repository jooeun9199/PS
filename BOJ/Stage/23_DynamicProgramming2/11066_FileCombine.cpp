#include <iostream>
#include <vector>
using namespace std;
main(){
    int T,N,i,j,k,n;
    cin >> T;
    while(T--){
        cin >> N;
        vector<int> pages(N,0);
        vector<int> sum(N,0);
        vector<vector<int>> cost(N,vector<int>(N,0));
        cin >> sum[0];
        for(i=1;i<N;i++){
            cin >> sum[i];
            sum[i] += sum[i-1];
        }
        for(n=1;n<N;n++){
            for(i=0,j=n;j<N;i++,j++){
                int MIN = INT32_MAX;
                for(k=i;k<j;k++){
                    int tmp = cost[i][k]+cost[k+1][j];
                    if(MIN>tmp) MIN = tmp;
                }
                cost[i][j] = MIN + sum[j] - (i?sum[i-1]:0);
            }
        }
        cout << cost[0][N-1] << "\n";
    }
}