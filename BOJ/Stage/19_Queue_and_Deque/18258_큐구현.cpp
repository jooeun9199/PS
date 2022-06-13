#include <stdio.h>
#include <string.h>
int n,f=0,b=0;
char s[6];
main(){
    scanf("%d",&n);
    int q[n];
    while(n--){
        scanf("%s",s);
        if(!strcmp(s,"push")) scanf("%d",&q[b++]);
        else if(!strcmp(s,"pop")) b-f?printf("%d\n",q[f++]):printf("-1\n");
        else if(!strcmp(s,"size")) printf("%d\n",b-f);
        else if(!strcmp(s,"empty")) printf(b-f?"0\n":"1\n");
        else if(!strcmp(s,"front")) b-f?printf("%d\n",q[f]):printf("-1\n");
        else if(!strcmp(s,"back")) b-f?printf("%d\n",q[b-1]):printf("-1\n");
    }
}