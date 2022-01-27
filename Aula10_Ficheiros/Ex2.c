#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

struct Time {int hour; int minute; int second;};

typedef struct Time Time_t ;

struct Student {int N_Mec; char Nome[128];};

typedef struct Student Student_t ;

Time_t ask_Time(){
	int hr, min, sec, count=0;
	Time_t tempo;
	do{
		if(count>0)
			printf("Horas inseridas incorretas: Tente outra vez. \n ");
		printf("Insira as horas: ");
		scanf("%d",&hr);
		printf("Insira os minutos: ");
		scanf("%d",&min);
		printf("Insira os segundos: ");
		scanf("%d",&sec);
		count++;
	}while(hr>23 || hr<0 || min>60 || min<0 || sec>60 || sec<0);
	tempo.hour=hr;
	tempo.minute=min;
	tempo.second=sec;
	return tempo;
}

int print(const Time_t *pTime){
	printf("%2d:%2d:%2d \n",pTime->hour,pTime->minute,pTime->second);
	return 0;
}

Time_t diference_Time(const Time_t *pTime1, const Time_t *pTime2){
	
	Time_t diferenca;
	
	diferenca.hour=pTime2->hour - pTime1->hour;
	diferenca.minute=pTime2->minute - pTime1->minute;
	diferenca.second=pTime2->second - pTime1->second;
	if(diferenca.hour<0 || diferenca.minute<0 || diferenca.second<0)
		printf("Impossivel");
		
	return diferenca;
}

Student_t ask_Student(){
	int nr;
	char nome[128];
	
	Student_t estudante;
	
	printf("Insira o numero do aluno: ");
	scanf("%d",&nr);
	printf("Insira o nome do aluno: ");
	scanf("%127s",nome);
	
	estudante.N_Mec=nr;
	for(int i=0; i<=strlen(nome);i++){
		estudante.Nome[i]=nome[i];
	}	
	return estudante;
}



int main(void) 
{ 
	struct Time *Entrada = malloc(sizeof(Time_t));
	struct Time *Saida = malloc(sizeof(Time_t));
	struct Time *diferenca = malloc(sizeof(Time_t));
	struct Student *Estudante1 = malloc(sizeof(struct Student));
	//struct Student *Estudante2 = malloc(sizeof(struct Student));
	
	int i=0, opcao;
	do{
		printf("\n1 – Registar um estudante \n2 – Lista de estudantes \n3 – Calcular media de permanencia no departamento  \n4 - Terminar programa \n5 - Guardar dados em fichero binario \n6- Ler ficheiro binario \n");
		scanf("%d",&opcao); 
	}while(opcao<0 || opcao>4);
	
	while(opcao!=0){
		//FILE *fp = fopen("Ex2_ase", "wb");
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
					
				case 5: ;
					char fnamew[128];
					printf("Enter .bin file name\n");
					scanf("%123s",fnamew);
					FILE *fp = fopen(fnamew, "wb");
					fwrite(Estudante1, sizeof(struct Student), i, fp);
					fclose(fp);
					break; 
				case 6: ;
					Student_t Estudante2[10];
					char fnamer[128];
					printf("Enter .bin file name\n");
					scanf("%123s",fnamer);
					FILE *fb = fopen(fnamer, "rb");
					fread(Estudante2, sizeof(struct Student), i, fb);
					
					for(int j=0; j<i;j++){
						printf("Estudante %d: ",(j+1));
						printf("\nNome: %s ",Estudante2[j].Nome);
						printf("\nEntrada: ");
						print(&Entrada[j]);
						printf("Saida: ");
						print(&Saida[j]);
						printf("Permanencia no departamento: ");
						print(&diferenca[j]);
					}
					fclose(fb);
					break;
			} 
			printf("\n1 – Registar um estudante \n2 – Lista de estudantes \n3 – Calcular media de permanencia no departamento  \n4 - Terminar programa \n");
			scanf("%d",&opcao); 
	}
	
}

