#include <stdio.h>
#include <stdlib.h>
int main() {
   int bil,x,y,sum=0;
   printf("Masukan Bilangan :");
   scanf("%d",&bil);
   y = bil;
   while(!(bil==0)){
       x  = bil%10;
       sum = sum+x;
       bil=bil/10;
   }
   printf("Jadi jumlah tiap digit dari %d adalah %d digit", y,sum);
   return 0;
}







