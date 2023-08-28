m = {}

def fun(A, B):
    key = (A, B)
    if m.get(key) is None: 
        m[key] = A + B - 2 * (A & B)    
    return m.get(key)

def calculateScore(AR, N):
    score = 0
    for i in range(N):
        for j in range(i+1, N):
            for k in range(j+1, N):
                score += fun(fun(AR[i], AR[j]), AR[k])
    return score % 1_000_000_007

def main():
    N = int(input())
    AR = []
    for _ in range(N):
        AR.append(int(input()))
    score = calculateScore(AR, N)
    print(score)

if __name__ == "__main__":
    main()
