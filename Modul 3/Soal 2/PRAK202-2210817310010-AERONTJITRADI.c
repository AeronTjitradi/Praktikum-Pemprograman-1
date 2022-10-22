#include <stdio.h>

int main(){
    float a,b,h;
    printf("Masukan Nilai Pertama : ");
    scanf("%f", &a);
    printf("Masukan Nilai Kedua : ");
    scanf("%f", &b);
    h=a+b;
    printf("Hasil dari penjumlahan nilai pertama \"%.2f\" dan nilai kedua \"%.1f\" adalah \"%.2f\"", a,b,h);

    return 0;
}
