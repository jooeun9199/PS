#include <iostream>
#include <vector>
using namespace std;
main(){
    int N;
    vector<pair<int,int>> num(501);
    vector<vector<int>> cost(501,vector<int> (501));
    cin >> N;
    for(int i=1;i<=N;i++){
        cin >> num[i].first >> num[i].second;
    }

    for(int i=N;i>0;i--){
        for(int j=i+1;j<=N;j++){
            int MIN = INT32_MAX;
            for(int k=i;k<j;k++){
                int tmp = cost[i][k]+cost[k+1][j] + num[i].first*num[k].second*num[j].second;
                if(tmp<MIN) MIN = tmp;
            }
            cost[i][j] = MIN;
        }
    }

    cout << cost[1][N];

}