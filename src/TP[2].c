/*
 ============================================================================
 Name        : TP[2].c
 Author      : david
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct{

	int id;
	char name[51];
	char lastname[51];
	float price;
	char flycode[10];
	int typePassenger;
	int statusFlight;
	int isEmpty;

}passenger;

int main(void) {

	int MenuOpciones();

		int opciones;

		printf("1-Inicializar \n");
		printf("2-Cargar \n");
		printf("3-Mostrar \n");
		printf("4-Calculo Promedio \n");
		printf("5-Ordenar \n");
		printf("6-Salir:\n");
		printf("Elija las opcines:");
		scanf("%d", &opciones);



	return EXIT_SUCCESS;
}
