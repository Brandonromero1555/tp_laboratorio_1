/*
 * calculos.c
 *
 *  Created on: 14 abr. 2022
 *      Author: Usuario
 */
#include "calculos.h"


float validarFloatPositivo (char mensaje[64], char mensajeError[]){
	float retorno;
	char buffer[64];

	do{
		printf(mensaje);
		fflush(stdin);
		scanf("%s",buffer);
		retorno = atof (buffer);
		if(retorno <= 0 ){
			printf(mensajeError);
		}
	}while(retorno <= 0);

	return retorno;
}


void calcularPrecio(float km, float precio, float* pDescuento, float* pInteres, float* precioCripto, float* precioXKm, int* flag){

	float descuento;
	float interes;
	float criptomoneda;

	descuento = 0.9;
	interes = 1.25;
	criptomoneda = 4745556.81;


	*pDescuento = precio * descuento;
	*pInteres = precio * interes;
	*precioCripto = precio / criptomoneda;
	*precioXKm = precio / km;
	*flag = 1;
}

float calcularDif(float precio1, float precio2){
	float retorno;

	if (precio1 == precio2 )
	{
		retorno = 0;
	}
	else
	{
		if (precio1 > precio2)
		{
			retorno = precio1 - precio2;
		}
		else
		{
			retorno = precio2 - precio1;
		}
	}

	return retorno;
}




