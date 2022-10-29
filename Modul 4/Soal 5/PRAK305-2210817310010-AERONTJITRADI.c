#include <stdio.h>

int main()
{
    int hari,jam,menit,detik,in,i=0;

    while(i<=4){
    scanf("%d", &in);
    hari=in/86400;
    jam=(in/3600)%24;
    menit=(in/60)%60;
    detik=in%60;
    if(in<=3600){
        printf("%.2d:%.2d:%.2d\n", jam,menit,detik);
    }else if(in>=3600 && in<=86400){
        printf("%.2d:%.2d:%.2d\n", hari,jam,menit,detik);
    }else if(in>=86400){
        printf("%d hari %.2d:%.2d:%.2d\n", hari,jam,menit,detik);
    }
    i++;
    }
}
