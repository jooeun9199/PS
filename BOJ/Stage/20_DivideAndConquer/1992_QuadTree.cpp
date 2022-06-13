#include <iostream>
#define MAX 64
using namespace std;
int n, map[MAX][MAX];
char c;
void print(int len, int r, int c){
    bool check=1;
    int color=map[r][c];
    for(int i=0; i<len; i++){
        for(int j=0; j<len; j++){
            if(map[i+r][j+c]!=color){
                check=0;
                break;
            }
        }
    }
    if(check)
        cout<<color;
    else{
        cout<<"(";
        len/=2;
        print(len, r, c);
        print(len, r, c+len);
        print(len, r+len, c);
        print(len, r+len, c+len);
        cout<<")";
    }
}
main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++){
            cin>>c;
            map[i][j]=c-'0';
        }

    print(n, 0, 0);
}