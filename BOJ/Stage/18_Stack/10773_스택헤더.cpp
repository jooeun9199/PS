#include <stdio.h>
#include <stack>
int n,x,i,sum=0;
std::stack<int> stack;
main(){
    scanf("%d",&n);
    for(i=0; i<n; i++){
        scanf("%d",&x);
        if(x) stack.push(x);
        else stack.pop();
    }
    while(stack.size()) {
        sum+=stack.top();
        stack.pop();
    }
    printf("%d",sum);
}