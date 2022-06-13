#include <iostream>
#define MAX 20
using namespace std;

int n;
int stat[MAX][MAX] ={0};
int MIN = 40000;
bool team[MAX] ={1,0};

void dfs(int level, int pre){
    if(level == n/2){
        int sumA = 0, sumB = 0;
        for(int i = 0 ; i < n ; i++)
            for(int j = i+1 ; j < n ; j++){
                if(team[i]&&team[j]) sumA = sumA + stat[i][j] + stat[j][i];
                else if(!team[i]&&!team[j]) sumB = sumB + stat[i][j] + stat[j][i];
            }
        int diff = abs(sumA-sumB);
        if(diff<MIN) MIN = diff;
        return;
    }
    for(int i = pre+1 ; i < n; i++){
        if(!team[i]){
            team[i] = true;
            dfs(level+1,i);
            team[i] = false;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for(int i =0 ; i < n ; i++)
        for(int j = 0 ; j < n ; j++)
            cin >> stat[i][j];
    dfs(1,0);
    cout << MIN;
    return 0;
}