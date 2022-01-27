#include <stdio.h> 
 
int main(void) 
{ 
  float num1,num2;
  
  printf("Introduza o numero 1: ");
  scanf("%f", &num1);
  printf("Introduza o numero 2: ");
  scanf("%f", &num2);
  
  if(num1>num2)
	printf("%f\n",num1);
  else if(num1==num2)
	printf("The two numbers are EQUAL\n");
  else 
	printf("%f\n",num2);
   
 
  return 0; 
} 

