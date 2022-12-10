N = int(input())
scores = list(map(int,input().split()))

score_cnt = {}
for score in scores:
	if score_cnt.get(score,0):
		score_cnt.pop(score)
	else:
		score_cnt[score] = 1


print(sum([score for score in score_cnt.keys()]))
	