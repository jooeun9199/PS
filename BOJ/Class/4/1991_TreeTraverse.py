N = int(input())

class Node():
    def __init__(self, data, left, right, parent=None):
        self.data = data
        self.left = left
        self.right = right
        self.parent = parent
        
    

NODE = [0]*N
for _ in range(N):
    node, left, right = input().split()

    NODE[ord(node)-ord('A')] = Node(node,left,right)
    
print(NODE)