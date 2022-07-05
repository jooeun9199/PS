import datetime
import re


N = int(input())

log = []
for i in range(N):
    
    year,month,day,hour,min,sec,l = map(int,re.split('[/: ]',input()))
    
    log.append((datetime.datetime(year,month,day,hour,min,sec),l))

P = []
for i in range(N):
    timediff = log[-1][0]-log[i][0]
    yeardiff = timediff.total_seconds()/60/60/24/365
    p = max(0.5**(yeardiff), (0.9)**(N-i-1))
    
    P.append(p)

if N==0:
    X = 0
else:
    X = sum([p*l for p,(_,l) in zip(P,log)])/sum(P)

print(round(X))