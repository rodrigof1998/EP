#include <stdio.h> 
 
int main(void) 
{ 
  float c;
  float f;
  
  printf("Introduza a temperatura em graus Celcius(ºC): ");
  scanf("%f", &c);

  f=1.8*c+32;
  
  printf("A temperatura em Fahrenheit: %4.1f\n", f); 
 
  return 0; 
} 

