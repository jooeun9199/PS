#include <stdio.h>
#include <queue>
main(){
    int n,k,i;
    std::queue<int> q;
    scanf("%d%d",&n,&k);
    printf("<");
    for(i=1; i<=n; i++) q.push(i);
    while(n-->1){
        for(i=1; i<k; i++) {
            q.push(q.front());
            q.pop();
        }
        printf("%d, ",q.front());
        q.pop();
    }
    printf("%d>",q.front());
}