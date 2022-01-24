from itertools import permutations

def solve(distance, N, K):
    
    vertex = []
    for i in range(2, N+1):
        vertex.append(i)
 
    min_path = 101
    next_permutation=permutations(vertex)
    for i in next_permutation:
        current_pathweight = 0
        k = 0
        for j in i:
            current_pathweight += distance[j-1][k]
            k = j-1
        current_pathweight += min(distance[k][K-1], distance[K-1][k])
        current_pathweight += min(distance[0][K-1], distance[K-1][0])
        min_path = min(min_path, current_pathweight)

    return min_path

def solve2(distance, N, K):
    visited = [0]
    sum= 0 
    curr_city = 0

    for _ in range(N):
        n = 0
        tempList = [x for x in distance[curr_city] if x !=0]
        while True:
            if n==N-1:
                break
            min_d = min(tempList)

            if distance[curr_city].index(min_d) not in visited:
                curr_city = distance[curr_city].index(min_d)
                visited.append(curr_city)
                sum+=min_d
                break
            else:
                tempList.pop(tempList.index(min_d))
                n+=1
                continue
    sum+=distance[curr_city][K-1] + distance[K-1][0]
    return sum

print(solve([
    [0, 1, 15, 6],
    [2, 0, 7, 3],
    [9, 6, 0, 12],
    [10, 4, 8, 0],
], 4, 2))

# current_pathweight += min(distance[k][j-1], distance[j-1][k])



# from itertools import permutations

# def solve (distance,N, K):
#     cities = [i for i in range(1, N)]
#     pms = permutations(cities)
#     min_total_distance = 1800
#     for p in pms:
#         total_distance = 0
#         curr = 0
#         for i in p:
#             total_distance += distance[curr][i]
#             curr = i
#         total_distance += distance[curr][K-1] + distance[K-1][0]
#         min_total_distance = min(min_total_distance, total_distance)
#     return min_total_distance