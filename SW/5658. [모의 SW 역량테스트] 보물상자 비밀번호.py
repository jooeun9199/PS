import sys
sys.stdin = open("sample_input.txt", "r")

T = int(input())

for t in range(T):
    N, K = map(int, input().split())
    hexs = list(input())

    nums = set()
    l = N//4
    hexs += hexs[:l]
    for i in range(l):
        for n in range(4):
            nums.add(''.join(hexs[l*n+i:l*(n+1)+i]))

    nums = list(nums)
    nums.sort(reverse=True)
    print('#',t+1,' ',int(nums[K-1],base=16),sep='')
