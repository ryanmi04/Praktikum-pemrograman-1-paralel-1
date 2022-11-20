x = int(input(""))
number = list(map(int, input("").split()))
matriks = []
A = 0
for i in range(0, x):
    matriks.append(number[A: A + x])

for i in range(0, x):

    print(matriks[0][i] * (i+1), end=" ")
