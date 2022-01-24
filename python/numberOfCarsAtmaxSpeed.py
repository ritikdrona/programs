def findNumberOfCarsAtMaxSpeed(maxSpeeds):
    numberOfCars = len(maxSpeeds)
    if numberOfCars == 0: return 0

    numberOfCarsAtMaxSpeed = 1
    currentMaxPossibleSpeed = maxSpeeds[0]
    for i in range(1, numberOfCars):
        if maxSpeeds[i] <= currentMaxPossibleSpeed:
            currentMaxPossibleSpeed = maxSpeeds[i]
            numberOfCarsAtMaxSpeed = numberOfCarsAtMaxSpeed + 1

    return numberOfCarsAtMaxSpeed

if __name__ == "__main__":
    input()
    maxSpeeds = list(map(int, input().split(" ")))
    numberOfCarsAtMaxSpeed = findNumberOfCarsAtMaxSpeed(maxSpeeds)
    print(numberOfCarsAtMaxSpeed)
