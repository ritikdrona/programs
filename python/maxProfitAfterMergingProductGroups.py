def maxProfit(A, B, N, M):
    ...

def main():
    A, B = [], []

    N = int(input())
    for _ in range(N):
        A.append(int(input()))

    M = int(input())
    for _ in range(M):
        B.append(int(input()))

    profit = maxProfit(A, B, N, M)
    print(profit)

if __name__ == "__main__":
    main()
