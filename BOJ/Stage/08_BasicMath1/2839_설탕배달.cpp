#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int ret;
    switch(n%5){
        case 0: ret = n/5; break;
        case 3: ret = 1 + (n-3)/5; break;
        case 1: ret = 2 + (n-6)/5; break;
        case 4: if(n>=9) {
            ret = 3 + (n-9)/5; break;
            }
        case 2: if(n>=12) {
            ret = 4 + (n-12)/5; break;
        }
        default: ret = -1;
    }
    printf("%d",ret);

    return 0;
}