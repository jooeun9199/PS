#include <iostream>
#define MAX 9
using namespace std;

int n,m;
int num[MAX] = {0};
bool visited[MAX] = {0};

void dfs(int level){
    if(level == m) {
        for(int i = 0 ; i < m ; i++) cout << num[i] << " ";
        cout << "\n";
        return;
    }

    for(int i = 1 ; i <= n ; i++){
        if(!visited[i]){
            num[level] = i;
            visited[i] = true;
            dfs(level+1);
            visited[i] = false;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;
    dfs(0);

    return 0;
}