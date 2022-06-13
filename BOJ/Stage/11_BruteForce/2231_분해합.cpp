#include <stdio.h>

int decomposition(int n){
    int sum = n;
    while(n){
        sum+=n%10;
        n/=10;
    }
    return sum;
}

int main(){
    int n;
    scanf("%d",&n);

    int ans = 0;
    for(int i = 1 ; i <= n && !ans; i++){
        if(decomposition(i)==n) ans = i;
    }

    printf("%d",ans);

    return 0;
}