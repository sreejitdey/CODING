def HCF(a, b):
    if b == 0:
        return a
    else:
        return HCF(b, a % b)

def findHCF(arr, n):
    hcf = arr[0]
    for i in range(1, n):
        hcf = HCF(hcf, arr[i])
        if hcf == 1:
            return 1
    return hcf

arr = list(map(int, input().split()))
n = len(arr)
hcf = findHCF(arr, n)
print(hcf)
