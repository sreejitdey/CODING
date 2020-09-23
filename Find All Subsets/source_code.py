def printSubsets(myList):
    n = len(myList)
    finalList = []
    for i in range(pow(2, n)):
        subsets = []
        for j in range(n):
            if i & (1 << j):
                subsets.append(myList[j])
        finalList.append(subsets)
    return(finalList)

L = list(map(int, input().split()))
print(printSubsets(L))
