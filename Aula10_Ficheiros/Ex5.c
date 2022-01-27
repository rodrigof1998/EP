#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void) 
{ 
	int limit=1024; 
	
	char *a = malloc(sizeof(char));
	
	char fname1[128];
	printf("Enter the first .txt file name\n");
	scanf("%123s",fname1);

	FILE *fp1 = fopen(fname1, "r");
	
	char *b = malloc(sizeof(char));
	
	char fname2[128];
	printf("Enter the second .txt file name\n");
	scanf("%123s",fname2);

	FILE *fp2 = fopen(fname2, "r");
	

	
	int i=0;
	while(fscanf(fp1, "%c", &a[i])<limit){
		i++;
		a = realloc(a,(i+1)*(sizeof(char)));
	}
	
	int j=0;
	while(fscanf(fp2, "%c", &b[j])<limit){
		j++;
		b = realloc(b,(j+1)*(sizeof(char)));
	}
	
	/*	
	for(int l=0 ; l < j; l++){
		for(int m=0 ; m < 26; m++){
			if(a[l]==alfabetomin[m]|| a[l]==alfabetomax[m]){
				contador[m]++;
			}
		}	
	}
	for(int n=0 ; n < 26; n++){
		printf("'%c' ou '%c' aparece %d vezes \n",alfabetomin[n],alfabetomax[n] ,contador[n]);
	}
	*/
	
  return 0; 
}
