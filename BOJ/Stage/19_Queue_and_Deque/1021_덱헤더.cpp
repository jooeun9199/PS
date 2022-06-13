#include <stdio.h>
#include <deque>
std::deque<int> d;
int n,t,x,i,cnt,sum=0;
int main(){
    scanf("%d%d",&n,&t);
    for(i=1; i<=n; i++) d.push_back(i);
    while(t--){
        cnt=0;
        scanf("%d",&x);
        while(x!=d.front()){
            d.push_back(d.front());
            d.pop_front();
            cnt++;
        }
        if(cnt>d.size()/2) cnt = d.size()-cnt;
        sum+=cnt;
        d.pop_front();
    }
    printf("%d",sum);
}