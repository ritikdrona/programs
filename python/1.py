
def find_number(arr):
    squares = set()
    for num in arr:
        squares.add(num * num)

    sum_squares_list = set()
    for i in range(len(arr)):
        for j in range(i + 1, len(arr)):
            sum_squares = arr[i] * arr[i] + arr[j] * arr[j]
            if sum_squares in sum_squares_list:
                return sum_squares
            else:
                sum_squares_list.add(sum_squares)

    return-1  # Return -1 if no such number is found


# Read input from STDIN
N = int(input())
arr = list(map(int, input().split()))

m = find_number(arr)
print(m)

