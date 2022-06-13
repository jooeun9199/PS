#include <stdio.h>
int main(){
    int n,k, ans = 1;
    scanf("%d%d",&n,&k);
    for(int i = 0; i < k; i++) ans = ans*(n-i)/(i+1);
    printf("%d",ans);
}