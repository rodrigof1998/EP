#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

typedef struct dados dados_t ;

struct dados {unsigned int byte1;unsigned int byte2; unsigned int byte3; unsigned int byte4; float temp;};


dados_t registerValue(){
	dados_t datas; 
	unsigned int b1, b2, b3, b4; 
	do{
		printf("IP byte1: ");
		scanf("%d",&b1); 
	}while(b1<0 || b1>255);
	do{
		printf("IP byte2: ");
		scanf("%d",&b2); 
	}while(b2<0 || b2>255);
	do{
		printf("IP byte3: ");
		scanf("%d",&b3);  
	}while(b3<0 || b3>255);
	do{
		printf("IP byte4: ");
		scanf("%d",&b4); 
	}while(b4<0 || b4>255);

	datas.byte1=b1;
	datas.byte2=b2;
	datas.byte3=b3;
	datas.byte4=b4;
	
	int count=0;
	float temp;
	do{
		if(count>0)
			printf("Temperature inserted incorrect: Try again. \n ");
		printf("Value: ");
		scanf("%f",&temp);
		count++;
	}while(temp>30 || temp<-30);
	
	datas.temp=temp; 
	
	return datas; 
}
