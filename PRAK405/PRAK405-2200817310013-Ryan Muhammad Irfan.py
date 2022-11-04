X, Y = input().split()
X = int(X)
Y = int(Y)
for i in range(1, X+1):
    jarak = i
    while jarak > 1:
        print("(%d * %d) + " % (jarak, Y), end='')
        jarak -= 1
    Z = 1
    hasil = (i * Y)
    while Z < i:
        hasil += (Z * Y)
        Z += 1
    print("(%d * %d) = %d" % (jarak, Y, hasil))
A = 1
B = 1
C = 0
while A <= X:
    C += B * Y
    B += A + 1
    A += 1
print("%d" % (C))
