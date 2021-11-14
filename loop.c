#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,n,sum;
    printf("input n =");
    scanf("%d", &n);
    sum = 0;
    for (i=0; i<=n; i++)
    {
        sum = sum + i;    
    }
    printf("sum = %d", sum);
}





