def calculateLuckyTriple(N, S1, S2, R1, R2, W1, W2):
    pms = generatePermutations(N)
    return pms

def generatePermutations(N):
    if N <= 0: return []
    if N == 1: return ['S', 'W', 'R']

    l = []
    pms = generatePermutations(N-1)
    for s in ['S', 'W', 'R']:
        for p in pms:
            if not (s == 'W' and p[-1] == 'W'):
                l.append(p+s)
    return l


def main():
    N = int(input())
    S1 = int(input())
    S2 = int(input())
    R1 = int(input())
    R2 = int(input())
    W1 = int(input())
    W2 = int(input())

    pms = calculateLuckyTriple(N, S1, S2, R1, R2, W1, W2)
    print(len(pms))
    print(pms)


if __name__ == "__main__":
    main()
