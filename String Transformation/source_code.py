wrong = input()
correct = input()
n = len(wrong)
m = len(correct)
if m == 0:
    print(1)
elif wrong == correct:
    print(0)
else:
    dp = [[0] * (n) for _ in range(m)]
    for i in range(m):
        for j in range(i, n):
            if i == 0:
                if j == 0:
                    if wrong[j] == correct[i]:
                        dp[i][j] = 1
                    else:
                        dp[i][j] = 0
                elif wrong[j] == correct[i]:
                    dp[i][j] = dp[i][j - 1] + 1
                else:
                    dp[i][j] = dp[i][j - 1]
            else:
                if wrong[j] == correct[i]:
                    dp[i][j] = dp[i][j - 1] + dp[i - 1][j - 1]
                else:
                    dp[i][j] = dp[i][j - 1]
    print(dp[m - 1][n - 1])
