#include <stdio.h>
#include <string.h>

int main(){
    int n;
    scanf("%d",&n);

    char str[10];
    int i,cnt;
    for(i = 0, cnt = 0 ;cnt<n ; i++){
        sprintf(str,"%d",i);
        if(strstr(str,"666")) cnt++;
    }

    printf("%d",--i);

    return 0;
}