#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

struct Point2D {float x; float y;};

typedef struct Point2D Point2D_t ;

void ask(Point2D_t *pPoint2D){
	float x, y;
	printf("Insira a coordenada X: ");
	scanf("%f",&x);
	printf("Insira a coordenada Y: ");
	scanf("%f",&y);
	pPoint2D->x=x;
	pPoint2D->y=y;	
}

void print(const Point2D_t *pPoint2D){
	printf("Coordenada X: %+1.3f\n",pPoint2D->x);
	printf("Coordenada Y: %+1.3f\n",pPoint2D->y);
}

float Euclidean_distance(const Point2D_t *p1, const Point2D_t *p2){
	float distancia;
	distancia=sqrt(pow(p2->x - p1->x, 2)+ pow(p2->y - p1->y, 2) * 1.0);
	return distancia;
}

int main(void) 
{ 
	/*
	Point2D_t ponto1, ponto2;
	ask(&ponto1);
	ask(&ponto2);
	print(&ponto1);
	print(&ponto2);
	printf("A distancia entre os dois pontos é: %f\n",Euclidean_distance(&ponto1, &ponto2));
	*/
	
	Point2D_t pontos[10];
	int i=-1;
	do{
		i++;
		ask(&pontos[i]);
		//print(&pontos[i]);
		
	}while(pontos[i].x !=0 || pontos[i].y !=0);
	
	float Dist=0;
	float Maior_Dist=0;
	float somaDist=0;
	int indice_Maior=0;
	
	for(int j=0; j<i;j++){
		Dist=Euclidean_distance(&pontos[i],&pontos[j]);
		if(Dist>Maior_Dist){
			indice_Maior=j;
		}
		somaDist+=Dist;
	}
	printf("A soma das distancias é: %f\n", somaDist);
	printf("O ponto mais distante da origem é: (%+1.3f, %+1.3f)\n",pontos[indice_Maior].x,pontos[indice_Maior].y);
	
}
