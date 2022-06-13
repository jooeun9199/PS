#include <stdio.h>
#include <math.h>


int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int ret;
    if (c<=b) ret = -1;
    else ret = floor(a/(c-b)+1);

    printf("%d", ret);
    return 0;
}