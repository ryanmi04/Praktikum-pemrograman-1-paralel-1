def MaxBilangan(a, b, c, d):
    if a > b and a > c and a > d:
        return a
    elif b > a and b > c and b > d:
        return b
    elif c > a and c > b and c > d:
        return c
    else:
        return d


a, b, c, d = input("").split()
int(a)
int(b)
int(c)
int(d)

hasil = MaxBilangan(a, b, c, d)
print(hasil)
