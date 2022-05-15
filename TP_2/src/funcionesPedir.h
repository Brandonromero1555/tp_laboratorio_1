/*
 * funcionesPedir.h
 *
 *  Created on: 14 may. 2022
 *      Author: Usuario
 */

#ifndef FUNCIONESPEDIR_H_
#define FUNCIONESPEDIR_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void pedirInt(int* entero, char textoAMostrar[]);
void pedirFloat(float* flotante, char textoAMostrar[]);
void pedirCadena(char cadenaTxt[], char textoAMostrar[]);
int myGets(char *cadena, int longitud);
int getInt(int *pResultado);
int esNumerica(char *cadena);
int utn_getInt(int *pResultado, char *mensaje, char *mensajeError, int minimo, int maximo);
int getFloat(float *pResultado);
int utn_getFloat(float *pResultado, char *mensaje, char *mensajeError, float minimo, float maximo);
int utn_getCadena(char* cadena, char* mensaje, char* mensajeError);
void utn_corregirMayus(char* cadena);



#endif /* FUNCIONESPEDIR_H_ */
