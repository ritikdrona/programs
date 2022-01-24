class SmallestPaths:
    smallestPaths = []
    smallestSum = 100000000

    def __init__(self):
        self.grid = []
        n = int(input())
        for _ in range(n):
            self.grid.append(list(map(int, input().split(" "))))
        
    def checkPath(self, path):
        currentSum = sum(path)
        if currentSum == self.smallestSum:
            self.smallestPaths.append(path)
        elif currentSum < self.smallestSum:
            self.smallestPaths = [path]
            self.smallestSum = currentSum

    def findPaths(self, grid, currentPath = [], i = 0, j = 0):
        n = len(grid)
        if i == n - 1 and j == n - 1:
            currentPath.append(grid[i][j])
            self.checkPath(currentPath)
            return
        elif i == n - 1:
            for x in range(j, n):
                currentPath.append(grid[i][x])
            self.checkPath(currentPath)
            return
        elif j == n - 1:
            for x in range(i, n):
                currentPath.append(grid[x][j])
            self.checkPath(currentPath)
            return

        # print(i, j, n)
        self.findPaths(grid, currentPath + [grid[i][j]], i, j+1)
        self.findPaths(grid, currentPath + [grid[i][j]], i+1, j)
    
    def main(self):
        self.findPaths(self.grid)
        for p in self.smallestPaths:
            print(" ".join(list(map(str, p))))
    
sp = SmallestPaths()
sp.main()