#include <iostream>
#define n 9
using namespace std;

int board[n*n], index[n*n] = {0};
int cnt=0;
bool solved = false;

void dfs(int level){
    if(level == cnt) {
        solved = true;
        return;
    }
    if(solved) return;
    int ind = index[level];
    int x = ind/n;
    int y = ind%n;
    for(int i = 1 ; i <= n ; i++){
        bool check = true;
        for(int j = 0; j < n ; j++){
            if(board[x*n+j]==i) check = false;
            if(board[y+j*n]==i) check = false;
            if(board[3*(x/3)*9+3*(y/3)+9*(j/3)+j%3]==i) check = false;
            if(!check) break;
        }

        if(check){
            board[ind] = i; 
            dfs(level+1);
            if(solved) return;
            board[ind] = 0;
        }
    }

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for(int i = 0 ; i < n*n ; i++){
        cin >> board[i];
        if(board[i]==0) index[cnt++] = i;
    }
    dfs(0);
    for(int i = 0 ; i < n*n ; i++) {
        cout << board[i] << " ";
        if(i%n==n-1) cout << "\n";
    }
    return 0;
}