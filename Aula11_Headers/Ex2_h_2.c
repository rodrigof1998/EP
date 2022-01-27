#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

typedef struct Time Time_t ;
typedef struct Student Student_t ;

struct Time {int hour; int minute; int second;};
struct Student {int N_Mec; char Nome[128];};



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
