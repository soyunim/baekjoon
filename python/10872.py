n = int(input())
answer = 0

for i in range(n+1):
    if(i==0):
        answer = 1
    else:
        answer = answer * i
    
print(answer)