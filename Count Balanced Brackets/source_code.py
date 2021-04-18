count = 0
def CountBalancedBrackets(n, open):
    global count
    if n == 0:
        if not open:
            count = count + 1
        return
    if open > n:
        return
    CountBalancedBrackets(n - 1, open + 1)
    if open > 0:
        CountBalancedBrackets(n - 1, open - 1)

n = int(input())
if n % 2 != 0 or n <= 0:
    print("Invalid Input")
else:
    CountBalancedBrackets(n, 0)
    print(count)
