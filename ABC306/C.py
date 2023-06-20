N = int(input())
A = list(map(int, input().split()))

num = set([])
num2 = set([])

ans = []

for i in range(3*N):
    if A[i] not in num:
        num.add(A[i])
    elif A[i] not in num2:
        ans.append(A[i])
        num2.add(A[i])

print(*ans)