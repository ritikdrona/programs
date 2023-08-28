
N = int(input())
A = []
for _ in range(N):
    A.append(int(input()))

def calculateminMarks(A):
    totalMarks = max(A) + 1
    sum = 0
    for a in A:
        sum += totalMarks - (a + 1)
    return sum

print(calculateminMarks(A))
