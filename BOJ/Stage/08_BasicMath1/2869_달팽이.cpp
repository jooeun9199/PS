#include <stdio.h>
#include <math.h>



int main(){
    int a,b,v;
    scanf("%d%d%d",&a,&b,&v);

    
    int day = 1 + ceil((double)(v - a) / (a - b));

    printf("%d",day);
    return 0;
}