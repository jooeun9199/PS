#include <stdio.h>
main(){
    int n,x,i,ind=1,cnt=0,num=1;
    scanf("%d",&n);
    int stack[n+1]={}, ans[2*n];
    bool invalid = 0;
    while(n--){
        scanf("%d",&x);
        while(stack[ind-1]!=x){
            if(stack[ind-1]<x) {
                stack[ind++] = num++;
                ans[cnt++] = 1;
            }
            else {
                invalid = 1;
                break;
            }
        }
        if(invalid) break;
        ind--;
        ans[cnt++] = 0;
    }
    if(invalid) printf("NO");
    else for(i=0; i<cnt; i++) printf(ans[i]?"+\n":"-\n");
}