#include<stdio.h>
#include <stdlib.h>

void carpan_ayir( int x,int k)
{
        if( x == 1 )
                return;
        if(x%k == 0){
            carpan_ayir(x/k,k);
            printf("%d ",k);
        }
        else {
            carpan_ayir(x,k+1);
        }
}
int main( )
{
        int a;
        printf("Sayiyi girin: ");
        scanf("%d",&a);
        system("cls");
        printf("input : %d\noutput: ",a);
        carpan_ayir(a,2);
        return 0;

}





