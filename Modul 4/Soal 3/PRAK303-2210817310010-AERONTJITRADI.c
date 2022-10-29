#include <stdio.h>

int main()
{
    int nilai,i=0;

    while(i<=2){
    scanf("%d", &nilai);

    if(nilai==0){
        printf("Nol\n");
    }else if(nilai<=0){
        printf("Negatif\n");
    }else if(nilai>=0){
        printf("Positif\n");
    }
    i++;
    }
}
