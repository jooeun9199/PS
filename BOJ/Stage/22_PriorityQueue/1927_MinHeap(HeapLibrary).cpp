#include <iostream>
#include <algorithm>
using namespace std;
bool cmp(const int &a, const int &b){
    return a>b;
}

main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,x,I=0;
    cin >> n;
    int heap[n];

    while(n--){
        cin >> x;
        if(x==0){
            if(I==0) cout << "0\n";
            else{
                cout << heap[0] << "\n";
                pop_heap(heap,heap+I,cmp);
                I--;
            }
        }
        else{
            heap[I++] = x;
            push_heap(heap,heap+I,cmp);
        }
    }
}