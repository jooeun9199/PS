#include <stdio.h>
#include <string.h>
main(){
    int n;
    char s[6];
    scanf("%d",&n);
    int q[n], l=0, r=0,x;
    while(n--){
        scanf("%s",s);
        if(!strcmp(s,"push")) scanf("%d",&q[r++]);
        else if(!strcmp(s,"pop")) printf("%d\n",(r-l?q[l++]:-1));
        else if(!strcmp(s,"size")) printf("%d\n",r-l);
        else if(!strcmp(s,"empty")) printf("%d\n",(r-l?0:1));
        else if(!strcmp(s,"front"))printf("%d\n",(r-l?q[l]:-1));
        else if(!strcmp(s,"back")) printf("%d\n",(r-l?q[r-1]:-1));
    }
}