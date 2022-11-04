#include <stdio.h>

int main()
{
    int a; 
    float b,c,d,e,f,g;
    menu :
    printf("Pilih Program\n1.Penjumlahan\n2.Pengurangan\n3.Perkalian\n4.pembagian\n5.Exit\n");
    printf("Masukkan Pilihan : ");
    scanf("%d",&a);
    if(a>=1 && a<=4){
        printf("Masukkan nilai pertama : ");scanf("%f",&b);
        printf("Masukkan nilai kedua : ");scanf("%f", &c);
            if (a==1){d = b + c;
            printf("Hasil Penjumlahan antara %.2f dan %.2f adalah %.2f\n\n",b,c,d);
            goto menu;}
            else if(a==2){e = b - c;
            printf("Hasil Pengurangan antara %.2f dan %.2f adalah %.2f\n\n",b,c,e);
            goto menu;}
            else if(a==3){f = b * c;
            printf("Hasil Perkalian antara %.2f dan %.2f adalah %.2f\n\n",b,c,f);
            goto menu;}
            else if(a==4){g = b/c;
            printf("Hasil Pembagian antara %.2f dan %.2f adalah %.2f\n\n",b,c,g);
            goto menu;}}
    else if(a==5){printf("Terima kasih telah menggunakan kalkulator Aeron Tjitradi\n");
    }
    else{printf("\nInput anda salah, silahkan coba lagi\n\n");
    goto menu;}
}