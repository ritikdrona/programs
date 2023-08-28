N = int(input())
A = []
for _ in range(N):
    A.append(int(input()))

K = int(input())
Q = int(input())
Q1, Q2 = [], []

for _ in range(Q):
    Q1.append(int(input()))

for _ in range(Q):
    Q2.append(int(input()))


def calculateMinMoves(A, K, start, end):
    if A[end] - A[start] > K:
        return 1

    moves = 0
    currentIndex = start
    while currentIndex != end:
        for i in range(end, start, -1):
            if A[i] - A[currentIndex] <= K:
                currentIndex = i
                break
        moves += 1

    return moves


for i in range(Q):
    print(calculateMinMoves(A, K, Q1[i], Q2[i]))


"""
1.
A   1   10
K   9
Q1  1
Q2  0


2.
A   1   5   10
K   6
Q1  1   0
Q2  2   2

3.
A   1   3   5   12  17
K   7
Q1  0   1   2
Q2  4   3   4

"""
