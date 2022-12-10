t = int(input())

for _ in range(t):
    n = int(input())
    scores = list(map(int, input().split()))

    avg = sum(scores)/n
    print(sum([True for score in scores if score >= avg]),'/',n,sep='')