#include <iostream>
#define MAX 9
using namespace std;

int n,m, num[MAX];

void dfs(int level, int pre){
    if(level == m){
        for(int i = 0 ; i < m ; i++) cout << num[i] << " ";
        cout << "\n";
    }
    else{
        for(int i = pre ; i <= n ; i++){
            num[level] = i;
            dfs(level+1,i);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> m;
    dfs(0,1);
    return 0;
}