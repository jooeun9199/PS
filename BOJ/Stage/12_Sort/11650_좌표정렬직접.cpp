#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct tuple
{
    int x;
    int y;
};

void swap(void *a, void *b, size_t size)
{
    void *temp = malloc(size);
    memcpy(temp, b, size);
    memcpy(b, a, size);
    memcpy(a, temp, size);
    free(temp);
}

int tuple_compare(tuple a, tuple b){
    if(a.x>b.x||(a.x==b.x&&a.y>b.y)) return 1;
    if(a.x==b.x && a.y==b.y) return 0;
    return -1;
}

void tuple_sort(tuple arr[], int left, int right){
    if(left>=right) return;
    swap(arr+left+std::rand()%(right-left+1), arr+right,sizeof(tuple));
    int i = left, j = right-1;
    while(1){
        while(tuple_compare(arr[i],arr[right])<0&&i<right) i++;
        while(tuple_compare(arr[j],arr[right])>0&&j>left) j--;
        if(i<j)swap(arr+i,arr+j,sizeof(tuple));
        else break;
    }
    swap(arr+i, arr+right, sizeof(tuple));
    tuple_sort(arr,left,i-1);
    tuple_sort(arr,i+1,right);

}

int main(){
    int n;
    scanf("%d",&n);
    tuple num[n];
    int x,y;
    for(int i = 0 ; i < n ; i++){
        scanf("%d%d",&x,&y);
        num[i] = {x,y};
    }
    tuple_sort(num,0,n-1);
    for(int i = 0 ; i < n ; i++) printf("%d %d\n",num[i].x,num[i].y);

    return 0;
}