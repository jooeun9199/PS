#include <stdio.h>
#include <algorithm>
#include <math.h>

int main(){
    int n;
    scanf("%d",&n);

    int num[n],sum=0;
    for(int i =0  ; i <n ; i++){
        scanf("%d",&num[i]);
        sum+=num[i];
    }
    std::sort(num,num+n);
    int avg = round((float)sum/n), min = num[0], max = num[n-1], mid = num[n/2], range = max-min;


    int cnt = 1, max_cnt = 0, index = 0;
    bool second = false;
    for(int i = 1 ; i <= n ; i++){
        if(num[i]!=num[i-1]||i==n){
            if(max_cnt<cnt) {
                max_cnt = cnt;
                index = i-1;
                second = false;
            }
            else if(max_cnt==cnt&&second==false){
                index = i-1;
                second = true;
            }
            cnt = 1;
        }
        else cnt++;
    }


    printf("%d\n%d\n%d\n%d",avg,mid,num[index],range);

}