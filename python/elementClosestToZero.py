def solve(A):
    A.sort()
    return A[0]

def solve(N, A):
    min_dis = 1000
    elements = []
    for i in A:
        if abs(i) < min_dis:
            min_dis = abs(i)
            elements = [i]
        elif abs(i) == min_dis:
            elements.append(i)
    elements.sort()
    return elements[-1]

print(solve(2, [1, -1]))
print(solve(2, [2, -1]))