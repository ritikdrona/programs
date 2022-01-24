def calculate_magic_number(a):
    a = list(a)
    b = list(a)
    b.sort()
    good_numbers = []
    bad_numbers = []
    for i in range(len(a)):
        if a[i] == b[i]:
            good_numbers.append(a[i])
        else:
            bad_numbers.append(a[i])
    return sum(good_numbers) - sum(bad_numbers)

a = list(map(int, input().split(" ")))
print(calculate_magic_number(a))