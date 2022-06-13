#include <stdio.h>
#include <string.h>

#define MAX_STR_SIZE 3

void reverse(char* str){
    int length = strlen(str);
    char tmp[MAX_STR_SIZE];
    for(int i=0; i<length; i++){
        tmp[i] = str[length-i-1];
    }
    tmp[3] = '\0';
    strcpy(str,tmp);
    return;
}

int main()
{
    char a[MAX_STR_SIZE+1], b[MAX_STR_SIZE+1];
    scanf("%s %s", a, b);
    reverse(a);
    reverse(b);

    if (strcmp(a,b)>=0) printf("%s",a);
    else printf("%s",b);

    return 0;
}