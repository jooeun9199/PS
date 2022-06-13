#include <stdio.h>
#include <algorithm>
struct tuple
{
    int x;
    int y;
};

int main(){
    int n;
    scanf("%d",&n);
    tuple num[n];
    for(int i = 0 ; i < n ; i++) scanf("%d%d",&num[i].x,&num[i].y);
    //tuple &a 와 tuple a 차이가 무엇인가!!!!!!
    std::sort(num,num+n,[](tuple a, tuple b){
        if(a.y!=b.y) return a.y < b.y;
        else return a.x < b.x;
    });
    for(int i = 0 ; i < n ; i++) printf("%d %d\n",num[i].x,num[i].y);

    return 0;
}