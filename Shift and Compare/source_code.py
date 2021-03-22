str = input()
n = len(str)
forward_str = ""
backward_str = str[n - 1] + str[0]
for i in range(1, n - 1):
    forward_str = forward_str + str[i]
    backward_str = backward_str + str[i]
forward_str = forward_str + str[n - 1] + str[0]
if forward_str == backward_str:
    print(1)
else:
    print(0)
