#include <stdio.h>
int n,i,j,ind;
char s[51];
main(){
    scanf("%d",&n);
    for(i=0; i<n; i++){
        scanf("%s",s);
        for(ind=0,j=0; s[j]&&ind>=0; j++)  
            s[j]=='('? ind++:ind--;
        printf(ind?"NO\n":"YES\n");
    }
}