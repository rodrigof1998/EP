#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
#include <math.h>
#include <unistd.h>
int count=0;

void read_list(int *num){
	do{
		printf("Insira um numero: ");
		scanf("%d",&num[count]); 
		count++;
	}while(count<50 && num[count-1]>0);
}

void write_list(int *num){
	printf("A sequencia é: ");
	for(int i=0; i<count-1;i++){
		printf("%d ",num[i]);
	}
}

void max(int *num){
	int max=0;
	for(int i=0; i<count-1;i++){
		if((num[i]>max) || i==0){
		max=num[i];
		}	
	}
	printf("O valor maximo é: %d",max);
}

void min(int *num){
	int min=0;
	for(int i=0; i<count-1;i++){
		if((num[i]<min) || i==0){
		min=num[i];
		}	
	}
	printf("O valor minimo é: %d",min);
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
void even(int *num){
	for(int i=0; i<count-1;i++){
	if(num[i]%2 != 0){
		printf("Existem valores impares na sequencia");
		break;
	}
	if(i==count-2){
		printf("Todos os numeros são pares");
	}							
}	
}

int main(void) 
{ 
	int N=50, opcao;
	
	int num[N];
	do{
		printf("\nAnalysis of a sequence of integers\n1 – Read a sequence \n2 – Write a sequence \n3 – Calculate the maximum value  \n4 - Calculate the minimum value  \n5 - Calculate the mean value \n6 – Test if the sequence includes only even numbers \n10 – End the program \nChoice -> ");
		scanf("%d",&opcao); 
	}while(opcao<=0 || (opcao>7 && opcao!=10));
	
	while(opcao!=10){
		
		switch(opcao){
				case 1:
					read_list(num);
					break;
				case 2:
					write_list(num);
					break;
				case 3:
					max(num);
					break;
				case 4:
					min(num);
					break;
				case 5:
					mean(num);
					break;
				case 6:			
					even(num);
					break;
			} 
			printf("\nAnalysis of a sequence of integers\n1 – Read a sequence \n2 – Write a sequence \n3 – Calculate the maximum value  \n4 - Calculate the minimum value  \n5 - Calculate the mean value \n6 – Test if the sequence includes only even numbers \n10 – End the program \nChoice -> ");
			scanf("%d",&opcao); 
	}
  return 0;
}
