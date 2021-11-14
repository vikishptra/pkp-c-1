#include <stdio.h>
#include <stdlib.h>
int main()
{
        int bil,e=1,z,t=0;
        printf("Masukkan angka : ");
        scanf("%d", &bil);
        if(bil<=1){
                printf("%d bukan bilangan prima\n", bil);
                return 0;
        }
       // for (e; e<=bil; e++) {
        while(e<=bil){
                z = bil%e;
                if(z==0)
                        t++;
                if(t>2)
                        break; 
                e++;
        }
        if (t==2)
                printf("%d adalah bilangan prima\n", bil);
        else
                printf("%d bukan bilangan prima\n", bil);
}






