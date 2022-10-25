S = int(input(""))

D = S // 86400
S = S % 86400
H = S // 3600
S %= 3600
M = S // 60
S %= 60

if D >= 1:
    print(f"{D} hari {H:02d}:{M:02d}:{S:02d}")
else:
    print(f"{H:02d}:{M:02d}:{S:02d}")
