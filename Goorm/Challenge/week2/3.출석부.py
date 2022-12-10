N,k = map(int, input().split())

db = []
for _ in range(N):
    name, height = input().split()
    db.append((name,height))
db.sort()
print(db[k-1][0], db[k-1][1])

