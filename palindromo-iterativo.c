#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>


int palindromo(char v[], int primeiro, int ultimo) {

	while(v[primeiro] == v[ultimo]) {

		primeiro++;
		ultimo--;
		
		if(primeiro == ultimo){
			return 1;
		}
	}

	return 0;
}

int main() {

	char *c, entrada;
	int tam = 0;

	c = malloc(sizeof(char));
	*c = 0;

	scanf("%c", &entrada);

	while(entrada != '\n'){
		tam++;
		c[tam-1] = entrada;
		c = realloc(c, (tam+1)*sizeof(char));
		scanf("%c", &entrada);
	}

	if(palindromo(c,0, tam-1)){
		printf("SIM");
	} else {
		printf("NAO");
	}

	return 1;

}