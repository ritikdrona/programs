"""
There is a 2D grid of m*n cells, you are in top-left corner.
In how many ways can you reach bottom-right corner, if you can only move bottom and right in the grid.
Hint: Use DP. So most probably use recursion, break down problems into sub problems and store intermediate
results.
"""


def main():
    m = int(input())
    n = int(input())
    
    grid = Grid()
    grid.m, grid.n = m, n
    # numberofWaysToTravelGrid = grid.calculateNumberOfWaysToTravelGrid()
    numberofWaysToTravelGrid = grid.calculateNumberOfWaysToTravelGridWithDP()
    print(numberofWaysToTravelGrid)


class Grid:
    m = 0
    n = 0
    results = {}
    
    def calculateNumberOfWaysToTravelGrid(self):
        return self.calculateNumberOfWaysToTravelSubGrid(self.m, self.n)

    def calculateNumberOfWaysToTravelSubGrid(self, m, n):
        if (m==1 and n==1) or (m==0 or n==0):
            return 0
        if m==1 or n==1:
            return 1
        
        numberofWaysIfMovedRight = self.calculateNumberOfWaysToTravelSubGrid(m, n-1)
        numberofWaysIfMovedDown = self.calculateNumberOfWaysToTravelSubGrid(m-1, n)
        totalNumberOfWays = numberofWaysIfMovedRight + numberofWaysIfMovedDown
        return totalNumberOfWays
    
    def calculateNumberOfWaysToTravelGridWithDP(self):
        return self.calculateNumberOfWaysToTravelSubGridWithDP(self.m, self.n)

    def calculateNumberOfWaysToTravelSubGridWithDP(self, m, n):
        if (m==1 and n==1) or (m==0 or n==0):
            return 0
        elif m==1 or n==1:
            return 1
        elif self.results.get((m, n)):
            return self.results[(m, n)]
        
        numberofWaysIfMovedRight = self.calculateNumberOfWaysToTravelSubGridWithDP(m, n-1)
        numberofWaysIfMovedDown = self.calculateNumberOfWaysToTravelSubGridWithDP(m-1, n)
        totalNumberOfWays = numberofWaysIfMovedRight + numberofWaysIfMovedDown
        self.results[(m, n)] = totalNumberOfWays
        return totalNumberOfWays


if __name__ == "__main__":
    main()
