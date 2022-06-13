#include <iostream>
#include <queue>
using namespace std;
struct cmp{
    bool operator()(const int& a, const int& b){
        if(abs(a)==abs(b)) return a > b; 
        else return abs(a) > abs(b);
    }
};

main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, x;
    cin >> n;
    priority_queue<int, vector<int>, cmp> heap;
    while(n--){
        cin >> x;
        if(x == 0){
            if(heap.empty()) cout << "0\n";
            else{
                cout << heap.top() << "\n";
                heap.pop();
            }
        }
        else heap.push(x);
    }
}