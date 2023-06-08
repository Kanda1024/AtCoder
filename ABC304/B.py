import math

N = int(input())

if N <= 1000 -1:
    print(N)
elif N <= 10000 - 1:
    print(math.floor(N/10) * 10)
elif N <= 100000 - 1:
    print(math.floor(N/100) * 100)
elif N <= 1000000 - 1:
    print(math.floor(N/1000) * 1000)
elif N <= 10000000 - 1:
    print(math.floor(N/10000) * 10000)
elif N <= 100000000 - 1:
    print(math.floor(N/100000) * 100000)
elif N <= 1000000000 - 1:
    print(math.floor(N/1000000) * 1000000)