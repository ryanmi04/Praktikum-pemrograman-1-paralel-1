def Biodata(tahunLahir, Namaku, Asal):
    tahun_sekarang = 2020
    print("Perkenalkan Nama Saya : ",Namaku)
    print("Umur Saya : ", int(tahun_sekarang) - int(tahunLahir))
    print("Saya Adalah Angkatan : ",tahun_sekarang)
    print("Asal Saya dari :", Asal)

tahunLahir = input("")
Namaku = input("")
Asal = input("")
Biodata(tahunLahir, Namaku, Asal)