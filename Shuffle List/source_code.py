def shuffle(l1, l2):
    mylist = []
    len1 = len(l1)
    len2 = len(l2)
    if len1 <= len2:
        for i in range(len1):
            mylist.append(l1[i])
            mylist.append(l2[i])
        for i in range(len1, len2):
            mylist.append(l2[i])
    else:
        for i in range(len2):
            mylist.append(l1[i])
            mylist.append(l2[i])
        for i in range(len2, len1):
            mylist.append(l1[i])
    return mylist

l1 = list(map(int, input().split()))
l2 = list(map(int, input().split()))
print(shuffle(l1, l2))
