# Step 1: find x, max number of distinct colored balls
# Step 2: ?

# Removal of unnecessary
# Alternate: create a map and find which box is required and which box can be removed
# return cost modulo 10^9+7

# create 2 maps
# boxNumber: balls -> boxToBall
# ballNumber: boxes -> ballToBox

# both ball numbers and box numbers start from 0

def getMin(N, A, B):
    
    boxToBall = []
    for i, b in enumerate(B):
        l = []
        for j in range(10):
            if b[j] == '1':
                l.append(j)
        boxToBall.append(l)
    
    ballToBox = []
    for j in range(10):
        l = []
        for i, b in enumerate(B):
            if b[j] == '1':
                l.append(i)
        ballToBox.append(l)

    # print(ballToBox, boxToBall)
    boxesRemoved = []
    for boxes in ballToBox:
        if len(boxes) <= 1:
            continue

        for box in boxes:
            canRemove = True
            balls = boxToBall[box]
            for ball in balls:
                if len(ballToBox[ball]) == 1:
                    canRemove = False
            
            if canRemove:
                boxesRemoved.append(box)
                boxToBall[box] = []
                for i in range(10):
                    if box in ballToBox[i]:
                        ballToBox[i].remove(box)
    
    totalCost = 0
    for i, a in enumerate(A):
        if i not in boxesRemoved:
            totalCost += a
    return totalCost % 1000000009


    

print(getMin(2, [2, 3], ["1000000000", "0000000001"])) # 5
print(getMin(2, [2, 99], ["1111111111", "1111111110"])) # 2
print(getMin(3, [20, 10, 9], ["0110100110", "1001000101", "1111111111"])) # 9
