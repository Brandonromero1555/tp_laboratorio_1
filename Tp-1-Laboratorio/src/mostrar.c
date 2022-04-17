/*
 * mostrar.c
 *
 *  Created on: 14 abr. 2022
 *      Author: Usuario
 */

#include "mostrar.h"

void mostrarInformacion(float precio, float km, float tarjetaDebito, float tarjetaCredito, float bitcoin, float precioXKm){

		printf("\nPrecio: $%.2f", precio);
		printf("\nPrecio con tarjeta de débito: %.2f", tarjetaDebito);
		printf("\nPrecio con tarjeta de crédito: %.2f", tarjetaCredito);
		printf("\nPrecio con bitcoin: %f BTC", bitcoin);
		printf("\nPrecio unitario: %.2f\n", precioXKm);
}


void mostrarDiferencia (float difPrecio)
{
	if(difPrecio != 0)
	{
		printf("\nLa diferencia de precio es: %.2f\n", difPrecio);
	}
}

