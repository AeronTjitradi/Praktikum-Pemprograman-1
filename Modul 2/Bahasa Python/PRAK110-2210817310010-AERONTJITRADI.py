import math
s1=12
s3=5
s2=math.sqrt((s1*s1)+(s3*s3))
k=s3+s1+s2
l=(s3*s1)/2
print("Diketahui:")
print("Alas = {} cm".format(s3))
print("Tinggi = {} cm\n".format(s1))
print("Jawab:")
print("Sisi A = {} cm".format(s1))
print("Sisi B = {} cm".format(round(s2)))
print("Sisi C = {} cm".format(s3))
print("Keliling = {} cm".format(round(k)))
print("Luas = {} cm".format(round(l)))