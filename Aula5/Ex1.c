#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
#include <unistd.h>
 

//int valores[10];

int main(void) 
{ 
	int N;
	
	do{
		printf("Quantos numeros vai colocar? \n");  
		scanf("%d", &N);  
	}while(N<1 ||N>10);
	
	int num[N];
	
	for(int i=0; i<N;i++){
		printf("Insira um numero: ");
		scanf("%d",&num[i]);  	
	}
	printf("Array: ");
	for(int i=N-1;i>=0;i--){
		printf("%d ",num[i]);
	}
	
  return 0; 
}
