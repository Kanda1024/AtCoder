from collections import deque

N = int(input())
S = input()

que = deque()

cnt = 0

for i in range(N):
    que.append(S[i])
    
    if S[i] == '(':
        cnt += 1

    if S[i] == ')' and cnt > 0:
        while que:
            v = que.pop()
            if v == '(':
                cnt -= 1
                break

for i in que:
    print(i,end="")