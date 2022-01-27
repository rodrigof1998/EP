#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
#include <math.h>
#include <unistd.h>



int Fibonacci(int n){
	int t1=0, t2=1;
	int nextTerm=t1+t2; 
	for (int i = 3; i <= n; ++i) {
		t1 = t2;
		t2 = nextTerm;
		nextTerm = t1 + t2;
	}
	return nextTerm; 
}





int main(void) 
{ 
	int num; 
	printf("Fibronacci de: ");  
	scanf("%d", &num);  
	printf("O fibronaci de %d é: %d\n",num, Fibonacci(num)); 
	return 0;
}
