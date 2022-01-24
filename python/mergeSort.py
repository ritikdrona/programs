# Merge Sort
def mergeSort(l):
    n = len(l)
    l1 = l[: n // 2]
    l2 = l[n // 2 :]
    if len(l1) > 1:
        mergeSort(l1)
    if len(l2) > 1:
        mergeSort(l2)
    for i in range(0, n):
        if len(l1) == 0:
            l[i] = l2[0]
            l2.remove(l2[0])
        elif len(l2) == 0:
            l[i] = l1[0]
            l1.remove(l1[0])
        else:
            if l1[0] < l2[0]:
                l[i] = l1[0]
                l1.remove(l1[0])
            else:
                l[i] = l2[0]
                l2.remove(l2[0])
