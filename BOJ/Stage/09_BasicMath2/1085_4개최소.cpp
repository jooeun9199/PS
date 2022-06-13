#include<stdio.h>
#include<algorithm>

int main(){
    int x,y,w,h;
    scanf("%d%d%d%d",&x,&y,&w,&h);
    int min = std::min({x,w-x,y,h-y});
    printf("%d",min);

    return 0;
}