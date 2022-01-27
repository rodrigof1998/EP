#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include "imag.h"

//gcc -o Ex3 Ex3.c imag.c -lm

int main(void) 
{ 
	
	Complex_t complex1, complex2, soma, sub, mult, div;
	
	char opcao;
		
	printf("\nIndique a operacao aritmetica a executar (+,-,*,/): ");
	scanf("%c",&opcao);
	if(opcao!='+'&&opcao!='-'&&opcao!='*'&&opcao!='/'){
		printf("Operador incorreto. Adeus!\n");
		exit(0);
	}
	ask(&complex1);
	ask(&complex2);
	
	switch(opcao){
		case '+':
			soma = addition(&complex1, &complex2);
			printf("A soma dos dois complexos inseridos é: ");
			print(&complex1); 
			printf(" + ");  
			print(&complex2); 
			printf(" = ");  
			print(&soma);
			break;
		case '-':
			sub=subtraction(&complex1, &complex2);
			printf("A subtração dos dois complexos inseridos é: ");
			print(&complex1); 
			printf(" - ");  
			print(&complex2); 
			printf(" = ");  
			print(&sub);
			break;
		case '*':
			mult=multiplication(&complex1, &complex2);
			printf("A multiplicação dos dois complexos inseridos é: ");
			print(&complex1); 
			printf(" * ");  
			print(&complex2); 
			printf(" = "); 
			print(&mult);
			break;
		case '/':
			div=division(&complex1, &complex2);
			printf("A divisão dos dois complexos inseridos é: ");
			print(&complex1); 
			printf(" / ");  
			print(&complex2); 
			printf(" = "); 
			print(&div);
			break;
	}			
	printf("\n"); 
	
}

