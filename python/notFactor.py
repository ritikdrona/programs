x = int(input().split(" ")[0])
l = list(map(int, input().split(" ")))

factors = [x]
for i in range(2, int(x/2)):
    if x%i == 0:
        factors.append(i)

noFactors = []
for n in l:
    isFactor = False
    for f in factors:
        if n%f == 0:
            isFactor = True
    if not isFactor:
        noFactors.append(n)

print(" ".join(list(map(str, noFactors))))
