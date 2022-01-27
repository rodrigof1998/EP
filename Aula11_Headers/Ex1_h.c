#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>


typedef struct Time Time_t ;
typedef struct Student Student_t ;

struct Time {int hour; int minute; int second;};
struct Student {int N_Mec; char Nome[128];};

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
