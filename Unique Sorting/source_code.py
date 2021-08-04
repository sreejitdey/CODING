t = int(input())
for x in range(t):
    s = input()
    ec, oc, ed, od = [], [], [], []
    for i in s:
        if i.isdigit():
            if int(i) % 2 == 0:
                ed.append(i)
            else:
                od.append(i)
        else:
            if ord(i) % 2 == 0:
                oc.append(i)
            else:
                ec.append(i)
    ed.sort()
    od.sort()
    ec.sort()
    oc.sort()
    result = ''.join(oc) + ''.join(ec) + ''.join(od) + ''.join(ed)
    print(result)
