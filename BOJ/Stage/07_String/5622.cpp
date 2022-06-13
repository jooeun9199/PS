#include <stdio.h>

#define MAX_STR_SIZE 15
int main()
{

    char input[MAX_STR_SIZE + 1];
    scanf("%s", input);

    int sum = 0;
    for (int i = 0; input[i] != '\0'; i++)
    {
        sum+=1;
        char ch = input[i];
        if(ch <= 'C') sum+=2;
        else if(ch <= 'F') sum+=3;
        else if(ch <= 'I') sum+=4;
        else if(ch <= 'L') sum+=5;
        else if(ch <= 'O') sum+=6;
        else if(ch <= 'S') sum+=7;
        else if(ch <= 'V') sum+=8;
        else sum+=9;
        
    }

    printf("%d",sum);


    return 0;
}