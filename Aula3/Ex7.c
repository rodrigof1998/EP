#include <stdio.h> 
 
int main(void) 
{ 
  int ano,mes,dia;
  int J=31,F,M=31,A=30,MA=31,JN=30,JL=31,AG=31,S=30,O=31,N=30,D=31;
  
  printf("Introduza o dia (DD): ");
  scanf("%d", &dia);
  printf("Introduza o mês (MM): ");
  scanf("%d", &mes);  
  printf("Introduza o dia (AAAA): ");
  scanf("%d", &ano);
  
  if ((ano%4==0 && ano%100!=0) || ano%400==0) {
	F=29;
  }else 
	F=28;
	
  switch(mes){
	case 1:
		printf("Janeiro tem: %d dias ",J);
		break;
	case 2:
		printf("Fevereiro tem: %d dias ",F);
		break;
	case 3:
		printf("Março tem: %d dias ",M);
		break;
	case 4:
		printf("Abril tem: %d dias ",A);
		break;
	case 5:
		printf("Maio tem: %d dias ",MA);
		break;
	case 6:
		printf("Junho tem: %d dias ",JN);
		break;
	case 7:
		printf("Julho tem: %d dias ",JL);
		break;
	case 8:
		printf("Agosto tem: %d dias ",AG);
		break;
	case 9:
		printf("Setembro tem: %d dias ",S);
		break;
	case 10:
		printf("Outubro tem: %d dias ",O);
		break;
	case 11:
		printf("Novembro tem: %d dias ",N);
		break;
	case 12:
		printf("Dezembro tem: %d dias ",D);
		break;
	  }
  return 0; 
} 

