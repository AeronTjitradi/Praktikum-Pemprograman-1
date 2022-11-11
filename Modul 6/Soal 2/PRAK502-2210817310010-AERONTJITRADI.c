#include <stdio.h>
#include <math.h>

int hitung(int nilail, int nilai2){ 
    return nilail-nilai2;
}
int mutlak(int angka){
    return abs (angka);
}

int main(){
int a,b,c,d,Hasil;
    scanf("%d", &a);
    scanf("%d", &c);
    scanf("%d", &b);
    scanf("%d", &d);
    Hasil=hitung(a,b)+hitung(c,d);
    printf("%d", mutlak(Hasil));
    
    return 0;
    }