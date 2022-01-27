#include <stdio.h> 
 

int gcd(int a, int b){
	while(a!=b){
		if(a>b){
			a=a-b;
		}else{
			b=b-a;
		}	
	}
	return a;
}



int main(void) 
{ 
	int numero1, numero2;
	printf("Insira o primeiro numero inteiro positivo: ");
	scanf("%d",&numero1);
	printf("Insira o primeiro numero inteiro positivo: ");
	scanf("%d",&numero2);
	
	printf("O maximo divisor comum é: %d\n",gcd(numero1,numero2));  
	
	
  return 0; 
} 
