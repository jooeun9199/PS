#include <iostream>
#define MAX 15
using namespace std;

int n,cnt=0;
int queen[MAX]= {0};

void dfs(int level){
    if(level == n) {
        cnt++;
        return;
    }

    for(int i = 0 ; i < n; i++){
        bool check = true;
        for(int j = 0 ; j < level; j++){
            if(queen[j]==i||level-j == abs(queen[j] - i)) {
                check = false;
                break;
            }
        }
        if(check){
            queen[level] = i;
            dfs(level+1);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    dfs(0);
    cout << cnt;
    return 0;
}