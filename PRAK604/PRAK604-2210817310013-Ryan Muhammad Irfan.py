A = 0
B = 0
karakter1 = list(input(""))
karakter2 = list(input(""))

panjang1 = len(karakter1)
panjang2 = len(karakter2)

if panjang1 != panjang2:
    print("Panjang kalimat berbeda, pesan palsu")

else:
    for i in range(panjang1):
        if " " in karakter1[i] and " " in karakter2[i]:
            continue

        elif karakter1[i] == karakter2[i]:
            print("*", end="")
            A += 1

        else:
            print("#", end="")
            B += 1
    print("\n* = ", A)
    print("# = ", B)

    if A >= B:
        print("Pesan Asli")
    else:
        print("Pesan Palsu")
