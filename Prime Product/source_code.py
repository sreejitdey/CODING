import math

def checkprime(n):
    r = int(math.sqrt(n)) + 1
    for i in range(2, r):
        if n % i == 0:
            return False
    return True

def primeproduct(m):
    if m < 0:
        return False
    r = int(math.sqrt(m)) + 1
    for i in range(2, r):
        if checkprime(i):
            if m % i == 0:
                if checkprime(m//i):
                    return True
    return False

m = int(input())
print(primeproduct(m))
