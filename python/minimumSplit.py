

def minSplitSum(A, B, N, K):
    ...

N = int(input())
K = int(input())
A, B = [], []
for _ in range(N):
    A.append(int(input()))
for _ in range(K):
    B.append(int(input()))

print(minSplitSum(A, B, N, K))

# Approach 1 (Adhoc)
# 

# Approach 2 (Recursion, DP) because its an optimization problem
# 
