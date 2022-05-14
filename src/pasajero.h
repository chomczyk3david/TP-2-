/*
 * pasajero.h
 *
 *  Created on: 11 may. 2022
 *      Author: 54113
 */

#ifndef PASAJERO_H_
#define PASAJERO_H_

#define TAM1 20
#define CODIGO 10
#define TAM2 25
typedef struct
{
	int statusFlight;
	char descripcionStatusFli[TAM2];
	int typePassenger;
	char descripcionTypePass[TAM2];
}eStatusAndPassenger;

typedef struct{

	int id;
	char name[TAM1];
	char lastname[TAM1];
	float price;
	char flycode[CODIGO];
	int statusFlight;
	int isEmpty;
	int typePassenger;

}ePassenger;



#endif /* PASAJERO_H_ */


int initPassengers(ePassenger list[], int len);
int addPassenger(ePassenger list[], int len, int id, char name[],char lastname[],float price,int typePassenger, char flycode[],int statusFlight);
ePassenger ingresoUnPasajero(void);
int cargaDePasajeros(ePassenger list[], int len);
