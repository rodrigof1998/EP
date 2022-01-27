#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include "Ex1_h.h"

//gcc -o Ex1 Ex1.c Ex1_h.c -lm

int main(void) 
{ 
	struct Time *Entrada = malloc(sizeof(Time_t));
	struct Time *Saida = malloc(sizeof(Time_t));
	struct Time *diferenca = malloc(sizeof(Time_t));
	struct Student *Estudante1 = malloc(sizeof(struct Student));
	
	int i=0, opcao;
	do{
		printf("\n1 – Registar um estudante \n2 – Lista de estudantes \n3 – Calcular media de permanencia no departamento  \n4 - Terminar programa \n");
		scanf("%d",&opcao); 
	}while(opcao<0 || opcao>4);
	
	while(opcao!=0){
		
		switch(opcao){
				case 1:
					if(i>0){
						struct Student *Estudante1 = realloc(Estudante1,(i+1)*(sizeof(struct Student)));
						struct Time *Entrada = realloc(Entrada,(i+1)*(sizeof(struct Time)));
						struct Time *Saida = realloc(Saida,(i+1)*(sizeof(struct Time)));
					}
					printf("Introduza os dados do aluno.\n");
					Estudante1[i]=ask_Student();
					
					printf("Introduza a hora de entrada.\n");
					Entrada[i]=ask_Time();
					print(&Entrada[i]);
					
					printf("Introduza a hora de saida.\n");
					Saida[i]=ask_Time();
					print(&Saida[i]);
					
					diferenca[i]=diference_Time(&Entrada[i], &Saida[i]);
					
					i++;
					break;
				case 2:
					for(int j=0; j<i;j++){
						printf("Estudante %d: ",(j+1));
						printf("\nNome: %s ",Estudante1[j].Nome);
						printf("\nEntrada: ");
						print(&Entrada[j]);
						printf("Saida: ");
						print(&Saida[j]);
						printf("Permanencia no departamento: ");
						print(&diferenca[j]);
					}
					break;
				case 3:
					
					break;
				case 4:
					free(Entrada);
					free(Saida);
					free(Estudante1);
					free(diferenca);						
					exit(0);
					break;
			} 
			printf("\n1 – Registar um estudante \n2 – Lista de estudantes \n3 – Calcular media de permanencia no departamento  \n4 - Terminar programa \n");
			scanf("%d",&opcao); 
	}
	
}


