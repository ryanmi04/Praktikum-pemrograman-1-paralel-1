def reverse(a, reversed=0):
    while (a != 0):
        reversed *= 10
        reversed += a % 10
        a //= 10
    return reversed


A, B = input("").split()
A = reverse(int(A))
B = reverse(int(B))
C = A + B
print(reverse(C))
