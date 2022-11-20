#include <stdio.h>

int main(){
    int baris,isi,i;
    scanf("%d", &baris);
    int angka[baris];
    for(i=0; i<baris; i++){
        scanf("%d", &isi);
        angka[i]=isi;
    }
    for(i=0; i<baris; i++){
        printf("%d ", angka[i]*(i+1));
    }
}