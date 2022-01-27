#include <stdio.h> 
 
int main(void) 
{ 
  int ano,mes,dia;
  int F;
  
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
	
  if(dia==30 && (mes==4 || mes==6 ||mes==9 || mes==11)){
	printf("Dia anterior : %d/%d/%d \n",dia-1,mes,ano);
	printf("Dia seguinte : %d/%d/%d \n",1,mes+1,ano);		
	}
	
  if(dia==31 && (mes==1 || mes==3 ||mes==5 || mes==7|| mes==8|| mes==10|| mes==12)){
	if(mes==12){
		printf("Dia anterior : %d/%d/%d \n",dia-1,mes,ano);
		printf("Dia seguinte : %d/%d/%d \n",1,1,ano+1);
	}else{
	printf("Dia anterior : %d/%d/%d \n",dia-1,mes,ano);
	printf("Dia seguinte : %d/%d/%d \n",1,mes+1,ano);		
	}
   }
   
  if(dia==1){
	if(mes==1){
		printf("Dia anterior : %d/%d/%d \n",31,12,ano-1);
		printf("Dia seguinte : %d/%d/%d \n",dia+1,mes,ano);
	}
	else if(mes==3){
		printf("Dia anterior : %d/%d/%d \n",F,mes-1,ano);
		printf("Dia seguinte : %d/%d/%d \n",dia+1,mes,ano);		
	}
	else if(mes==2 || mes==4 || mes==6 ||mes==9 || mes==11){
		printf("Dia anterior : %d/%d/%d \n",31,mes-1,ano);
		printf("Dia seguinte : %d/%d/%d \n",dia+1,mes,ano);	
	}
	else if(mes==5 || mes==7|| mes==8|| mes==10|| mes==12){
		printf("Dia anterior : %d/%d/%d \n",30,mes-1,ano);
		printf("Dia seguinte : %d/%d/%d \n",dia+1,mes,ano);			
	}
  }
  if(mes==2 &&((dia==29 && F==29)||(dia==28 && F==28))){
	printf("Dia anterior : %d/%d/%d \n",dia-1,mes,ano);
	printf("Dia seguinte : %d/%d/%d \n",1,mes+1,ano);		  	  
  }   		
	
return 0; 
} 


