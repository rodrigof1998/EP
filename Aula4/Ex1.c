#include <stdio.h> 
 
int main(void) 
{ 
  int n=0, min=0, max=0,contador=0, soma=0, media=0;
  
  do{
	  printf("Insira um numero: "); 
	  scanf("%d",&n);
	  if(((n<min) & (n!=0) )|| contador==0){
		min=n;  
	  }
	  if(((n>max) & (n!=0)) || contador==0){
		max=n;
	  }
	  soma+=n;
	  contador++;
	  
    } while(n!=0);
    media=soma/contador;
	printf("O numero maximo é: %d\n",max);
	printf("O numero minimo é: %d\n",min);
	printf("O numero de elementos introduzido é: %d\n",contador);
	printf("A media dos numero introduzidos é: %d\n",media);
  
		  
  return 0; 
} 
