/*
 * pasajero.c
 *
 *  Created on: 11 may. 2022
 *      Author: 54113
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "pasajero.h"
#include "input.h"
#define VACIO -1
/**
 * @fn int initPassengers(epassenger*, int)
 * @brief to indicaete tha all position in the array are empty
 * this funtion put the flag (isEmpty) in TRUE in all
 * @param list passenger* pointer to array of passenger
 * @param len int Array length
 * @return int retunr  -1 if error  and 0  if true
 */
int initPassengers(ePassenger list[], int len)
{
	int i;
	if(list!=NULL && len >0)
	{
		for(i=0;i<len;i++)
		{
			list[i].isEmpty = VACIO;
		}
	}

	return 0;
}
/**
 * @fn int addPassenger(ePassenger*, int, int, char[], char[], float, int, char)
 * @brief
 *
 * @param list
 * @param len
 * @param id
 * @param name
 * @param lastName
 * @param price
 * @param typePassenger
 * @param flycode
 * @return
 */
int addPassenger(ePassenger list[], int len, int id, char name[],char lastname[],float price,int typePassenger, char flycode[],int statusFlight)
{
	ePassenger aux;
	int i =0;
		for(;i<len;i++){
			if(list[i].isEmpty == VACIO)
			{
				list[i].id = id;
				list[i].price = price;
				aux.typePassenger = typePassenger;
				aux.statusFlight = statusFlight;
				strcpy(list[i].name,name);
				strcpy(list[i].lastname,lastname);
				strcpy(list[i].flycode,flycode);
				i=len +1;
			}

		}

	return 0;
}
ePassenger ingresoUnPasajero(void)
{
	ePassenger pasajero;

	getString(pasajero.name,"Ingrese su nombre",50);
	getString(pasajero.lastname,"Ingrese su apellido",50);
	getString(pasajero.flycode,"Ingrese codigo de vuelo",50);
	pasajero.price = PedirFlotante("Ingrese Importe de vuelo", "Ingrese un valor numerico", 1, 99999);


	return pasajero;
}




