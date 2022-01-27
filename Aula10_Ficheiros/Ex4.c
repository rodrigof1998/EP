#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void) 
{ 
	char alfabetomin[27];
	char alfabetomax[27];
	int contador[27] = {0};
    int i;
    for(i=0; i<26; i++){
        alfabetomin[i] = 'a'+i;
        alfabetomax[i] = 'A'+i;
    }
    alfabetomin[i]='\0'; //null terminate the array
	alfabetomax[i]='\0'; //null terminate the array
	
	//printf("%s\n", alfabetomin);
	//printf("%s\n", alfabetomax);

	char *a = malloc(sizeof(char));
	
	char fname[128];
	printf("Enter .txt file name\n");
	scanf("%123s",fname);

	FILE *fp = fopen(fname, "r");
	
	int j=0;
	while(fscanf(fp, "%c", &a[j])!=EOF){
		j++;
		a = realloc(a,(j+1)*(sizeof(char)));
	}
	
	//for(int k=0 ; k < j; k++)
	//	printf("%c" ,a[k]);
		
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
	
  return 0; 
}
