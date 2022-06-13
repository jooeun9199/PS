#include <stdio.h>

void move(int n, int a, int b){
    if(n==1) printf("%d %d\n",a,b);
    else {
        move(n-1,a,6-a-b);
        printf("%d %d\n",a,b);
        move(n-1,6-a-b,b);
    }
}

int main(){
    int n;
    scanf("%d",&n);

    int cnt = 0;
    for(int i = 0; i<n;i++){
        cnt = cnt*2 +1;
    }
    printf("%d\n",cnt);
    move(n,1,3);

    return 0;
}