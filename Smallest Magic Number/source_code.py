import math
n = int(input())
arr = list(map(int, input().split()))
num = 1
for i in arr:
    num = num * i
for i in range(2, int(math.sqrt(num)) + 1):
    if(num % (i * i) == 0):
        print(i)
        break
