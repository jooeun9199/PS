#include<stdio.h>
#define d 1000000007
#define l long long
l n, k, a=1, b=1;
l pow(l a, l b){
    l ans=1;
    while(b){
        if(b&1) ans=ans*a%d;
        a=a*a%d;
        b>>=1;
    }
    return ans;
}
main(){
    scanf("%lld%lld", &n, &k);
    for(int i=0;i<k;i++) {
        a = a*(n-i)%d;
        b = b*(k-i)%d;
    }
    printf("%lld", a*pow(b, d-2)%d);
}