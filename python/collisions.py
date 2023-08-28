def collision(s, n, m):
    colls = 0
    for j in range(m):
        if [s[i][j] for i in range(n)].count(1) > 0:
            colls += 1
    return colls

print(collision(
    [
        [1, 1, 1],
        [0, 1, 1],
        [1, 0, 0]
    ], 3, 3
))
