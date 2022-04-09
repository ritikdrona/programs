

s1 = input()
s2 = input()

m1, m2 = {}, {}

for c in s1:
    if m1.get(c):
        m1[c] += 1
    else:
        m1[c] = 1


for c in s2:
    if m2.get(c):
        m2[c] += 1
    else:
        m2[c] = 1

possible = True

if len(m1.keys()) == len(m2.keys()):
    for k in m1.keys():
        if not m2.get(k):
            possible = False
        else:
            if m1[k] != m2[k]:
                possible = False
else:
    possible = False

if possible:
    print("YES")
else:
    print("NO")
