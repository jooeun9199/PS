#include <stdio.h>


int main(){
    int x;
    scanf("%d",&x);



    int level = 1;    
    while(x>level){
        x-=level;
        level++;
    }

    
    int numerator, denominator;
    int direction = level%2; // opposite if 1, straight if 0;
    switch(direction){
        case 0:
        numerator = x;
        denominator = level + 1 - numerator;
        break;

        case 1:
        denominator = x;
        numerator = level + 1 - denominator;
        break;
    }


    printf("%d/%d",numerator,denominator);
    return 0;
}