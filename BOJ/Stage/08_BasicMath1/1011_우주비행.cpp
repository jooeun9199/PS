#include <stdio.h>
#include <math.h>

int main(){
    int t;
    scanf("%d",&t);
    
    int ans[t];
    for(int i = 0; i<t; i++){
        int x, y;
        scanf("%d%d",&x,&y);
        int dist = y-x;
        int n = sqrt(dist);
        int ret = n * 2 - 1;
        if(dist > n*n) ret++;
        if(dist > n*n+ n) ret++;

        ans[i] = ret;
    }

    for(int i = 0; i<t;i++) printf("%d\n",ans[i]);
}