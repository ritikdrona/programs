m = {}

def nowtss(AR, N, K, current = 0, NAR = []):
    key = (current, ",".join(map(str, sorted(NAR))))
    if m.get(key): return m[key]

    if current == N:
        return 0

    EL = AR[current]

    invalid = False
    for a in NAR:
        if abs(EL - a) == K:
            invalid = True
    
    withoutEl = nowtss(AR, N, K, current=current+1, NAR=NAR)
    if invalid:
        m[key] = withoutEl
    else:
        m[key] = 1 + withoutEl + nowtss(AR, N, K, current=current+1, NAR=NAR + [EL])
    return m[key]

N = int(input())
K = int(input())
AR = []
for _ in range(N):
    AR.append(int(input()))

print(nowtss(AR, N, K))
