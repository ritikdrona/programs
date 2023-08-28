class UserMainCode(object):
    @classmethod
    def hungryChildrens(cls, input1, input2, input3):
        lb0, lb1, s0, s1 = 0, 0, 0, 0
        for i in range(input1):
            if input2[i] == 0:
                lb0 += 1
            else:
                lb1 += 1
            if input3[i] == 0:
                s0 += 1
            else:
                s1 += 1
        return int((abs(lb0 - s0) + abs(lb1 - s1)) / 2)

u = UserMainCode()
print(u.hungryChildrens(4, [0,0,1,0], [1,0,0,0]))
