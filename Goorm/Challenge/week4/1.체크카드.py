from collections import deque

N,M = map(int,input().split())

reserve = deque()

for _ in range(M):
	transaction, val = input().split()
	val = int(val)
	
	if transaction == 'deposit':
		N += val
	elif transaction == 'pay':
		if N >= val:
			N -= val
	else:
		if reserve or N < val:
			reserve.append(val)
		else:
			N -= val
			
	
	while reserve and reserve[0] <= N:
		N -= reserve.popleft()
	
	
print(N)
	