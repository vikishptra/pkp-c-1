#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
int main(){
    int a,b,c;
    printf("Masukkan bilangan pertama anda = ");
    scanf("%d", &a);
    printf("Masukkan bilangan kedua anda = ");
    scanf("%d", &b);
    printf("Masukkan bilangan ketiga anda = ");
    scanf("%d", &c);
	if(a > b){
		//true
		if ( a > c){
			//true
			printf("a= %d \n", a);
		}else{
			//false
			printf("c= %d \n", c);
		}
			
	}else{
		//false
		if(b > c){
			//true
			printf("b= %d \n", b);
		}else{
			//false
			printf("c= %d \n", c);
		}
	}
		
}




