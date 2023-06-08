from collections import deque

N,D = map(int, input().split())
X = []
Y = []

for i in range(N):
    x,y = map(int, input().split())
    X.append(x)
    Y.append(y)

G = []

for i in range(N):
    G.append([])


for i in range(N):
    for j in range(i+1,N):
        if (X[i]-X[j])**2 + (Y[i]-Y[j])**2 <= D**2:
            G[i].append(j)
            G[j].append(i)

que = deque()
que.append(0)
visit = [False] * N
visit[0] = True

while que:
    now = que.popleft()
    for v in G[now]:
        if visit[v] == False:
            que.append(v)
            visit[v] = True

for i in range(N):
    if visit[i] == True:
        print("Yes")
    else:
        print("No")