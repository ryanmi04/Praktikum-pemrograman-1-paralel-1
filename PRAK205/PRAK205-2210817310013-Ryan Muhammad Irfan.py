A = int(input(""))
B = int(input(""))

C = (B**2 - A**2)**0.5

K = A + B + C
L = C * A / 2

print("")
print("Alas = ", format(C, '.0f'), "cm")
print("Tinggi = ", A, "cm")
print("Keliling = ", format(K, '.0f'), "cm")
print("Luas = ", format(L, '.0f'), "cm^2")
