class UserMainCode(object):
    @classmethod
    def totalTurns(cls, input1, input2, input3):
        s = input1.upper()
        input1 = input1.upper()
        turn = 1
        for i in range(len(input1)):
            temp1 = input1[-input2:]
            input1 = input1.replace(' ', '')[:-input2]
            input1 = temp1 + input1
            if s != input1:
                turn = turn + 1
                temp2 = input1[-input3:]
                input1 = input1.replace(' ', '')[:-input3]
                input1 = temp2 + input1
            if s == input1:
                break
            turn = turn + 1
        print(turn)

input1 = input()
input2 = int(input())
input3 = int(input())
ob = UserMainCode()
ob.totalTurns(input1, input2, input3)
