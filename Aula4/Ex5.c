#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
#include <unistd.h>
 
int guessed=0, secretx=0, secrety=0,minX=1, minY=1,maxX=100, maxY=100; 
char coordenates[10];
int main(void) 
{ 
	printf("Escreva uma posiçao para o pc adivinhar [x:y]: \n");  
	printf("x:");  
	scanf("%d",&secretx); 
	printf("y:");  
	scanf("%d",&secrety);
		 
	srandom((unsigned int)time(NULL)); 
// choose a secret number 
//   random() % 100 gives a pseudo random number >= 0 and <= 99 
//   adding one to it gives the desired range; >= 1 and <= 100 
int nx = minX + (int)(random() % maxX); 
sleep(1);
int ny = minY + (int)(random() % maxY); 


	do{
			//~ printf("O numero é [%d,%d] Sim=1, Não=0? ",nx,ny); 
			//~ scanf("%d",&guessed);  
			//~ if(guessed==1){
				//~ break;
				//~ }
		
		
		//~ printf("O numero é para que coordenada relativa em? ");  
		printf("O numero é [%d,%d] Coordenadas? ",nx,ny);
		scanf("%s",&coordenates[0]);  
		
		switch(coordenates[0]){
			
			case 'S':
				minX=nx;
				break;
			case 'N':
				maxX=nx;
				break;
			case 'W':
				maxX=minX=nx;
				maxY=ny;
				break;
			case 'E':
				maxX=minX=nx;
				minY=ny;
				break;
		} 
		switch(coordenates[1]){
			
			case 'W':
				maxY=ny;
				break;
			case 'E':
				minY=ny;
				break;
			case ' ':
				maxY=minY=ny;
				break;	
		}
		nx = minX + (int)(random() % maxX); 
		sleep(2);
		ny = minY + (int)(random() % maxY); 
		printf("minX:%d | maxX:%d | minY:%d | maxY:%d \n" ,minX,maxX, minY, maxY);
	}while(guessed==0);
	printf("O PC conseguiu adivinhar"); 
  return 0; 
}
