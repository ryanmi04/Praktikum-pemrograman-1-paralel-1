x, y= (input("")).split()
x = int(x)
y = int(y)
A = x
B = y
print(x, y, end=" - ")

if x > y:
    z = (x) - (y)
    for i in range (z - 1):
        x -=1
        y +=1
        print(x, y, end=" - ")

elif x < y:
    z = (y) - (x)
    for i in range (z - 1):
        x +=1
        y -=1
        print(x, y, end=" - ")

print(B, A)
    