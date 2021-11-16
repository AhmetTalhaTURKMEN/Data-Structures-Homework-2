#include<stdio.h>
#include<stdlib.h>
#include <windows.h>

int asal_kontrol(int n, int i)
{
    if(n == i)
        return 0;
    else
    {
        if(n%i == 0)
            return 1;
        else
            asal_kontrol(n, i+1);
    }
}

int main()
{

    int a, b;
    printf("POZITIF SAYIYI GIRIN: ");
    scanf("%d", &a);
    system("cls");
    if(a>1){
    b = asal_kontrol(a, 2);
    printf("SAYI: %d ",a);
    if(b == 1)
    {
        printf("\nASAL DEGIL");
    }
    else
    {
        printf("\nSAYI ASAL");
    }
    return 0;
    }
    else if(a==1 || a==0){
        printf("ASAL DEGIL");
    }
    else if(a<0)
    {
        printf("NEGATIF SAYI GIRME !!!");
        while(5==5){
        Beep(535, 160);
        Beep(800,200);
        }
    }
}
