t = int(input())
for x in range(t):
    p = input()
    s = input()
    index = []
    for c in s:
        index.append(p.find(c))
    index.sort()
    str = ""
    for i in index:
        str = str + p[i]
    print(str)
