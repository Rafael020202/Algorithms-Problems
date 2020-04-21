x = int(input());
y = int(input());

contY = 1;

while (contY < y):
    for column in range(x):
        print( contY ,end = ' ');
        contY += 1;
    print("\n");
