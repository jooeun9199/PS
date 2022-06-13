#include <iostream>
#define MAX 8
using namespace std;

int n,m;
int num[MAX];

void dfs(int level){
    if(level == m){
        for(int i = 0 ; i < m ; i++) cout << num[i] << " ";
        cout << "\n";
    }
    else{
        for(int i = 1 ; i <= n; i++){
            num[level] = i;
            dfs(level+1); 
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> m;
    dfs(0);
    return  0;
}