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
#include "pasajero.h"
#include "input.h"


#define VACIO -1
#define TAM 2
int main(void) {
	setbuf(stdout,NULL);

	int opcion;
	opcion = 0;
	int idNuevo =0;
	int respuesta;
	ePassenger listaPasajeros[TAM];

	initPassengers(listaPasajeros,TAM);

	do{
		respuesta = MenuOpciones();
		switch(respuesta)
		{	//altas de pasajero
			case 1:

				 if(!cargaDePasajeros(listaPasajeros,TAM,idNuevo)){
					 printf("carga fue exitosa :\n");
				 }else{
					 printf("Error al cargar\n");
				 }

			break;
				//modificaciones delm pasajero
			case 2:
				mostrarTodosLosPasajeros(listaPasajeros, TAM);

			break;
			case 3:
			break;
			case 4:
			break;
			case 5:

			break;


		}

	}while(opcion!=6);
	printf("gracias por volar compania CHOMCZYK");


	return EXIT_SUCCESS;
}
