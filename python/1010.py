import math

t = int(input())

def fac(num):
    result = 1
    for i in range(1, num+1):
        result *= i
    return result

for _ in range(t):
    n, m = map(int, input().split())
    print(math.floor(math.factorial(m) / (math.factorial(n)*math.factorial(m-n))))
    
    