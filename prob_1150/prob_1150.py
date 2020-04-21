val = input().split(" ")

x = int(val[0])
cont = 1
z = 0
aux = 0
aux2 = 0

for i in range(len(val) - 1):
    if int(val[i + 1]) > x:
        z = int(val[i + 1])
        break

while aux2 < z:
    aux += 1
    aux2 += x + aux
    print(aux2)
    cont += 1

print(cont)