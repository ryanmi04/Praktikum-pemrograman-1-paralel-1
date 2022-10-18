phi = 22/7

r = int(input(""))
t = int(input(""))

V = phi * r * r * t
L = 2 * phi * r * (r + t)
K = 2 * phi * r

print("")
print("Volume = ", format(V, '.2f'))
print("Luas = ", format(L, '.2f'))
print("Keliling = ", format(K, '.2f'))