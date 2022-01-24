def calculateMaps(N, A, B):
    aom, aem, bom, bem = {}, {}, {}, {}
    for i in range(N):
        if i%2 == 0:
            if aem.get(A[i]) is None: aem[A[i]] = 1
            else: aem[A[i]] = aem[A[i]] + 1

            if bem.get(B[i]) is None: bem[B[i]] = 1
            else: bem[B[i]] = bem[B[i]] + 1
        else:
            if aom.get(A[i]) is None: aom[A[i]] = 1
            else: aom[A[i]] = aom[A[i]] + 1

            if bom.get(B[i]) is None: bom[B[i]] = 1
            else: bom[B[i]] = bom[B[i]] + 1
    return aom, aem, bom, bem

def calculateDiff(a: dict, b: dict):
    diff = {}
    for ak in a.keys():
        if b.get(ak) is None: diff[ak] = a[ak]
        else: diff[ak] = a[ak] - b[ak]
    for bk in b.keys():
        if a.get(bk) is None: diff[bk] = -b[bk]
    return diff

def minimumChange(N:int, A: str, B: str):
    aom, aem, bom, bem = calculateMaps(N, A, B)
    odiff, ediff = calculateDiff(aom, bom), calculateDiff(aem, bem)
    change = 0
    for k in odiff.keys():
        if odiff[k] > 0:
            if odiff[k] %2 == 0:
                change = change + int(odiff[k]/2)
            else:
                change = change + int(odiff[k]/2) + 1
    for k in ediff.keys():
        if ediff[k] > 0:
            if ediff[k] %2 == 0:
                change = change + int(ediff[k]/2)
            else:
                change = change + int(ediff[k]/2) + 1
    return change

print(minimumChange(1, "a", "b"))
print(minimumChange(2, "ab", "ab"))
print(minimumChange(3, "xxz", "yzx"))
# minimumChange(4, "babd", "abcd")
# x x z
# y z x
