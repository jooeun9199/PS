from audioop import add


N,M = map(int,input().split())

LOG = []
BLOCK = []
CHAIN = []

pre = 'B'
for i in range(M):
    
    robot, block, number = input().split()
    number = int(number)
    LOG.append([(robot,block,number)])
    
    if pre == robot:
        BLOCK.append((number,i,'ODD'))
    else:
        BLOCK.append((number,i,'EVEN'))
    pre = robot
    
BLOCK.sort(key=lambda x:x[0])

BLOCK_ind = 0
for num in range(1,2*N+1):

    if BLOCK_ind < M and BLOCK[BLOCK_ind][0] == num:
        BLOCK_ind += 1
    else:
        CHAIN.append(num)


print(BLOCK)
print(CHAIN)

ans = 'YES'
block,ind,oddity = BLOCK.pop(0)

if CHAIN:
    chain = CHAIN.pop(0)

while BLOCK or CHAIN:
    
    # proceed BLOCK
    if BLOCK and oddity == 'EVEN' and chain > BLOCK[0][0]:
        block,ind,oddity = BLOCK.pop(0)
    
    # proceed CHAIN
    elif chain > block:
        if LOG[ind][-1][0] == 'A':
            tmp = 'B'
        else:
            tmp = 'A'
        LOG[ind].append((tmp,'CHAIN',chain))
        oddity = not oddity
        
        if CHAIN:
            chain = CHAIN.pop(0)
            
    # have nothing to do
    else:
        ans = 'NO'
        break
    print(BLOCK,CHAIN)
    

print(ans)

if ans == 'YES':
    
    for logs in LOG:
        for a,b,c in logs:
            print(a,b,c)