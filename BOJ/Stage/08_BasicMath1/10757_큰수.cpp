#include <stdio.h>
#include <string.h>


#define MAX_STR_SIZE 10000

int main(){
    char a[MAX_STR_SIZE+1], b[MAX_STR_SIZE+1];
    scanf("%s%s",a,b);


    if(strlen(a)<strlen(b)){
        char tmp[MAX_STR_SIZE+1];
        strcpy(tmp,a);
        strcpy(a,b);
        strcpy(b,tmp);
    }
    
    
    for(int i = strlen(a) - 1, j = strlen(b) - 1; j>=0 ;i--, j--){
        a[i] += b[j] - '0';
    }
    
    for(int i = strlen(a); i>0; i--){
        if(a[i] > '9'){
            a[i] -= 10;
            a[i-1]++;
        }
    }
    if(a[0]>'9') {
        printf("1");
        a[0] -= 10;
    }
    printf("%s",a);
    
}