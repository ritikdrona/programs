n = int(input())
m = int(input())

solutionMap = {}

def calculateMaxSubstrings(n, m):
    # key = (n, m)
    # if solutionMap.get(key):
    #     return solutionMap[key]

    if m == 0 or n == 0:
        return 0

    n - 1, m - 1

    answer = calculateMaxSubstrings(n-1, m-1)



# DP
"""
1.
N   4
M   0

0000

2.
N   3
M   1
001 -> 00 01 01 0 0 1 -> 3
010 -> 01 10 00 0 0 1 -> 3
100 -> 10 00 10 1 0 0 -> 3



"""