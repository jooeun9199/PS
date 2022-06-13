#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    int x, count[10001] = {0};
    for(int i =0 ; i < n ; i++) {
        scanf("%d",&x);
        count[x]++;
    }

    for(int i = 1 ; i <= 10000; i++)
        while(count[i]!=0){
            printf("%d\n",i);
            count[i]--;
        }

    return 0;
}