#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
#include <math.h>
#include <unistd.h>
int count=0;

int ask(){
	int N=0;
	do{
		printf("Quantos numeros vai colocar? \n");  
		scanf("%d", &N);  
	}while(N<1 ||N>10);
	return N;
}

void read_list(int *num){
	
	do{
		printf("Insira um numero: ");
		scanf("%d",&num[count]); 
		count++;
	}while(count<10 && num[count-1]>0);
}

void mean(int *num){
	int soma=0;
	float media=0;
	for(int i=0; i<count-1;i++){
		soma=soma+num[i];
	}
	media=soma/(count-1);
	printf("A media é: %f",media);
}

void acimamedia(int *num, int N){
	int soma=0;
	float media=0;
	for(int i=0; i<count-1;i++){
		soma=soma+num[i];
	}
	media=soma/(count-1);
	printf("\nNumeros acima da media: ");
	for(int i = 0; i < N; i++){
		if(num[i]>media){
			printf("%d ",num[i]);
		}
	}
}

void stand_deviation(int *num, int N){
	int soma=0;
	float media=0, sum1=0, variance=0, stdDeviation=0;
	for(int i=0; i<count-1;i++){
		soma=soma+num[i];
	}
	media=soma/(count-1);
	for (int i = 0; i < N; i++)
    {
		sum1 = sum1 + pow((num[i] - media), 2);
	}
	variance = sum1 / (float)N;
    stdDeviation = sqrt(variance);
    printf("\nO desvio padrão é %f", stdDeviation);
}

int main(void) 
{ 
	int N=ask();
	//int num[N];
	int* num = (int*)malloc(N * sizeof(int));
	read_list(num);
	mean(num);
	stand_deviation(num, N);
	acimamedia(num, N);
	
	free(num);
	
  return 0; 
}
