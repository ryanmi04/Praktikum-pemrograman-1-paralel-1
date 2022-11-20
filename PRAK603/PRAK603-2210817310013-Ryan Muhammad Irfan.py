A = 0
x, y = map(int, input("").split())
matriks1 = []
matriks2 = []

if x == y:
    number1 = list(map(int, input("").split()))
    number2 = list(map(int, input("").split()))
    matriks1.append(number1[A: A + x])
    matriks2.append(number2[A: A + x])

    for i in range(0, x):
        print(matriks1[0][i]*matriks2[0][i], end=" ")

else:
    print("Jumlah tidak sama")
