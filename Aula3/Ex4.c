#include <stdio.h> 
 
int main(void) 
{ 
  float num1,num2,num3;
  
  printf("Introduza o numero 1: ");
  scanf("%f", &num1);
  printf("Introduza o numero 2: ");
  scanf("%f", &num2);
  printf("Introduza o numero 3: ");
  scanf("%f", &num3);
  
  if(num1>num2)
	if(num1>num3)
		printf("%f\n",num1);
	else if(num3>num2)
		printf("%f\n",num3);
	else 
		printf("%f\n",num2);
  else if(num2>num3)
	printf("%f\n",num2);
  else 
	printf("%f\n",num3);
   
 //printf("The two numbers are EQUAL\n");
  return 0; 
} 


