/*
 * ArrayPassenger.c
 *
 *  Created on: 12 may. 2022
 *      Author: Usuario
 */

#include "ArrayPassenger.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define VACIO 0
#define OCUPADO 1

/*
typedef struct
{
	int id;
	char name[51];
	char lastName[51];
	float price;
	char flycode[10];
	int typePassenger;
	int isEmpty;
}ePasajero;*/


int initPassengers(ePasajero* list, int len)
{
	for(int i; i < len; i++){ list[i].isEmpty = VACIO;} return 0;

}


int addPassenger(ePasajero* list, int len, int id, char name[], char lastName[], char flycode[], float price, int typePassenger)
{
	for(int i = 0; i < len; i++)
	{
		if(list[i].isEmpty == VACIO)
		{
			list[i].id = id;
			list[i].typePassenger = typePassenger;
			list[i].price = price;
			strcpy(list[i].name, name);
			strcpy(list[i].lastName, lastName);
			strcpy(list[i].flycode, flycode);
			list[i].isEmpty = OCUPADO;

			printf("el id del pasajero es: %d\n", id);

			i = len + 1;
		}
	}
	return 0;
}

void printPassenger(ePasajero* list, int len)
{
	for(int i = 0; i < len; i++)
	{
		if(list[i].isEmpty == OCUPADO)
		{
			printf("id:%d\n",list[i].id);
			printf("tipo:%d\n",list[i].typePassenger);
			printf("precio:%f\n",list[i].price);
			printf("nombre:%s\n",list[i].name);
			printf("apellido:%s\n",list[i].lastName);
			printf("codigo:%s\n",list[i].flycode);

		}
	}

}

int findPassengerById(ePasajero* list, int len, int id)
{

	int retornoPosicion;

	for(int i=0; i< len; i++)
	{
		if(list[i].id == id)
		{
			retornoPosicion = i;
			i = len +1;
		}
	}

	return retornoPosicion;
}

int removePassenger(ePasajero*list, int len, int id)
{
	int retornoEliminado;

	retornoEliminado = findPassengerById(list, len, id);

	list[retornoEliminado].isEmpty = -1;
	printf("pasajero con id: %d, borrado.", id);

	return 0;
}

