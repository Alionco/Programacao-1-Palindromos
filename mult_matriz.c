#include <stdlib.h>
#include <stdio.h>
#include <malloc.h>

void multiplica(int **m1, int **m2, int linhas, int colunas1, int colunas2) {

	int **R;
	int i, j, k;

	R = malloc(linhas * sizeof(int));
	for(i = 0; i <= colunas1; i++) {
		R[i] = malloc(colunas2 * sizeof(int));
	}



	for(i = 0; i < linhas; i++) {
		for(j = 0; j < colunas2; j++) {
			R[i][j] = 0;
			for(k = 0; k < colunas1; k++){
				R[i][j] = R[i][j] + (m1[i][k]) * (m2[k][j]);
			}
		}
	}

	printf("\n\nMATRIZ RESULTADO\n\n");

	for(i=0;i<linhas;i++){
		printf("\n");
		for(j=0;j<colunas2;j++){
			printf("%d ", R[i][j]);
		}
	}

	free(R);

}


int main() {

	int linhas1, colunas1, linhas2, colunas2, i, l, c;
	int **m1, **m2;

	printf("Digite o numero de linhas da 1a matriz:\n");
	scanf("%d", &linhas1);

	printf("Digite o numero de colunas da 1a matriz:\n");
	scanf("%d", &colunas1);

	m1 = malloc(linhas1 * sizeof(int));
	for(i = 0; i <= colunas1; i++) {
		m1[i] = malloc(colunas1 * sizeof(int));
	}

	printf("Digite a primeira matriz:\n");

	for(l = 0; l < linhas1; l++){
		for(c = 0; c < colunas1; c++){
			scanf("%d", &(m1[l][c]));
		}
	}

	printf("Digite o numero de linhas da 2a matriz:\n");
	scanf("%d", &linhas2);

	printf("Digite o numero de colunas da 2a matriz:\n");
	scanf("%d", &colunas2);

	m2 = malloc(linhas2 * sizeof(int));
	for(i = 0; i <= colunas2; i++) {
		m2[i] = malloc(colunas2 * sizeof(int));
	}

	printf("Digite a segunda matriz:\n");

	for(l = 0; l < linhas2; l++){
		for(c = 0; c < colunas2; c++){
			scanf("%d", &(m2[l][c]));
		}
	}

	if(colunas1 == linhas2){
		multiplica(m1, m2, linhas1, colunas1, colunas2);
	} else {
		printf("A MULTIPLICACAO NAO ESTA DEFINIDA PARA ESSAS MATRIZES");
	}

	free(m1);
	free(m2);

	return 1;



}