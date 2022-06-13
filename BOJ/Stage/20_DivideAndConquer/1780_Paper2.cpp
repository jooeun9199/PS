#include <iostream>
#define MAX 2187
using namespace std;
int n, map[MAX][MAX], zero=0, one=0, minusone=0;
void paper(int len, int r, int c){
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
    if(check){
        if(color==-1) minusone++;
        else if(color==0) zero++;
        else one++;
    }
    else{
        len/=3;
        for(int i=0; i<3; i++)
            for(int j=0; j<3; j++)
                paper(len, r+i*len, c+j*len);
    }

}
main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            cin>>map[i][j];
    paper(n, 0, 0);
    cout<<minusone<<endl<<zero<<endl<<one;
}