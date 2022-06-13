#include <stdio.h>
#include <queue>
main(){
    int n,i;
    std::queue<int> q;
    scanf("%d",&n);
    for(i=1;i<=n;i++) q.push(i);
    while(q.size()>1){
        q.pop();
        q.push(q.front());
        q.pop();
    }
    printf("%d",q.front());
}