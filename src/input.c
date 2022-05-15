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
	printf("**************************ELIJA LAS OPCIONES DE VUELO***************************************\n");
	utn_getNumero(&opciones,"1)-Altas:\n2)-Modificar:\n3)-Baja:\n4)-Informar\n-a)-Listado de Pasajeros Ordenados Alfabeticamnete por Apellido y tipo de pasajero\n"
			"-b)-Total y promedio de los precios de los pasajes, y cuantos pasajeros superan el precio\n"
			"-c)-Listado de los pasajeros por codigo de vuelo y estado de los vuelos 'ACTIVOS'\n5)-Salir:\n","Error ingrese nuevos datos\n",1,6,3);

	return opciones;
}


int utn_getNumero(int *pResultado, char* mensaje,char* mensajeError,int minimo,int maximo,int reintentos)
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
void getString(char cadena[],char mensaje[],int tam)
{
    char auxiliar[tam];
    printf("%s", mensaje);
    fflush(stdin);
    scanf("%[^\n]", auxiliar);
    strcpy(cadena, auxiliar);

}
float PedirFlotante(char mensaje[], char mensajeError[], int min,int max)
{
	float numero;
	printf("%s",mensaje);
	scanf("%f", &numero);
		while(numero < min || numero > max)
		{
			printf("%s",mensajeError);
			scanf("%f", &numero);
		}
return numero;
}
int PedirNumeros(char mensaje[], char mensajeError[], int min,int max)
{
	int numero;
	printf("%s",mensaje);
	scanf("%d", &numero);
		while(numero < min || numero > max)
		{
			printf("%s",mensajeError);
			scanf("%d", &numero);
		}
	return numero;
}
