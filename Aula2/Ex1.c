#include <stdio.h> 
 
int main(void) 
{ 
  int best1 = 10; 
  int best2 = 15; 
  int best3 = 20; 
  int p = 15; 
 
  // implicit conversion from int to double 
  double final = 0.5 * (0.4 * best1 + 0.35 * best2 + 0.25 * 
best3) + 0.5 * p; 
 
  printf("Final grade: %4.1f\n", final); 
 
  return 0; 
} 
