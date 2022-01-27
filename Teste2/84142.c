#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
#include <string.h>
#include <math.h>
#include <unistd.h>
#include <ctype.h>

int count=0;

struct  Carro {int numero; int voltas; char nome[128]; char equipa[128];};

typedef struct Carro Carro_t ;

void novo_carro(Carro_t *pCar){
	int n_carro=0, n_voltas=0;
	do{
		printf("Insira numero do carro:\n");
		scanf("%d",&n_carro);
	}while(n_carro<1 && n_carro>10);
	pCar[count].numero=n_carro; 
	do{
		printf("Insira numero de voltas:\n");
		scanf("%d",&n_voltas); 
	}while(n_voltas<0 && n_voltas>100);
	pCar[count].voltas=n_voltas; 
	printf("Insira nome do piloto:\n");
	scanf("%127s",pCar[count].nome);
	printf("Insira nome da equipa:\n");
	scanf("%127s",pCar[count].equipa);
	count++;
}

void media_voltas(Carro_t *pCar){
	int soma=0;
	float media=0;
	if(count==0){
		printf("Ainda não foram introduzidos dados. \n");
	}else{
		for(int i=0; i<count;i++){
			soma+=pCar[i].voltas;			
		}
		media=soma/count;
		printf("Numero medio de voltas ate ao momento: %1.1f \n",media);
		
	}
}

void max_min(Carro_t *pCar){
	int max=0, min=0, iMax=0, iMin=0;
	for(int i=0; i<count;i++){
		if((pCar[i].voltas>max) || i==0){
			max=pCar[i].voltas;
			iMax=i;
		}
		if((pCar[i].voltas<min) || i==0){
			min=pCar[i].voltas;
			iMin=i;
		}
	}
	printf("Numero maximo de voltas: %s, %s, carro %d, %d voltas \n",pCar[iMax].nome, pCar[iMax].equipa, pCar[iMax].numero, pCar[iMax].voltas );
	printf("Numero minimo de voltas: %s, %s, carro %d, %d voltas \n",pCar[iMin].nome, pCar[iMin].equipa, pCar[iMin].numero, pCar[iMin].voltas );
}

void histograma(Carro_t *pCar){
	int ordem[10];
	for(int i=0; i<count;i++){
		ordem[pCar[i].numero]=1;
	}
	for(int i=0; i<=10;i++){
		if(ordem[i]==1){
			printf("%d| ",pCar[i].numero);
			for(int j=0; j<=pCar[i].voltas;j++){
				printf("#");
			}
			printf("\n");
		}
	}
	
}

void abrev(char *line){
	int counter=0;
	for(int i=0; i<=strlen(line);i++){
		if(counter<3){
			if(i==0){
				printf("%c",line[i]);
				counter++;
			}
			if(line[i]==' ' && line[i+1]!=' ' && line[i+2]!=' ' && line[i+3]!=' '){
				printf("%c",line[i+1]);
				counter++;
			}
		}
	}
}

void lista(Carro_t *pCar){
	int max=0,  iMax=0;
	printf("Pos		Carro 		Piloto		Equipas		Voltas\n");
	for(int i=1; i<=count;i++){
		
		for(int j=0; j<count;j++){
			if((pCar[j].voltas>max) || j==0){
				max=pCar[i].voltas;
				iMax=j;
			}
			
		}
		printf("%d		%d		", i, pCar[i].numero);
	}
	
}

int main(void) 
{ 
	int N=10, opcao;
	
	Carro_t car[N];
	do{
		printf("\n1 – Inserir nova contagem de voltas para um carro \n2 – Imprimir o valor médio de voltas de todos os carros inseridos \n3 – Imprimir os numeros e voltas dos carros com maior e menor número de voltas  \n4 - Histograma de voltas \n5 – Imprimir as medidas guardadas em array \n0 – Terminar o programa \n");
		scanf("%d",&opcao); 
	}while(opcao<0 || opcao>5);
	
	while(opcao!=0){
		
		switch(opcao){
				case 1:
					novo_carro(car);
					break;
				case 2:
					media_voltas(car);
					break;
				case 3:
					max_min(car);
					break;
				case 4:
					histograma(car);
					break;
				case 5:
					//mean(num);
					break;
			} 
			printf("\n1 – Inserir nova contagem de voltas para um carro \n2 – Imprimir o valor médio de voltas de todos os carros inseridos \n3 – Imprimir os numeros e voltas dos carros com maior e menor número de voltas  \n4 - Histograma de voltas \n5 – Imprimir as medidas guardadas em array \n0 – Terminar o programa \n");
			scanf("%d",&opcao); 
	}
  return 0;
}
