h, m = map(int, input().split())
cook_t = int(input())

h = h + (m+cook_t)//60
m = (m+cook_t)%60

if(h >= 24):
    h = h - 24
    
print(h, m)