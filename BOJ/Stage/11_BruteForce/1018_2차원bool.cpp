#include<stdio.h>
#include<string.h>

int main(){
    int row,col;
    scanf("%d%d",&row,&col);
    char board[row][col+1] = {};
    for(int i = 0; i<row; i++) scanf("%s",board+i);

    int min = 64;
    for(int i =0 ; i + 7 < row; i++)
        for(int j= 0 ; j + 7 < col; j++){
            int diff = 0;
            for(int x = i; x < i+8; x++)
                for(int y = j; y< j+8; y++)
                    diff+=x+y&1^board[x][y] == 'B';
            if(diff>32)diff = 64-diff;
            if(diff<min) min = diff;
        }
    printf("%d",min);

    return 0;
}