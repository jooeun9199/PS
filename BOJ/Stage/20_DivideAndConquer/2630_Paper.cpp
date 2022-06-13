#include <iostream>
#define MAX 128
using namespace std;
int n,sumB=0,sumW=0, map[MAX][MAX];
void paper(int len, int r, int c){
    bool check = 1;
    int color = map[r][c];
    for(int i=0; i<len;i++){
        for(int j=0; j<len; j++){
            if(map[i+r][j+c]!=color) {
                check = 0;
                break;
            }
        }
    }
    if(check) color?sumB++:sumW++;
    else {
        len/=2;
        paper(len,r,c);
        paper(len,r+len,c);
        paper(len,r,c+len);
        paper(len,r+len,c+len);
    }
}
main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            cin >> map[i][j];
    paper(n,0,0);
    cout << sumW << endl << sumB;
}