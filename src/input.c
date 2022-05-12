/*
 * input.c
 *
 *  Created on: 12 may. 2022
 *      Author: 54113
 */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include "Input.h"


int MenuOpciones()
{
	int opciones;

	utn_getNumero(&opciones,"1)-Altas:\n2)-Modificar:\n3)-Baja:\n4)-Informar\n\na)-Listado de Pasajeros Ordenados Alfabeticamnete por Apellido y tipo de pasajero\n\n"
			"b)-Total y promedio de los precios de los pasajes, y cuantos pasajeros superan el precio\n\n"
			"c)-Listado de los pasajeros por codigo de vuelo y estado de los vuelos 'ACTIVOS'\n","Error ingrese nuevos datos\n",1,6,3);

	return opciones;
}


int utn_getNumero(int* pResultado, char* mensaje,char* mensajeError,int minimo,int maximo,int reintentos)
{
    int retorno = -1;
    int bufferInt;
        if(pResultado!=NULL && mensaje!= NULL && mensajeError!= NULL && minimo <= maximo && reintentos >=0)
        {
            do
            {
                printf("%s",mensaje);
                scanf("%d",&bufferInt);
                if(bufferInt >= minimo && bufferInt <= maximo)
                {
                    *pResultado = bufferInt;
                    retorno = 0;
                    break;
                }
                else
                {
                    printf("%s",mensajeError);
                    reintentos--;
                }
            }while(reintentos >=0);
        }
    return retorno;
}

