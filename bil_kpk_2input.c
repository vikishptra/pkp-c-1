#include <stdio.h>
#include <stdlib.h>

int main()
{
     int x,y,a,b;

    printf("Masukan dua buah bilangan yang ingin di KPK\n");
    printf("\nBilangan pertama : ");
    scanf("%d",&a);
    printf("\nBilangan kedua   : ");
    scanf("%d",&b);

    //x=a;
    //y=b;
    //while(x!=y)
    for(x=a, y=b; x!=y;)
    {
        if(x<y)
            x=x+a;
        else
            y=y+b;
    }

    printf("kpk = %d\n\n",x); //cetak nilai x atau y sama saja

    return 0;
}
