#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
#include <math.h>
#include <unistd.h>


int main(void) 
{ 
	int N=50, count=0, max=0, min=0, soma=0, opcao;
	float media=0;
	int num[N];
	do{
		printf("\nAnalysis of a sequence of integers\n1 – Read a sequence \n2 – Write a sequence \n3 – Calculate the maximum value  \n4 - Calculate the minimum value  \n5 - Calculate the mean value \n6 – Test if the sequence includes only even numbers \n10 – End the program \nChoice -> ");
		scanf("%d",&opcao); 
	}while(opcao<=0 || (opcao>7 && opcao!=10));
	
	while(opcao!=10){
		
		switch(opcao){
				case 1:
					do{
						printf("Insira um numero: ");
						scanf("%d",&num[count]); 
						count++;
					}while(count<50 && num[count-1]>0);
					break;
				case 2:
					printf("A sequencia é: ");
					for(int i=0; i<count-1;i++){
						printf("%d ",num[i]);
					}
					break;
				case 3:
					for(int i=0; i<count-1;i++){
						if((num[i]>max) || i==0){
						max=num[i];
						}	
					}
					printf("O valor maximo é: %d",max);
					break;
				case 4:
					for(int i=0; i<count-1;i++){
						if((num[i]<min) || i==0){
						min=num[i];
						}	
					}
					printf("O valor minimo é: %d",min);
					break;
				case 5:
					for(int i=0; i<count-1;i++){
						soma=soma+num[i];
					}
					media=soma/(count-1);
					printf("A media é: %f",media);
					break;
				case 6:			
					for(int i=0; i<count-1;i++){
						if(num[i]%2 != 0){
							printf("Existem valores impares na sequencia");
							break;
						}
						if(i==count-2){
							printf("Todos os numeros são pares");
						}							
					}	
					break;
			} 
			printf("\nAnalysis of a sequence of integers\n1 – Read a sequence \n2 – Write a sequence \n3 – Calculate the maximum value  \n4 - Calculate the minimum value  \n5 - Calculate the mean value \n6 – Test if the sequence includes only even numbers \n10 – End the program \nChoice -> ");
			scanf("%d",&opcao); 
	}
	
	
	
  return 0;
}
