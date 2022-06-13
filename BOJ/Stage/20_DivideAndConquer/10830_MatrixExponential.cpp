#include <stdio.h>
#define l long long
#define mod 1000
int n, i, j, x, sum;
l b;
int mat[5][5];

void pow(l b){
    int ret[5][5]={
        1,0,0,0,0,
        0,1,0,0,0,
        0,0,1,0,0,
        0,0,0,1,0,
        0,0,0,0,1,
    };
    int tmp[5][5]={};
    while(b){
        if(b&1){
            for(i=0; i<n; i++)
                for(j=0; j<n; j++){
                    sum=0;
                    for(x=0; x<n; x++)
                        sum+=ret[i][x]*mat[x][j];
                    tmp[i][j]=sum%mod;
                }
            for(i=0; i<n; i++)
                for(j=0; j<n; j++)
                    ret[i][j]=tmp[i][j];
        }
        b>>=1;
        for(i=0; i<n; i++)
            for(j=0; j<n; j++){
                sum=0;
                for(x=0; x<n; x++)
                    sum+=mat[i][x]*mat[x][j];
                tmp[i][j]=sum%mod;
            }
        for(i=0; i<n; i++)
            for(j=0; j<n; j++)
                mat[i][j]=tmp[i][j];
    }
        for(i=0; i<n; i++)
            for(j=0; j<n; j++)
                mat[i][j]=ret[i][j];
}

main(){
    scanf("%d%lld", &n, &b);
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            scanf("%d", &mat[i][j]);
    pow(b);
    for(i=0; i<n; i++){
        for(j=0; j<n; j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }
}