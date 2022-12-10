n = int(input())
s = input() + "."

alphabets = ["0","1.,?!","2ABC","3DEF","4GHI","5JKL","6MNO","7PQRS","8TUV","9WXYZ"]

ans = ""
cnt = 0
for i in range(n):
	if s[i] == s[i+1]:
		cnt += 1
	else:
		ind = int(s[i])
		string = alphabets[ind]
		ans += string[cnt%len(string)]
		cnt = 0

print(ans)