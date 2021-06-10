def GCD(a, b):
    if b == 0:
        return a
    return GCD(b, a % b)

def GCDArr(arr):
    gcd = arr[0]
    for i in range(1, len(arr)):
        gcd = GCD(gcd, arr[i])
        if gcd == 1:
            return 1
    return gcd

def LCMArr(arr):
    lcm = arr[0]
    for i in range(1, len(arr)):
        lcm = (lcm * arr[i]) // GCD(lcm, arr[i])
    return lcm

def getTotalX(a, b):
    lcm = LCMArr(a)
    gcd = GCDArr(b)
    c = 0
    for i in range(lcm, gcd + 1, lcm):
        if gcd % i == 0:
            c = c + 1
    return c

n, m = list(map(int, input().split()))
a = list(map(int, input().split()))
b = list(map(int, input().split()))
print(getTotalX(a, b))
