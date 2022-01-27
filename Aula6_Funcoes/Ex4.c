#include <stdio.h> 
 
 
int max2(int num1, int num2){
	if(num1>num2)
		return num1;
	else return num2;
}

int main(void) 
{ 

	printf("Maximo é: %d\n", max2(4,-5));
	printf("Maximo é: %d\n", max2(-3,-2));
 
  return 0; 
} 

