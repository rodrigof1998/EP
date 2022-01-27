#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
#include <math.h>
#include <unistd.h>
#include <string.h>

void mean(float *num, int count){
	float soma=0;
	float media=0;
	for(int i=0; i<count-1;i++){
		soma=soma+num[i];
	}
	media=soma/(count-1);
	printf("A media é: %f",media);
}

void acimamedia(float *num, int N){
	int soma=0;
	float media=0;
	for(int i=0; i<N-1;i++){
		soma=soma+num[i];
	}
	media=soma/(N-1);
	printf("\nNumeros acima da media: ");
	for(int i = 0; i < N; i++){
		if(num[i]>media){
			printf("%f ",num[i]);
		}
	}
}

void stand_deviation(float *num, int N){
	int soma=0;
	float media=0, sum1=0, variance=0, stdDeviation=0;
	for(int i=0; i<N-1;i++){
		soma=soma+num[i];
	}
	media=soma/(N-1);
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
	float *a = malloc(sizeof(float));
	
	char fname[128];
	printf("Enter .txt file name\n");
	scanf("%123s",fname);

	FILE *fp = fopen(fname, "r");
	
	int i=0;
	while(fscanf(fp, "%f", &a[i])!=EOF){
		i++;
		a = realloc(a,(i+1)*(sizeof(float)));
	}
		
	for(int j=0 ; j < i; j ++)
	printf("a[%d] = %f\n", j, a[j]);
	
	mean(a, i+1);
	stand_deviation(a, i+1);
	acimamedia(a, i+1);
	
	free(a);
	fclose(fp);
	
	

	
	
  return 0; 
}
