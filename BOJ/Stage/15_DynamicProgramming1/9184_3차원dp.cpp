#include <iostream>
#define MAX 21
using namespace std;

int w[MAX][MAX][MAX] ={0};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    for(int i = 0 ; i < MAX ; i++){
        for(int j = 0 ; j < MAX ; j++){
            w[0][i][j] = 1;
            w[i][0][j] = 1;
            w[i][j][0] = 1;
        }
    }
    
    for(int a = 1 ; a < MAX ; a++){
        for(int b = 1 ; b < MAX ; b++){
            for(int c = 1 ; c < MAX ; c++){
                if(a<b&&b<c) w[a][b][c] = w[a][b][c-1] + w[a][b-1][c-1] - w[a][b-1][c];
                else w[a][b][c] = w[a-1][b][c] + w[a-1][b-1][c] + w[a-1][b][c-1] - w[a-1][b-1][c-1];
            }
        }
    }

    while(1){
        int a,b,c;
        cin >> a >> b >> c;
        if(a==-1&&b==-1&&c==-1) break;
        int ret;
        if(a<=0||b<=0||c<=0) ret = 1;
        else if(a>20||b>20||c>20) ret = w[20][20][20];
        else ret = w[a][b][c];
    
        cout << "w("<< a << ", "<< b << ", "<< c << ") = " << ret << "\n";
    }
    return 0;
}