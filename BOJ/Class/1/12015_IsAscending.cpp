#include <stdio.h>
main(){
    int n=8,x;
    bool a=1,b=1;
    while(n--){
        scanf("%d",&x);
        if(x!=n+1)b=0;
        if(x!=8-n)a=0;
    }
    if(a) printf("ascending");
    else if(b) printf("descending");
    else printf("mixed");
}