N,M,H,K = map(int, input().split())
S = input()

num_list = set()
for i in range(M):
    num_list.add(str(list(map(int,input().split()))))

#print(num_list)

X = 0
Y = 0

for i in range(N):
    H -= 1
    if S[i] == 'R':
        X += 1
    if S[i] == 'L':
        X -= 1
    if S[i] == 'U':
        Y += 1
    if S[i] == 'D':
        Y -= 1
    
    if H < 0:
        print("No")
        exit()

    if H < K:
        if str([X,Y]) in num_list:
            num_list.remove(str([X,Y]))
            H = K
    
    #print("X,Y:",end="")
    #print(X,Y)
    #print("H: ",end="")
    #print(H)
    
print("Yes")
