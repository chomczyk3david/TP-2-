/*
 * pasajero.h
 *
 *  Created on: 11 may. 2022
 *      Author: 54113
 */



#define VACIO -1

typedef struct{

	int id;
	char name[51];
	char lastname[51];
	float price;
	char flycode[10];
	int typePassenger;
	int statusFlight;
	int isEmpty;

}epassenger;

#ifndef PASAJERO_H_
#define PASAJERO_H_


int initPassengers(epassenger* list, int len);


#endif /* PASAJERO_H_ */


