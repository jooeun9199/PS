#include <stdio.h>
int n,k,c[1001][1001]={};
int main(){
    scanf("%d%d",&n,&k);
    for(int i = 1; i <= n; i++) {
        c[i][0] = 1;
        c[i][i] = 1;
    }
    for(int i = 2; i <= n; i++)
        for(int j = 1; j < i; j++)
            c[i][j] = (c[i-1][j-1] + c[i-1][j])%10007;
    printf("%d",c[n][k]);
}