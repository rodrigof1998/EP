#include <stdio.h> 
 

int sum(int a, int b){
	int soma=0;
	for(int i=a; i<=b;i++){
		soma=soma+i;
	}
	return soma; 
}



int main(void) 
{ 
	int numero1, numero2;
	printf("Insira o primeiro numero inteiro positivo: ");
	scanf("%d",&numero1);
	printf("Insira o primeiro numero inteiro positivo: ");
	scanf("%d",&numero2);
	
	printf("A soma dos numeros entre %d e %d inclusive é: %d\n",numero1, numero2, sum(numero1,numero2));  
	
	
  return 0; 
} 
