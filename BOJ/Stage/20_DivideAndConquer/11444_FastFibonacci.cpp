#include <stdio.h>
#define MOD 1000000007
main(){
    long long n, a=0, b=1, tmp;
    int odd[60], index=0;
    scanf("%lld", &n);
    while(n){
        odd[index++]=n%2;
        n>>=1;
    }
    while(index--){
        if(odd[index]){
            tmp=(a*a+b*b)%MOD;
            b=(2*a*b+b*b)%MOD;
            a=tmp;
        }
        else{
            tmp=(2*a*b-a*a)%MOD;
            b=(a*a+b*b)%MOD;
            a=tmp>0?tmp:MOD+tmp;
        }
    }
    printf("%lld", a);
}