#include <stdio.h>
#include <algorithm>
#include <string.h>

int main(){
    int num[11] ={0},input;
    scanf("%d",&input);
    int i;
    for(i =0 ; i<11&&input!=0; i++){
        num[i] = input%10;
        input/=10;
    }
    std::sort(num,num+i);
    while(i--){
        printf("%d",num[i]);
    }


    return 0;
}