N = int(input())

A = list(map(int, input().split()))



for i in range(N):
    sum = 0
    for j in range(i*7, (i+1)*7):
        sum += A[j]
    print(sum, end=" ")