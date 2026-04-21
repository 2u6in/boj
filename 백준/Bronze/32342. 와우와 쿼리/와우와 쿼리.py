Q = int(input())

for _ in range(Q):
    S = input().strip()
    cnt = 0
    
    for i in range(len(S) - 2):
        if S[i:i+3] == "WOW":
            cnt += 1
    
    print(cnt)