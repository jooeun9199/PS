#include<stdio.h>
#define MOD 1234567891
main(){
    int n, i=0, sum=0, r=1;
    scanf("%d",&n);
    char s[n+1];
    scanf("%s",s);

    for(;i<n;i++,r=1LL*r*31%MOD)sum = (1LL*sum+1LL*(s[i]-96)*r)%MOD;
    printf("%d",sum);
}