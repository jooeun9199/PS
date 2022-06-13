
T = int(input())

for t in range(T):
    
    deck_len = int(input())
    deck = [int(x) for x in input().split()]
    shuffle_len = int(input())
    shuffle = [int(x) for x in input().split()]
    
    print(deck[sum(shuffle) % deck_len])
    
