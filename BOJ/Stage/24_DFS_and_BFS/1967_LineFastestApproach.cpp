#include<stdio.h>
#include<queue>
using namespace std;

int n,k,time=0,x,s;
bool loc[100001]={};
queue<int> q;

void BFS(){
    q.push(n);
    loc[n] = 1;
    while(!loc[k]){
        s = q.size();
        while(s--){
            x = q.front();
            q.pop();
            if(x-1>=0&&!loc[x-1]) {
                loc[x-1] = 1;
                q.push(x-1);
            }
            if(x+1<=100000&&!loc[x+1]) {
                loc[x+1] = 1;
                q.push(x+1);
            }
            if(2*x<=100000&&!loc[2*x]) {
                loc[2*x] = 1;
                q.push(2*x);
            }
        }
        time++;
    }
}
main(){
    scanf("%d%d",&n,&k);
    BFS();
    printf("%d",time);
}