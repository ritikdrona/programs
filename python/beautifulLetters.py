s = input()
m = {}
bls = ["a", "b", "c", "d", "e", "f", "g"]
for c in s:
    if m.get(s) is not None:
        m[c] += 1
    else:
        m[c] = 1
    if c in bls:
        bls.remove(c)

maxPossibleFreq = 1
if len(bls) == 0:
    maxPossibleFreq = min(m.values()) + 1
print(m, maxPossibleFreq)


def fn(s, currentS="", currentIndex=0, currentMap={}):
    if len(s) == currentIndex:
        return len(currentS)

    c = s[currentIndex]

    count = 1
    if currentMap.get(c) is not None:
        count = int(currentMap.get(c)) + 1

    if len(currentS) == 0:
        if currentMap.get(c) is not None:
            currentMap[c] += 1
        else:
            currentMap[c] = 1
        return fn(s, currentS + c, currentIndex + 1, currentMap)

    if count <= maxPossibleFreq and (
        (count > 1 and currentS[-1] == c) or (count == 1 and currentS[-1] != c)
    ):
        if currentMap.get(c) is not None:
            currentMap[c] += 1
        else:
            currentMap[c] = 1
        return fn(s, currentS + c, currentIndex + 1, currentMap)
    else:
        return max(len(currentS), fn(s, c, currentIndex + 1, {c: 1}))

print(fn(s))
