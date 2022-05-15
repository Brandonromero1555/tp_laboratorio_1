/*
 * ArrayPassenger.h
 *
 *  Created on: 12 may. 2022
 *      Author: Usuario
 */

#ifndef ARRAYPASSENGER_H_
#define ARRAYPASSENGER_H_

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	int id;
	char name[51];
	char lastName[51];
	float price;
	char flycode[10];
	int typePassenger;
	int isEmpty;
}ePasajero;

int initPassengers(ePasajero* list, int len);
int addPassenger(ePasajero* list, int len, int id, char name[], char lastName[], char flycode[], float price, int typePassenger);
void printPassenger(ePasajero* list, int len);
int findPassengerById(ePasajero* list, int len, int id);
int removePassenger(ePasajero*list, int len, int id);


#endif /* ARRAYPASSENGER_H_ */
