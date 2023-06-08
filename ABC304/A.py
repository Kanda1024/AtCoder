N = int(input())

S = []
A = []

pos = 0
min = 1000000000000

for i in range(N):
    s,a = input().split()
    a = int(a)
    S.append(s)
    A.append(a)
    if a < min:
        min = a
        pos = i


ans = S[:pos]
ans2 = S[pos:]

#print(ans2)

for i in ans2:
    print(i)

#print(ans)

for i in ans:
    print(i)