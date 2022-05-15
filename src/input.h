/*
 * input.h
 *
 *  Created on: 12 may. 2022
 *      Author: 54113
 */

#ifndef INPUT_H_
#define INPUT_H_



#endif /* INPUT_H_ */
int MenuOpciones();
int utn_getNumero(int* pResultado, char* mensaje,char* mensajeError,int minimo,int maximo,int reintentos);
void getString(char cadena[],char mensaje[],int tam);
float PedirFlotante(char mensaje[], char mensajeError[], int min,int max);
int PedirNumeros(char mensaje[], char mensajeError[], int min,int max);
