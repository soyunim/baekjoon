n=int(input())
sub=list(map(float,input().split()))
sum=0
max=0

for i in range(n):
    if max < sub[i]:
        max=sub[i]

for i in range(n):
    sub[i]=(sub[i]/max)*100
    sum=sub[i]+sum

avg=sum/n

print(avg)