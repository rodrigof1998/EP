#include <stdio.h> 
 
 
int max2(int num1, int num2){
	if(num1>num2)
		return num1;
	else return num2;
}
int max3(int num1, int num2, int num3){
	
	return max2(max2(num1,num2),num3);
	
}

int main(void) 
{ 

	printf("Maximo é: %d\n", max3(4,-5,0));
	printf("Maximo é: %d\n", max3(-3,-2,0));
 
  return 0; 
} 
