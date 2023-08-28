def count_chocolates(chocolate_list: str):
    chocolates = list(map(int, chocolate_list.split(',')))

    total_chocolates = 0
    max_box, max_chocolates = None, 0
    for i, c in enumerate(chocolates):
        if c%2 == 0:
            total_chocolates += 2*c
            if max_chocolates < c:
                max_chocolates = c
                max_box = i + 1
    
    return [total_chocolates, max_box]


def main():
    chocolate_list = input()
    [total_chocolates, max_box] = count_chocolates(chocolate_list)
    print(f"Total chocolates: {total_chocolates}")
    print(f"Max Box: {max_box}")

if __name__ == "__main__":
    main()
