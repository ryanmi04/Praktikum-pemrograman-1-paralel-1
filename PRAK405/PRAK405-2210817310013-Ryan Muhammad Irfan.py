A,B = input().split()
A = int(A) ; B = int(B)
for i in range (1,A+1):
    jarak=i
    while jarak >1:
        print("(%d * %d) + "%(jarak,B), end='');jarak-=1
    o = 1 ; hasil=(i * B)
    while o<i:
        hasil += ( o * B) ; o+=1
    print("(%d * %d) = %d"%(jarak,B,hasil))
p=1 ; q=1 ;t = 0
while p<=A:
     t += q * B ; q += p + 1 ; p +=1
print("%d"%(t)) 