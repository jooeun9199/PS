#include <stdio.h>
#include <math.h>


int main(){
    int x;
    scanf("%d",&x);

    int n = 1 ;
    while(x > 3*n*(n-1)+1) n++;
    printf("%d",n);
    return 0;
}