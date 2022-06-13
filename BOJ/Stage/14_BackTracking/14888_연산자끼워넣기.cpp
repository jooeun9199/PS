#include <iostream>
using namespace std;

int n, MIN, MAX;
int num[11];
int opcnt[4];
int op[10];

bool first = true;

void dfs(int level){
    if(level == n-1){
        int result = num[0];
        for(int i = 0 ; i < n-1 ; i++){
            switch (op[i]){
            case 0:
                result += num[i+1];
                break;
            case 1:
                result -= num[i+1];
                break;
            case 2:
                result *= num[i+1];
                break;
            case 3:
                result /= num[i+1];
                break;
            }
        }
        if(first){
            MIN = result;
            MAX = result;
            first = false;
            return;
        }
        else{
            if(MIN>result) MIN = result;
            if(MAX<result) MAX = result;
            return;
        }
    }
    for(int i = 0  ; i < 4 ; i++){
        if(opcnt[i]){
            op[level] = i;
            opcnt[i]--;
            dfs(level+1);
            opcnt[i]++;
        }
    }

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for(int i = 0 ; i < n ; i++) cin >> num[i];
    for(int i = 0 ; i < 4 ; i++) cin >> opcnt[i];
    dfs(0);
    cout << MAX << "\n" << MIN;
    return 0;
}
