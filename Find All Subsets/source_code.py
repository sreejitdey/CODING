def printSubsets(myList):
    n = len(myList)
    finalList = []
    for i in range(pow(2, n)):
        subsets = []
        for j in range(n):
            if i & (1 << j):
                subsets.append(myList[j])
        finalList.append(subsets)
    for i in finalList:
        for j in i:
            print(j, end = ' ')
        print()

L = list(map(int, input().split()))
printSubsets(L)
