#include <vector>
#include <stdio.h>

long long sum(std::vector<int> &a) {
	long long ans = 0;
    
    for (int n : a) {
        ans += n;
    }
	return ans;
}


int main(){
    std::vector<int> v = { 7, 5, 16, 8 };
    printf("%d",sum(v));
}