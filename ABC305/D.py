import bisect   

N = int(input())
A = list(map(int, input().split()))
A.append(100000000000)
Q = int(input())

ans = []

B = []

B.append(A[0])

for i in range(1,N):
    if i%2 == 0:
        B.append(A[i]-A[i-1]+B[i-1])
    else:
        B.append(B[i-1])
#print(B)

for i in range(Q):
    sleep = 0
    l,r = map(int, input().split())
    l_pos = bisect.bisect(A, l)
    r_pos = bisect.bisect(A, r)
    #print(bisect.bisect(A, l))
    #print(bisect.bisect(A, r))

    if l_pos%2 == 0:
        sleep += A[l_pos] - l
    if r_pos%2 == 0:
        sleep += r - A[r_pos-1]
    sleep += B[r_pos-1] - B[l_pos]
    #print(">",end="")
    #print(B[r_pos-1] - B[l_pos])
            #print("sleep:",end="")
            #print(sleep)
    #print("sleep:",end="")
    #print(sleep)
    ans.append(sleep)

for i in ans:
    print(i)