#include <iostream>
#define MAX 9
using namespace std;

int n, m;
int num[MAX] = {0};

void dfs(int level,int pre){
    if(level==m){
        for(int i = 0 ; i < m ; i++) cout << num[i] << " ";
        cout << "\n";
    }
    else{
        for(int i = pre+1; i <= n; i++) {
            num[level] = i;
            dfs(level+1, i);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> m;
    dfs(0,0);
    return 0;
}