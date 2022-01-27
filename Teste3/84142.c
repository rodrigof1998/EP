#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include "84142_h.h"

//gcc -o 84142 84142.c 84142_h.c -lm


int main(void) 
{ 
	struct dados *data = malloc(20*sizeof(dados_t));
	
	int i=0, opcao;
	do{
		printf("\n1 – Insert a new sensor measurement \n2 – Print saved measurements \n3 – Print all measurements above a given temperature and save them to a file  \n0 – Quit the program \nOption: ");
		scanf("%d",&opcao); 
	}while(opcao<0 || opcao>3);
	
	while(opcao!=0){
		
		switch(opcao){
				case 1: ;
					//Comentei pois estava a dar erro de segmentation fault
					//if(i>0){
					//	struct dados *data = realloc(data,(i+1)*(sizeof(struct dados)));
					//}
					data[i]=registerValue(); 
					i++;
					break;
				case 2:
					printf("IP		| Value\n");
					for(int j=0; j<i;j++){
						printf("%d.%d.%d.%d	| %f \n", data[j].byte1, data[j].byte2, data[j].byte3, data[j].byte4, data[j].temp); 
					}
					break;
				case 3: ;
					float valor; 
					printf("Value: ");
					scanf("%f",&valor);
					char fname[128];
					printf("File name: ");
					scanf("%123s",fname);
					
					FILE *fp = fopen(fname, "w");
					fprintf(fp,"IP		| Value\n");
					for(int j = 0 ; j < i; j ++){
						if(data[j].temp>valor){
							fprintf(fp, "%d.%d.%d.%d	| %f \n", data[j].byte1, data[j].byte2, data[j].byte3, data[j].byte4, data[j].temp);
						}
					}
					fclose(fp);
					break;
				case 0:
					exit(0);
			} 
			printf("\n1 – Insert a new sensor measurement \n2 – Print saved measurements \n3 – Print all measurements above a given temperature and save them to a file  \n0 – Quit the program \nOption: ");
			scanf("%d",&opcao); 
	}
  return 0; 
}

