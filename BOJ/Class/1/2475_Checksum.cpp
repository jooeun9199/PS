#include <stdio.h>
main(){
    int n = 5, x, sum = 0;
    while(n--){
        scanf("%d", &x);
        sum += x * x;
    }
    printf("%d", sum % 10);
}