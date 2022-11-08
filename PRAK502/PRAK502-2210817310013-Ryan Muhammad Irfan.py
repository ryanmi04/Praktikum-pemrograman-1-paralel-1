def hitung(nilai1, nilai2):
    return (nilai1-nilai2)


def mutlak(angka):
    return abs(angka)


a, c, b, d = input("").split()

Hasil = hitung(int(a), int(b)) + hitung(int(c), int(d))
print(mutlak(Hasil))
