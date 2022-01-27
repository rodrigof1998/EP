#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
 
int guessed=0, n=0; 
int main(void) 
{ 
// initialize the pseudorandom number generator 
//   (seed = number of seconds since January 1, 1970) 
srandom((unsigned int)time(NULL)); 
// choose a secret number 
//   random() % 100 gives a pseudo random number >= 0 and <= 99 
//   adding one to it gives the desired range; >= 1 and <= 100 
int secret = 1 + (int)(random() % 100); 
 //printf("%d",secret);
  do{
	printf("Tenta adivinhar o numero: ");  
	scanf("%d",&n);  
	if(secret>n){
		printf("O numero é maior! \n");  
	}
	if(secret<n){
		printf("O numero é menor! \n");  
	}
	if(secret==n){
		printf("Boa!! Acertas-te! \n");
		guessed=1;  
	}
	  
  }while(guessed==0);
  
  return 0; 
}
