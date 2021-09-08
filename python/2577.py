a = input()
b = input()
c = input()

result = int(a)*int(b)*int(c)

num = list(str(result))

for i in range(10):
    print(num.count(str(i)))