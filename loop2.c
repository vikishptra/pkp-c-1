#include <stdio.h>
#include <stdlib.h>
int main()
{

    int a,b,n,sum,an,i;

    printf("Masukkan Nilai a= ");
    scanf("%d", &a);

    printf("Masukkan Nilai b= ");
    scanf("%d", &b);

    printf("Masukkan Nilai n= ");
    scanf("%d", &n);

    sum = 0;
    for (i=0; i<5; i++)
    {
        an = a + b * i;
        sum = sum + an;

        printf("%3d", an);
        

    }

    printf("\n Jumlah = %3d", sum);
}






