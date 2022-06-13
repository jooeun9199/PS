#include <stdio.h>
#include <memory.h>
main(){
    int n,m,x,i,j,sum=0;
    scanf("%d",&n);
    bool w[2][40001]={};
    w[0][0] = 1;
    for(i=1;i<=n;i++) {
        scanf("%d",&x);
        memset(w[i%2],0,sizeof(w[i%2]));
        for(j=0;j<=sum&&j<40001;j++){
            if(w[1-i%2][j]) {
                w[i%2][j] = 1;
                w[i%2][j+x] = 1;
                w[i%2][j-x>0?j-x:x-j] = 1;
            }
        }
        sum+=x;
    }
    scanf("%d",&m);
    while(m--){
        scanf("%d",&x);
        printf(w[1-i%2][x]?"Y ":"N ");
    }
}