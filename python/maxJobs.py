def maxJobs(T: int, Exp: list[int]):
    return func(T, Exp, 0)

def func(T: int, Exp: list[int], currentExp: int):
    if len(Exp) == 0:
        return 0
    if currentExp >= Exp[0]:
        return 1 + func(T, Exp[1:], currentExp)
    else:
        if T > Exp[0]:
            return max(1 + func(T-Exp[0], Exp[1:], Exp[0]), func(T, Exp[1:], currentExp))
        else:
            return func(T, Exp[1:], currentExp)

def main():
    print(maxJobs(5, [4, 7, 9]))
    print(maxJobs(3, [2]))
    print(maxJobs(3, [3]))
    print(maxJobs(5, [1, 7, 3]))

if __name__ == "__main__":
    main()
