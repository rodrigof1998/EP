#include <stdio.h> 
 
 
float BMI(float weight, float height){
	return (weight/(height*height));
}

int main(void) 
{ 
	float peso=0;
	float altura=0;
	printf("Insira a altura em metros: ");
	scanf("%f",&altura);
	printf("Insira o peso em kg: ");
	scanf("%f",&peso);
	printf("O BMI é: %f\n", BMI(peso,altura));
 
  return 0; 
}
