n = int(input())
result = ""

while True:
    alpha = int(n % 26)
    if alpha == 0:
     result += "z"
     n -= 1
    else:
     result += chr(alpha + 96)
    if n/26 < 1:
        break
    n /= 26
rslt = result[::-1]
print(rslt)

