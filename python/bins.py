class Bins:
    def calculateMinimumDistance(self, P, A, currentIndex=0):
        if len(P) == currentIndex:
            return 0, A

        locationOfP = P[currentIndex]
        minDistanceRest, modifiedA = self.calculateMinimumDistance(
            P, A, currentIndex + 1
        )

        minForCurrent, indexForMin = 1000000000, 0
        for index, [l, s] in enumerate(A):
            if s > 0:
                d = abs(l - locationOfP)
                if minForCurrent > d:
                    minForCurrent = d
                    indexForMin = index

        modifiedA[indexForMin][1] -= 1
        return minDistanceRest + minForCurrent, modifiedA


def getInput():
    N = int(input())
    M = int(input())

    P = []
    for _ in range(N):
        P.append(int(input()))

    A = []
    for _ in range(M):
        A.append(list(map(int, input().split(" "))))

    return P, A


def main():
    P, A = getInput()
    b = Bins()
    print(b.calculateMinimumDistance(P, A))


if __name__ == "__main__":
    main()
