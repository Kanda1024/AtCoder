H,W = map(int, input().split())

S = []

for i in range(H):
    x = input()
    tmp = []
    for j in x:
        if j == '.':
            tmp.append(0)
        else:
            tmp.append(1)
    S.append(tmp)



for i in range(H):
    for j in range(W):
        cnt = 0

        if i-1 >= 0:
            cnt += S[i-1][j]
        if i+1 < H:
            cnt += S[i+1][j]
        if j-1 >= 0:
            cnt += S[i][j-1]
        if j+1 < W:
            cnt += S[i][j+1]

        if S[i][j] == 0 and cnt >= 2:
            print(i+1, j+1)
            exit()