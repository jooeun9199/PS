#include <stdio.h>
#include <algorithm>
using namespace std;

main(){
    int N,i,j,sum=0,MIN=2'000'000'000,a,b;
    
    scanf("%d",&N);
    int num[N];
    for(i=0;i<N;i++) scanf("%d",&num[i]);
    sort(num,num+N);


    for(i=0,j=N-1;i<j;){
        int sum = num[i]+num[j];
        if(abs(sum)<MIN){
            MIN = abs(sum);
            a = i;
            b = j;
        }
        if(sum<0) i++;
        else if(sum>0) j--;
        else break;
    }
    printf("%d %d",num[a],num[b]);
}