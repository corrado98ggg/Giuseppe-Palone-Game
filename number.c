#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int game() {

	int matrix_1[6][5];
	int matrix_2[6][5];
	int matrix_3[6][5];
	int matrix_4[6][5];
	int matrix_5[6][5];
	int matrix_6[6][5];

	char* tmp = malloc(sizeof(char) * 2);
	int k = 0;
	int ret = 0;

	int vettore_matrix_1[] = { 32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,-1};

	//creazione della prima matrice
	for (int i = 0; i < 6; i++) {
		printf("\n");
		for (int j = 0; j < 5; j++) {

			matrix_1[i][j] = vettore_matrix_1[k];
			printf("%d ", matrix_1[i][j]);
			k++;
		}
	}
	printf("\n");
	k = 0;
	printf("\n");
	printf("il numero da te pensato si trova nella prima tabella?\n");
	scanf("%s", tmp);

	if (strcmp(tmp, "si") == 0) {
		ret = ret + matrix_1[0][0];
	}

	int vettore_matrix_2[] = { 16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,48,49,50,51,52,53,54,55,56,57,58,59,60,-1};

	//creazione della seconda matrice
	for (int i = 0; i < 6; i++) {
		printf("\n");

		for (int j = 0; j < 5; j++) {
			matrix_2[i][j] = vettore_matrix_2[k];
			printf("%d ", matrix_2[i][j]);
			k++;
		}
	}
	printf("\n");
	k = 0;
	printf("il numero da te pensato si trova nella seconda tabella?\n");
	scanf("%s", tmp);

	if (strcmp(tmp, "si") == 0) {
		ret = ret + matrix_2[0][0];
	}

	int vettore_matrix_3[] = { 8,9,10,11,12,13,14,15,24,25,26,27,28,29,30,31,40,41,42,43,44,45,46,47,56,57,58,59,60,-1 };

	//creazione della terza matrice
	for (int i = 0; i < 6; i++) {
		printf("\n");

		for (int j = 0; j < 5; j++) {
			matrix_3[i][j] = vettore_matrix_3[k];
			printf("%d ", matrix_3[i][j]);
			k++;
		}
	}
	printf("\n");
	k = 0;
	printf("il numero da te pensato si trova nella terza tabella?\n");
	scanf("%s", tmp);

	if (strcmp(tmp, "si") == 0) {
		ret = ret + matrix_3[0][0];
	}

	int vettore_matrix_4[] = { 4,5,6,7,12,13,14,15,20,21,22,23,28,29,30,31,36,37,38,39,44,45,46,47,52,53,54,55,60,-1 };

	//creazione della quarta matrice
	for (int i = 0; i < 6; i++) {
		printf("\n");

		for (int j = 0; j < 5; j++) {
			matrix_4[i][j] = vettore_matrix_4[k];
			printf("%d ", matrix_4[i][j]);

			k++;
		}
	}
	printf("\n");
	k = 0;
	printf("il numero da te pensato si trova nella quarta tabella?\n");
	scanf("%s", tmp);

	if (strcmp(tmp, "si") == 0) {
		ret = ret + matrix_4[0][0];
	}

	int vettore_matrix_5[] = {2,3,6,7,10,11,14,15,18,19,22,23,26,27,30,31,34,35,38,39,42,43,46,47,50,51,54,55,58,59 };

	//creazione della quinta matrice
	for (int i = 0; i < 6; i++) {
		printf("\n");

		for (int j = 0; j < 5; j++) {
			matrix_5[i][j] = vettore_matrix_5[k];
			printf("%d ", matrix_5[i][j]);

			k++;
		}
	}
	printf("\n");
	k = 0;
	printf("il numero da te pensato si trova nella quinta tabella?\n");
	scanf("%s", tmp);

	if (strcmp(tmp, "si") == 0) {
		ret = ret + matrix_5[0][0];
	}

	int vettore_matrix_6[] = { 1,3,5,7,9,11,13,15,17,19,21,23,25,27,29,31,33,35,37,39,41,43,45,47,49,51,53,55,57,59 };

	//creazione della sesta matrice
	for (int i = 0; i < 6; i++) {
		printf("\n");

		for (int j = 0; j < 5; j++) {
			matrix_6[i][j] = vettore_matrix_6[k];
			printf("%d ", matrix_6[i][j]);

			k++;
		}
	}
	printf("\n");
	k = 0;

	printf("il numero da te pensato si trova nella sesta tabella?\n");
	scanf("%s", tmp);

	if (strcmp(tmp, "si") == 0) {
		ret = ret + matrix_6[0][0];
	}


	return ret;
}

void start() {

	printf("Ciao, sei pronto ad essere stupito con un giochino matematico?");
	printf("\n");
	printf("si");
	printf("\n");
	printf("no");
	printf("\n");
	
	char* tmp = malloc(sizeof(char) * 2);
	tmp != NULL;
	scanf("%s", tmp);

	if (strcmp(tmp, "si") == 0) {
		printf("pensa a un numero da 1 a 60, una volta pensato clicca 'c' e premi invio per continuare");

		scanf("%s", tmp);

		if (strcmp(tmp, "c") == 0) {
			printf("\ndi seguito, verranno mostrate 6 tabelle di numeri, \ndovrai dirmi se il numero appartiene alle varie tabelle\nrispondendo con si o no alle mie domande\niniziamo?\n");
			
			scanf("%s", tmp);

			if (strcmp(tmp, "si") == 0) {
				int ret = game();
				printf("\ncredo che il numero che tu abbia pensato sia %d\n\n", ret);
			}
			else {
				start();
			}
		}
		else {
			start();
		}
	}
	else if(strcmp(tmp, "no") == 0) {
			printf("sara' per la prossima volta");
			printf("\n");
	}
	else {
		printf("Input non valido");
		printf("\n");
		start();
	}
}

int main(void) {
	start();
}