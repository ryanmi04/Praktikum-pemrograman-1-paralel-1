x, y= (input("")).split()
x = int(x)
y = int(y)
print(x, y, end=" - ")


if x > y:
    z = (x) - (y)
    for i in range (z - 1):
        x -=i
        y +=i
        print(x, y, end=" - ")

elif x < y:
    z = (y) - (x)
    for i in range (z - 1):
        x +=i
        y -+i
        print(x, y, end=" - ")

print(x, y)
    