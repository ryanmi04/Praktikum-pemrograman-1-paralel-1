A = 5
T = 12

print("Diketahui:")
print("Alas =", A, "cm")
print("Tinggi =", T, "cm")

print("Jawab\n")
print("Sisi A=", T, "cm")
sb = (A**2 + T**2)**0.5
print("Sisi B=", round(sb), "cm")
print("Sisi C=", A, "cm")
K = A+T+sb
print("Keliling =", round(K), "cm")
L = A*T/2
print("Luas = ", round(L), "cm")
