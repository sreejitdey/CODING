t1, t2, n = map(int, input().split())
if n <= 2:
    next = t1 + t2 * t2
else:
    for i in range(2, n):
        next = t1 + t2 * t2
        t1 = t2
        t2 = next
print(next)
