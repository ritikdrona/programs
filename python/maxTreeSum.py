class Tree:
    def __init__(self, val, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

def maxTreeSum(N, P, A):
    noNegative = True
    for i in A:
        if i < 0: noNegative = False
    if noNegative: return sum(A)

    pass

print(maxTreeSum(4, [0, 1, 2, 3], [14, 16, 1, 1]))
