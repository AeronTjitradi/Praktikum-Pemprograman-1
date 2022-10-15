#include <stdio.h>
#include <math.h>

int main(){
    float s1,s2,s3,k,l;
    s1=12;
    s3=5;
    s2=sqrt((s1*s1)+(s3*s3));
    k=s1+s2+s3;
    l=0.5*s1*s3;

    printf("Diketahui: \n");
    printf("Alas = %.f cm\n", s3);
    printf("Tinggi = %.f cm\n\n", s1);
    printf("Jawab: \n");
    printf("Sisi A = %.f cm\n", s1);
    printf("Sisi B = %.f cm\n", s2);
    printf("Sisi C = %.f cm\n", s3);
    printf("Keliling = %.f cm\n", k);
    printf("Luas = %.f cm", l);

    return 0;
}