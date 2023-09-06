n = int(input())
nums = list(map(int, input().split()))
count = 0

for num in nums:
    cnt = 0
    if num > 1:
        for i in range(2, num):
            if(num % i == 0):
                 cnt = cnt + 1
        if(cnt == 0):
            count += 1
            
print(count)