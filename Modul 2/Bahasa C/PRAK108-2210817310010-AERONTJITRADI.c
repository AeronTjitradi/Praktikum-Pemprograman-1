#include <stdio.h>

int main(){
    float p,j,phi,k,r;
    p=5;
    j=14;
    phi=3.14;
    k=j/p;
    r=k/(2*phi);

    printf("Diketahui: \n");
    printf("Pak Dengklek mengelilingi taman = %.f\n", p);
    printf("Jarak tempuh Pak Dengklek = %.f\n\n", j);
    printf("Jawaban:\n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer\n", r);

    return 0;
}