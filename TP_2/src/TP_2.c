/*
1. ALTAS: Se debe permitir ingresar un pasajero calculando automáticamente el
número de Id. El resto de los campos se le pedirá al usuario.
2. MODIFICAR: Se ingresará el Número de Id, permitiendo modificar: o Nombre o Apellido
o Precio o Tipo de pasajero o Código de vuelo
3. BAJA: Se ingresará el Número de Id y se eliminará el empleado del sistema.
4. INFORMAR:
1. Listado de los pasajeros ordenados alfabéticamente por Apellido y Tipo de pasajero.
2. Total y promedio de los precios de los pasajes, y cuántos pasajeros superan el precio
promedio.
3. Listado de los pasajeros por Código de vuelo y estados de vuelos ‘ACTIVO’
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ArrayPassenger.h"
#include "funcionesPedir.h"
#include "menu.h"
#define MAX_PASAJEROS 2000


int main(void) {

	setbuf(stdout,NULL);

	int opcion;
	int idAux = 0;
	int typePassengerAux;
	int idEliminarAux = 0;
	char nameAux[51];
	char lastNameAux[51];
	char flycodeAux[10];
	float priceAux;


	ePasajero listaPasajeros[MAX_PASAJEROS];

	if(initPassengers(listaPasajeros, MAX_PASAJEROS) != 0)
	{
		printf("\nError al iniciar lista de pasajeros.\n");
	}


	do{
		menu();
		scanf("%d", &opcion);
		fflush(stdin);
		switch(opcion){


			case 1:
				idAux++;
				utn_getCadena(nameAux, "ingrese nombre del pasajero:", "error");
				utn_getCadena(lastNameAux, "ingrese apellido del pasajero:", "error");
				utn_getFloat(&priceAux, "ingrese precio del viaje:", "error", 1, 99999999);
				utn_getCadena(flycodeAux, "ingrese codigo de vuelo:", "error");
				utn_getInt(&typePassengerAux, "ingrese tipo de pasajero:", "error", 1, 3);

				addPassenger(listaPasajeros, MAX_PASAJEROS, idAux, nameAux, lastNameAux, flycodeAux, priceAux, typePassengerAux);

				break;

			case 2:
				printf("2");

				break;

			case 3:
				utn_getInt(&idEliminarAux, "ingrese id de pasajero:", "error\n", 1, 9999999);
				removePassenger(listaPasajeros, MAX_PASAJEROS, idEliminarAux);
				break;

			case 4:
				printPassenger(listaPasajeros, MAX_PASAJEROS);
				break;

			case 5:
				printf("salir");
				break;
		}

	}while(opcion != 5);


	return EXIT_SUCCESS;
}

