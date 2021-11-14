#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num, x, y, z;
    
    printf("masukkan num = ");
    scanf("%d", &num);
    
    //x = 0;   
    y = 1;
    
    for (x=0; num >= x;)
    {
        z = x+y;
        
        printf("%d\n", x);
        
        x=y;
        y=z;
  
    }
}





