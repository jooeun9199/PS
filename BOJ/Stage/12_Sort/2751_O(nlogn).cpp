#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void merge(int arr[], int left, int mid, int right){
    int sorted[right-left];
    for(int i = left, j = mid, n = 0; n<right-left;n++){
        if(i>=mid) sorted[n] = arr[j++]; 
        else if(j>=right) sorted[n] = arr[i++];
        else if(arr[i]<=arr[j]) sorted[n] = arr[i++];
        else sorted[n] = arr[j++];
    }

    for(int i = 0 ; i<right-left; i++) arr[i+left] = sorted[i];
}


void merge_sort(int arr[], int left, int right){
    if(left+1>=right) return;
    int mid = (left + right) / 2;
    merge_sort(arr,left,mid);
    merge_sort(arr, mid, right);
    merge(arr,left, mid, right);
}

void heap_up(int arr[], int current){
    while(current>0){
        int parent = (current - 1)/2;
        if(arr[parent]>arr[current]) swap(arr+parent,arr+current);
        else break;
        current = parent;
    }
}

void heap_down(int arr[], int n){
    int current = 0;
    int child = 1;
    while(child<n){
        if(child+1<n&&arr[child+1]<arr[child]) child = child+1;
        if(arr[child]<arr[current]) swap(arr+child,arr+current);
        else break;
        current = child; 
        child = (current + 1)*2-1;
    }
}

void quick_sort(int arr[], int left, int right){
    if(left>=right) return;
    swap(arr+left+std::rand()%(right-left+1), arr+right);
    int i = left, j = right-1;
    while(1){
        while(arr[i]<arr[right]&&i<right) i++;
        while(arr[j]>arr[right]&&j>left) j--;
        if(i<j)swap(arr+i,arr+j);
        else break;
    }
    swap(arr+i, arr+right);
    quick_sort(arr,left,i-1);
    quick_sort(arr,i+1,right);

}

int main(){
    int n;
    scanf("%d",&n);

    int num[n];
    for(int i = 0 ; i < n ; i++) scanf("%d",&num[i]);

    // //Merge Sort :
    // //stable sort(순서안바뀜), devide and conquer(분할정복)
    // merge_sort(num, 0, n);
    
    // //Heap Sort
    // for(int i = 0 ; i < n ; i++){
    //     int current = i;
    //     heap_up(num,i);
    // }
    // for(int i = n ; i > 0 ; i--){
    //     printf("%d\n",num[0]);
    //     num[0] = num[i-1];
    //     heap_down(num,i-1);
    // }

    //Quick Sort : devide and conquer
    quick_sort(num, 0, n-1);

    for(int i = 0 ; i < n ; i++) printf("%d\n",num[i]);

    return 0;
}