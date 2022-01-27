#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

typedef struct Time Time_t ;
typedef struct Student Student_t ;
struct Student {int N_Mec; char Nome[128];};
struct Time {int hour; int minute; int second;};

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
