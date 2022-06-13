#include <iostream>
#define MAX 101
using namespace std;

long long arr[MAX] = {0,1,1,1,2,2,};

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    for(int i = 6 ; i < MAX ; i++){
        arr[i] = arr[i-1] + arr[i-5];
    }

    int n, x;
    cin >> n;
    for(int i = 0 ; i < n ; i++) {
        cin >> x;
        cout << arr[x] << "\n";
    }
    return 0;
}