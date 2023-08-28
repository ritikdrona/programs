N = int(input())
K = int(input())


def calculateMinCost(N, K):
    # if K <= int(N / 2):
    #     return K

    noOfGroups = N - K + 1
    daysPerGroup, groupsWithExtraDays = int(K / noOfGroups), K % noOfGroups
    minCost = int(noOfGroups * daysPerGroup * (daysPerGroup + 1) / 2)
    minCost += groupsWithExtraDays * (daysPerGroup + 1)

    return minCost % 1000000007


print(calculateMinCost(N, K))
