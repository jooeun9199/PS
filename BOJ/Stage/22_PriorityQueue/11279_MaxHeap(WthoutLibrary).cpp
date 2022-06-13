#include <iostream>
using namespace std;

void swap(int &a, int &b){
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
}

void heap_down(int heap[], int I){
    int i=0,ind,l=1,r=2;
    while(l<I){
        ind = l;
        if(r<I && heap[l]<heap[r]) ind = r;
        if(heap[i]<heap[ind]) {
            swap(heap[i],heap[ind]);
            i = ind;
            l = i*2+1;
            r = i*2+2;
        }
        else break;
    }
}

void heap_up(int heap[], int I){
    int i=I,p=(i-1)/2;
    while(p>=0){
        if(heap[i]>heap[p]) {
            swap(heap[i],heap[p]);
            i = p;
            p = (i-1)/2;
        }
        else break;
    }
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
                heap[0] = heap[--I];
                heap_down(heap,I);
            }
        }
        else{
            heap[I] = x;
            heap_up(heap,I++);
        }
    }
}