#include <stdio.h>

void swap(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(){
    int n;
    scanf("%d",&n);

    int num[n];
    for(int i = 0 ; i < n ; i++) scanf("%d",&num[i]);

    //Bubble Sort
    for(int i = 0; i < n-1 ; i++){
        for(int j = i+1 ; j < n ; j++)
            if(num[i]>num[j]) swap(&num[i], &num[j]);
    }

    //Selection Sort
    for(int i = 0 ; i < n ; i++){
        int mindex = i;
        for(int j = i ; j < n ; j++)
            if(num[mindex]>num[j]) mindex = j;
        swap(&num[mindex],&num[i]);
    }

    //Insertion Sort : 크기가 작을때
    for(int i = 0 ; i < n ; i++){
        for(int j = i ; j > 0 ; j--){
            if(num[j-1]>num[j]) swap(&num[j-1],&num[j]);
        }
    }


    for(int i = 0 ; i < n ; i++) printf("%d\n",num[i]);

    return 0;
}