#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
#include <math.h>
#include <unistd.h>




int main(void) 
{ 
	int N=0, soma=0;
	float media=0, sum1=0, variance=0, stdDeviation=0;
	
	do{
		printf("Quantos numeros vai colocar? \n");  
		scanf("%d", &N);  
	}while(N<1 ||N>10);
	
	int num[N];
	
	for(int i=0; i<N;i++){
		printf("Insira um numero: ");
		scanf("%d",&num[i]);  	
		soma=soma+num[i];
	}
	media=soma/(float)N;
	 for (int i = 0; i < N; i++)
    {
		sum1 = sum1 + pow((num[i] - media), 2);
	}
	variance = sum1 / (float)N;
    stdDeviation = sqrt(variance);
    printf("A media dos valores introduzidos é %f", media);
    printf("\nO desvio padrão dos valores introduzidos é %f", stdDeviation);
    
	printf("\nNumeros acima da media: ");
	for(int i = 0; i < N; i++){
		if(num[i]>media){
			printf("%d ",num[i]);
		}
		
	}
	
  return 0; 
}
