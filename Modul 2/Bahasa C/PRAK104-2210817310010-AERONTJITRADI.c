#include <stdio.h>

int main(){
    float a,b,d1,d2,hasil1,hasil2;
    a=400000;
    b=350000;
    d1=13;
    d2=21;
    hasil1=(a-d1/100*a);
    hasil2=(b-d2/100*b);

    printf("Harga sepatu A adalah %.f\n", a);
    printf("Harga sepatu B adalah %.f\n", b);
    printf("Sepatu A mendapat diskon 13%% sehingga harganya menjadi %.f\n", hasil1);
    printf("Sepatu B mendapat diskon 21%% sehingga harganya menjadi %.f", hasil2);

    return 0;
}