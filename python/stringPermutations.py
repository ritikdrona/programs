def string_permutations(s:str) -> list[str]:
    if len(s) == 0:
        return []
    elif len(s) == 1:
        return [s]

    x = s[0]
    pms = string_permutations(s[1:])
    l = []

    for p in pms:
        for i in range(len(p)+1):
            pm = p[:i] + x + p[i:]
            if l.count(pm) == 0:
                l.append(pm)

    return l


def main():
    s = input()
    l = string_permutations(s)
    print("\nPermutations:")
    print(len(l))
    for i in l:
        print(i)


if __name__ == "__main__":
    main()
