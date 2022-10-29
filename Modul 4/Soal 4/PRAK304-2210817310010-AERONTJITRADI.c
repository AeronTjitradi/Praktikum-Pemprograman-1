#include <stdio.h>

int main()
{
    int nilai,i=0;

    while(i<=5){
    scanf("%d", &nilai);

    if(nilai==0){
        printf("Nol\n");
    }else if(nilai<=10){
        printf("Satuan\n");
    }else if(nilai>=99){
        printf("Anda Menginput Melebihi Limit Bilangan\n");
    }else if(nilai>=19 && nilai<=100){
        printf("Puluhan\n");
    }else if(nilai>=10 && nilai<=20){
        printf("Belasan\n");
    }
    i++;
    }
}
