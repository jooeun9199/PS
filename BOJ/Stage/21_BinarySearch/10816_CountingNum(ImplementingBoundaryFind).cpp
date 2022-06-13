#include <iostream>
#include <algorithm>
using namespace std;

int n, m, i, x;

int lower_binary(int* arr, int target, int size){
    int mid, start, end;
    start = 0, end = size;

    while(end > start){
        mid = (start + end) / 2;
        if(arr[mid] >= target)
            end = mid;
        else start = mid + 1;
    }
    return end;
}

int upper_binary(int* arr, int target, int size){
    int mid, start, end;
    start = 0, end = size;

    while(end > start){
        mid = (start + end) / 2;
        if(arr[mid] > target)
            end = mid;
        else start = mid + 1;
    }
    return end;
}

main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    int num[n];
    for(i = 0; i < n; i++) cin >> num[i];
    sort(num, num + n);

    cin >> m;
    for(i = 0; i < m; i++){
        cin >> x;
        cout << upper_binary(num, x, n)-lower_binary(num, x, n) << " ";
    }
}