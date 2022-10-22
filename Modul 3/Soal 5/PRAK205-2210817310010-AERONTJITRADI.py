import math
a,b = input(). split()
a = int(a)
b = int(b)
c = math.sqrt(pow(b,2)-pow(a,2))
k = a+b+c
l = 0.5*c*a
print("Alas = %d" %c)
print("Tinggi = %d" %a)
print("Keliling = %d" %k)
print("Luas = %dcm^2\n" %l)

aa = int(input())
bb = int(input())
cc = math.sqrt(pow(bb,2)-pow(aa,2))
kk = aa+bb+cc
ll = 0.5*cc*aa
print("Alas = %d cm" %cc)
print("Tinggi = %d cm" %aa)
print("Keliling = %d cm" %kk)
print("Luas = %d cm^2" %ll)