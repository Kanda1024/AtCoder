from bisect import bisect

N,M,D = map(int, input().split())
A = list(map(int, input().split()))
B = list(map(int, input().split()))

A.sort()
B.sort()

ans = -1

for i in range(N):
    pos = bisect(B,A[i]+D)-1
    if abs(B[pos] - A[i]) <= D:
        ans = max(ans, A[i] + B[pos])

print(ans)