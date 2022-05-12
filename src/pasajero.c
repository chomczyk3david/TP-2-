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
#define VACIO -1

int initPassengers(epassenger* list, int len)
{
	int i;
	for(i=0;i<len;i++)
	{
		list[i].isEmpty = VACIO;
	}
	return 0;
}
