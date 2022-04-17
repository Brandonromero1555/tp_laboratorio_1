/*
 * calculos.h
 *
 *  Created on: 14 abr. 2022
 *      Author: Usuario
 */

#ifndef CALCULOS_H_
#define CALCULOS_H_

#include <stdio.h>
#include <stdlib.h>

float validarFloatPositivo (char mensaje[64], char mensajeError[]);
void calcularPrecio(float km, float precio, float* pDescuento, float* pInteres, float* precioCripto, float* precioXKm, int* flag);
float calcularDif(float precio1, float precio2);


#endif /* CALCULOS_H_ */
