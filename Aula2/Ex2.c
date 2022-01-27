#include <stdio.h> 
 
int main(void) 
{ 
  int best1; 
  int best2; 
  int best3; 
  int p; 
  const float percent1=0.5;
  const float percent2=0.4;
  const float percent3=0.35;
  const float percent4=0.25;  
  const float percent5=0.5;
  
  printf("Introduza a nota do teste 1: ");
  scanf("%d", &best1);
  printf("Introduza a nota do teste 2: ");
  scanf("%d", &best2);
  printf("Introduza a nota do teste 3: ");
  scanf("%d", &best3);
  printf("Introduza a nota da pratica: ");
  scanf("%d", &p);
 
  // implicit conversion from int to double 
  double final = percent1 * (percent2 * best1 + percent3 * best2 + percent4 * 
best3) + percent5 * p; 
 
  printf("Final grade: %4.1f\n", final); 
 
  return 0; 
} 
