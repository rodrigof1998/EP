#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

struct Complex {float re; float im;};

typedef struct Complex Complex_t ;

void ask(Complex_t *pComplex){
	float re, im;
	printf("\nInsira a parte real: ");
	scanf("%f",&re);
	printf("\nInsira a parte imaginaria: ");
	scanf("%f",&im);
	pComplex->re=re;
	pComplex->im=im;	
}

int print(const Complex_t *pComplex){
	printf(" %+1.3f%+1.3fi ",pComplex->re,pComplex->im);
	return 0;
}

Complex_t addition(const Complex_t *p1, const Complex_t *p2){
	Complex_t soma; 
	soma.re=p1->re+p2->re; 
	soma.im=p1->im+p2->im; 	
	return soma;
}

Complex_t subtraction(const Complex_t *p1, const Complex_t *p2){
	Complex_t sub; 
	sub.re=p1->re-p2->re; 
	sub.im=p1->im-p2->im; 	
	return sub;
}

Complex_t multiplication(const Complex_t *p1, const Complex_t *p2){
	Complex_t mult; 
	mult.re=p1->re*p2->re-p1->im*p2->im; 
	mult.im=p1->re*p2->im+p2->re*p1->im; 	
	return mult;
}

Complex_t division(const Complex_t *p1, const Complex_t *p2){
	Complex_t div; 
	div.re=(p1->re*p2->re+p1->im*p2->im)/(p2->re*p2->re+p2->im*p2->im);
	div.im=(p1->im*p2->re-p1->re*p2->im)/(p2->re*p2->re+p2->im*p2->im);
	return div;
}


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
