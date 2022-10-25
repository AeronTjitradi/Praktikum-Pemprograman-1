#include <stdio.h>

int main(){
    char nama[50],NIM[20],kp[2],h[50],ttl[20],alamat[20],telp[12];
    printf("Nama\t\t\t: ");
    gets(nama);
    printf("NIM\t\t\t: ");
    gets(NIM);
    printf("Kelas Paralel\t\t: ");
    gets(kp);
    printf("Tempat/Tanggal Lahir\t: ");
    gets(ttl);
    printf("Alamat\t\t\t: ");
    gets(alamat);
    printf("Hobby\t\t\t: ");
    gets(h);
    printf("No. HP\t\t\t: ");
    gets(telp);

    printf("\nNama\t\t\t: %s", nama);
    printf("\nNIM\t\t\t: %s", NIM);
    printf("\nKelas Paralel\t\t: %s", kp);
    printf("\nTempat/Tanggal Lahir\t: %s", ttl);
    printf("\nAlamat\t\t\t: %s", alamat);
    printf("\nHobby\t\t\t: %s", h);
    printf("\nNo. HP\t\t\t: %s", telp);

    return 0;
}
