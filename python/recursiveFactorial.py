class Factorial:

    memo = {}

    def factorial(self, x: int) -> int:
        if x == 0 or x == 1: return 1
        return x * self.factorial(x-1)

    def memoized_factorial(self, x: int) -> int:
        if self.memo.get(x): return self.memo[x]
        if x == 0 or x == 1: return 1
        self.memo[x] = x * self.memoized_factorial(x-1)
        return self.memo[x]


def main():
    f = Factorial()
    print(f.factorial(4))
    print(nCr(990, 100))
    print(nPr(990, 100))


def nCr(n: int, r: int) -> int:
    f = Factorial()
    ncr = int(f.factorial(n) / (f.factorial(r) * f.factorial(n - r)))
    return ncr


def nPr(n: int, r: int) -> int:
    f = Factorial()
    npr = int(f.factorial(n) / f.factorial(n - r))
    return npr


if __name__ == "__main__":
    main()
