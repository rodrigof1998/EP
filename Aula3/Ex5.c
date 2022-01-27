#include <stdio.h> 
 
int main(void) 
{ 
  int num1;
  
  printf("Introduza o numero: ");
  scanf("%d", &num1);
  
  if(num1%2==0)
	printf("O numero e par\n");
  else 
	printf("O numero e impar\n");
   
  return 0; 
} 



