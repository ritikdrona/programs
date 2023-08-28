class Knapsack:
    memo = {}

    def knapsack_01(self, weights, values, capacity):
        n = len(weights)
        if n == 0 or capacity == 0:
            return 0
        if weights[n-1] <= capacity:
            return max(
                values[n-1] + self.knapsack_01(weights[:-1], values[:-1], capacity-weights[n-1]),
                self.knapsack_01(weights[:-1], values[:-1], capacity)
            )
        else:
            return self.knapsack_01(weights[:-1], values[:-1], capacity)

    def memoized_knapsack_01(self, weights, values, capacity):
        n = len(weights)
        if (n, capacity) in self.memo:
            return self.memo[(n, capacity)]
        if n == 0 or capacity == 0:
            return 0
        if weights[n-1] <= capacity:
            self.memo[(n, capacity)] = max(
                values[n-1] + self.memoized_knapsack_01(weights[:-1], values[:-1], capacity-weights[n-1]),
                self.memoized_knapsack_01(weights[:-1], values[:-1], capacity)
            )
            return self.memo[(n, capacity)]
        else:
            self.memo[(n, capacity)] = self.memoized_knapsack_01(weights[:-1], values[:-1], capacity)
            return self.memo[(n, capacity)]
    
    def knapsack_ur(self, W, wt, val, n):
        # Base Case
        if n == 0 or W == 0:
            return 0
    
        # If weight of the nth item is
        # more than Knapsack of capacity W,
        # then this item cannot be included
        # in the optimal solution
        if (wt[n-1] > W):
            return self.knapsack_ur(W, wt, val, n-1)
    
        # return the maximum of two cases:
        # (1) nth item included
        # (2) not included
        else:
            return max(
                val[n-1] + self.knapsack_ur(
                    W-wt[n-1], wt, val, n-1),
                self.knapsack_ur(W, wt, val, n-1))


def main():
    # weights = list(map(int, input().split(" ")))
    # values = list(map(int, input().split(" ")))
    # capacity = int(input())

    # weights = [n for n in range(950)]
    # values = [n for n in range(950)]
    # capacity = 950

    weights = [10, 20, 30]
    values = [60, 100, 120]
    capacity = 50

    k = Knapsack()
    print(k.memoized_knapsack_01(weights, values, capacity))
    print(k.knapsack_ur(capacity, weights, values, len(values)))


if __name__ == "__main__":
    main()


"""

Ex 1
Weights: 1 3 4 5
Values: 1 5 4 7
Capacity: 7
Ans: 9

Ex 2
Number of items: 10
Weights: 10 20 40 8 5 50 40 35 6 6
Values: 8 20 5 16 25 5 20 7 27 25
Capacity: 100
Ans: 151

Speed of knapsack with 75 items ~ Speed of memoized knapsack with 950 items

"""