#include <stdio.h>
main(){
    int n,k,x,i;
    scanf("%d%d",&n,&k);
    int w[k+1]={1};
    while(n--) {
        scanf("%d",&x);
        for(i=x;i<k+1;i++)
            w[i]+=w[i-x];
    }
    printf("%d",w[k]);
}