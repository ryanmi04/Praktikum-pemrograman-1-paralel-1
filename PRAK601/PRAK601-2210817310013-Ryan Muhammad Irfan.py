x, y = map(int, input("").split())
number = list(map(int, input("").split()))
matriks = []
A = 0

for i in range(x):
    matriks.append(number[A: A + y])
    A = A + y

for x in (matriks):
    for number in (x):
        print(number, end=" ")
    print()
