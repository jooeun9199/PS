#include <stdio.h>


int main(){
    while(1){
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        if(!(a&&b&&c)) break;

        int A = a*a, B = b*b, C = c*c;
        
        if((A+B-C)*(B+C-A)*(C+A-B)==0) printf("right\n");
        else printf("wrong\n");


    }
    return 0;
}