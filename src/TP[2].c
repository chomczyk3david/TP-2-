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
	int respuesta;
	ePassenger listaPasajeros[TAM];

	initPassengers(listaPasajeros,TAM);

	do{
		respuesta = MenuOpciones();
		switch(respuesta)
		{
			case 1:
				 if(!cargaDePasajeros(listaPasajeros,TAM)){
					 printf("carga exitosa:");
				 }else{
					 printf("Error al cargar");
				 }
			break;

			case 2:

			break;
		}

	}while(opcion==6);


	return EXIT_SUCCESS;
}
