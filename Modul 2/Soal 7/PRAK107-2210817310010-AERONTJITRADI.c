#include <stdio.h>

int main(){
    int s1,s2,s3,k,hpm,hasil;
    s1=4;
    s2=5;
    s3=7;
    hpm=85000;
    k=s1+s2+s3;
    hasil=k*hpm;

    printf("Diketahui:\n");
    printf("Panjang Segitiga Berturut-turut adalah %d, %d, dan %d\n", s1,s2,s3);
    printf("Keliling Tanah Pak Dengklek adalah %d\n", k);
    printf("Harga Tanah Per Meter adalah %d\n", hpm);
    printf("Jawaban:\n");
    printf("Biaya yang diperlukan Pak Dengklek adalah: Rp %d\n", hasil);

    return 0;
}