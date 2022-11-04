while True:
    print("Pilih program")
    print("1. Penjumlahan")
    print("2. Pengurangan")
    print("3. Perkalian")
    print("4. Pembagian")
    print("5. EXIT")

    x = int(input("Masukan Pilihan : "))
    if x == 5:
        print("Terimakasih, telah menggunakan kalkulator RYANMUHAMMADIRFAN")
        break
    elif x <= 0 or x >= 6:
        print("Input anda salah, silahkan coba lagi\n")
        continue

    y = float(input("Masukan nilai pertama : "))
    z = float(input("Masukan nilai kedua : "))

    if x == 1:
        h = y + z
        print(f"Hasil perkalian antara {format(y, '.2f')} dengan {format(z, '.2f')} adalah {format(h, '.2f')}\n")

    elif x == 2:
        h = y - z
        print(f"Hasil perkalian antara {format(y, '.2f')} dengan {format(z, '.2f')} adalah {format(h, '.2f')}\n")

    elif x == 3:
        h = y * z
        print(f"Hasil perkalian antara {format(y, '.2f')} dengan {format(z, '.2f')} adalah {format(h, '.2f')}\n")

    elif x == 4:
        h = y / z
        print(f"Hasil perkalian antara {format(y, '.2f')} dengan {format(z, '.2f')} adalah {format(h, '.2f')}\n")
