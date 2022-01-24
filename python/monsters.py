def hunt(N, M, P, C):
    '''Calculate required strength'''
    for i in range(N-1):
        for j in range(M):
            P[i][j] = P[i][j] - C[i][j]
    
    required_strength = 0
    for i in range(N):
        required_strength = required_strength + min(P[i])
    
    print(required_strength)
    return required_strength

# def hunt(N, M, P, C):
#     if N == 1: return min(P[0])
#     for i in range(M):
#         rs = P[-1][i]
#     return hunt(N-1, M, P, C)

# hunt(3, 3,
#     [
#         [3, 2, 5],
#         [8, 9, 1],
#         [4, 7, 6]
#     ],
#     [
#         [1, 1, 1],
#         [1, 1, 1],
#         [1, 1, 1]
#     ])

hunt(3, 3,
    [
        [3, 2, 5],
        [8, 9, 1],
        [4, 7, 6]
    ],
    [
        [1, 1, 1],
        [1, 1, 1],
        [10, 10, 10]
    ])
