#include <stdio.h>

int main(){
    float r,t,phi,v,l,k;
    phi=22/7.f;

    scanf("%f %f", &r,&t);
    v=phi*r*r*t;
    l=2*phi*r*(r+t);
    k=2*phi*r;
    printf("Volume = %.2f\n", v);
    printf("Luas = %.2f\n", l);
    printf("Keliling = %.2f", k);

    return 0;
}
