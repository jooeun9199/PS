#include <stdio.h>
main(){
    long long i,n,m,_2=0,_5=0;
    scanf("%lld%lld",&n,&m);
    for(i = 2; i <= n; i*=2) _2 += n/i - m/i - (n-m)/i;
    for(i = 5; i <= n; i*=5) _5 += n/i - m/i - (n-m)/i;
    printf("%lld",_2<_5?_2:_5);
}