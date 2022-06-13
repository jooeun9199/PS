#include <stdio.h>
#define l long long
l pow(l a, l b, l c){
    l ans=1;
    while(b){
        if(b&1) ans=ans*a%c;
        a=a*a%c;
        b>>=1;
    }
    return ans;
}
main(){
    l a, b, c;
    scanf("%lld%lld%lld", &a, &b, &c);
    printf("%lld", pow(a, b, c));
}