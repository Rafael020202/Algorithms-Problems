x = int(input())
soma = 0

for i in range(x):
    n = int(input())

    for i2 in range(1, n):
        if(n%i2 == 0):
            soma += i2

    if(soma == n):
        print(str(n) + " eh perfeito")
    else:
        print(str(n) + " nao eh perfeito")
    soma = 0

