bilangan = int(input("Masukan bilangan:"))


if bilangan == 0:
    print("Nol")

elif bilangan >= 1 and bilangan < 10:
    print("Satuan")

elif bilangan >= 10 and bilangan < 20:
    print("Belasan")

elif bilangan >= 20 and bilangan < 100:
    print("Puluhan")

else:
    print("Anda Menginput Melebihi Limit Bilangan")
