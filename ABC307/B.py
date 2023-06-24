N = int(input())
S = []

for i in range(N):
    S.append(input())


for i in range(N):
    for j in range(N):
        if i == j:
            continue

        S2 = S[i] + S[j]

        if str(S2) == str(S2)[::-1]:
            print("Yes")
            exit()

print("No")