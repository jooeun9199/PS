from functools import cmp_to_key

def cmp(x,y):
	if x[0] != y[0]:
		return x[0] < y[0]
	else:
		return x[1] < y[1]

N,k = map(int,input().split())

lst = []
for _ in range(N):
	s,t = input().split()
	t = float(t)
	lst.append([s,t])

name,height = sorted(lst,key=cmp_to_key(cmp))[k-1]
print(lst)
lst.sort(key=cmp_to_key(cmp))
print(lst)
print(f"{name} {height:.2f}")

	
	
