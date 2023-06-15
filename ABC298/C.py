N = int(input())
Q = int(input())

box = [] #どの箱に何番が入っているか
box2 = []#何番がどの箱に入っているか

for i in range(N+1):
    box.append([])

for i in range(int(2e5+1)):
    box2.append([])

for i in range(Q):
    query = list(map(int, input().split()))
    if query[0] == 1:
        i = query[1]
        j = query[2]
        box[j].append(i)
        box2[i].append(j)
    elif query[0] == 2:
        i = query[1]
        box[i].sort()
        print(*box[i])
    elif query[0] == 3:
        i = query[1]
        box2[i].sort()
        print(*list(set(box2[i])))