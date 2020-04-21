x = input().split(" ")

a = int(x[0])
n = int(x[1])

soma = 0
aux = 2

if(n <= 0):
    while(n <= 0):
        n = int(x[aux])
        aux += 1

for i in range(n):
    aux = i + a
    soma += aux

print("%d" %soma)

