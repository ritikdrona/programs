# Read the number of customers
N = int(input())

# Initialize a list to store the count of bookings for each hour
bookings = [0] * 11

# Read the booking time slots and update the count for each hour
for _ in range(N):
    T1, T2 = map(int, input().split())

    for i in range(T1, T2):
        bookings[i] += 1
        # print(T1, T2, i)

print(bookings)
# Find the maximum count of bookings
max_bookings = max(bookings)

# Print the minimum number of computers required (the maximum count of bookings)
print(max_bookings)
