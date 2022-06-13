#include <stdio.h>
main(){
    int n, m, k, i, j, x, sum;
    scanf("%d%d", &n, &m);
    int mat1[n][m];
    for(i=0; i<n; i++)
        for(j=0; j<m; j++)
            scanf("%d", &mat1[i][j]);
    scanf("%d%d", &m, &k);
    int mat2[m][k];
    for(i=0; i<m; i++)
        for(j=0; j<k; j++)
            scanf("%d", &mat2[i][j]);
    for(i=0; i<n; i++){
        for(j=0; j<k; j++){
            sum=0;
            for(x=0; x<m; x++)
                sum+=mat1[i][x]*mat2[x][j];
            printf("%d ", sum);
        }
        printf("\n");
    }
}