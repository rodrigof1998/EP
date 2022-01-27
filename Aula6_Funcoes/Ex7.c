#include <stdio.h> 
 
 
int digits(int n){
	int count=0;
	 while(n!=0)  
   {  
       n=n/10;  
       count++;  
   } 
   return count;
}


int main(void) 
{ 
	int numero;
	printf("Insira um numero inteiro positivo: ");
	scanf("%d",&numero);
	printf("O numero de digitos do numero é: %d\n",digits(numero));  
	
  return 0; 
} 

