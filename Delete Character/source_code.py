def delchar(s, c):
    if len(c) != 1:
        return s
    else:
        str = ""
        for i in range(len(s)):
            if c != s[i]:
                str += s[i]
        return str

s = input()
c = input()
print(delchar(s, c))
