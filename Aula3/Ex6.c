#include <stdio.h> 
 
int main(void) 
{ 
  float litros;
  float preco=1.40;
  
  printf("Introduza a quantidade de litros: ");
  scanf("%f", &litros);
  
  if(litros>40){
	preco=preco*0.9;
	printf("O preço a pagar é: %4.1f euros\n",litros*preco);
  }else 
	printf("O preço a pagar é: %4.1f euros\n",litros*preco);
   
  return 0; 
} 

