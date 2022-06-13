#include <stdio.h>
#include <algorithm>

main(){
    int N,X,*i,*j, cnt=0, sum;
    scanf("%d",&N);
    int num[N];
    for(int i=0;i<N;i++)
        scanf("%d",&num[i]);
    
    scanf("%d",&X);
    std::sort(num,num+N);
    i = num, j = num+N-1;
    while(i<j){
        sum = *i+*j;
        if(sum==X) cnt++;
        if(sum>X) j--;
        else i++; 
    }
    printf("%d",cnt);
}