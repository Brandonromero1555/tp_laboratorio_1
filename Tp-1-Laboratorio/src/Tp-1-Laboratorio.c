/*
 ============================================================================
 Name        : Tp-1-Laboratorio.c
 Author      : Brandon Romero
 Copyright   : Your copyright notice
 Description : trabajo practico 1


Una agencia de viaje necesita calcular costos para sus vuelos de Latam y Aerolíneas Argentinas
para ofrecerlos a sus clientes.
Se deberá ingresar por cada vuelo los km totales y el precio total del mismo.
El objetivo de la aplicación es mostrar las diferentes opciones de pagos a sus clientes.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "calculos.h"
#include "mostrar.h"



int main(void) {

	setbuf(stdout,NULL);



	int opcion;
	float km = 0;
	float precioAerolineas = 0;
	float precioLatam = 0;
	float tarjetaDebitoA;
	float tarjetaDebitoL;
	float tarjetaCreditoA;
	float tarjetaCreditoL;
	float bitcoinA;
	float bitcoinL;
	float precioXKmA;
	float precioXKmL;
	float difPrecio;
	int flagCalcular = 0;

	//forzados
	float kmForzado = 7090;
	float precioAerolineasForzado = 162965;
	float precioLatamForzado = 159339;
	float difPrecioForzado;




	do{
		printf("\n*******************Menu principal*******************\n"
							"1.Ingresar kilometros: (km=%.2f)\n", km);
					printf(	"2.Ingrese precio de vuelos: (Aerolíneas=%.2f, Latam=%.2f)\n", precioAerolineas, precioLatam);
					printf(	"3.Calcular todos los costos:\n"
							"4.Informar resultados:\n"
							"5.Carga forzada de datos.\n"
							"6.Salir:\n"
							"Ingrese una opcion:\n"
				"****************************************************\n");
							scanf("%d", &opcion);


		switch(opcion){

			case 1:


					km = validarFloatPositivo("\ningresar kilómetros:", "error\n");

				break;


			case 2:

				printf("\nIngresar precio de vuelos:\n");

						precioAerolineas = validarFloatPositivo("- Precio vuelo Aerolíneas:\n", "- Error\n");
						precioLatam = validarFloatPositivo("- Precio vuelo Latam:\n", "- Error\n");

				break;


			case 3:

				if (km > 0 && (precioAerolineas > 0 || precioLatam > 0)){
						calcularPrecio (km, precioAerolineas, &tarjetaDebitoA, &tarjetaCreditoA, &bitcoinA, &precioXKmA, &flagCalcular);
						calcularPrecio (km, precioLatam,&tarjetaDebitoL, &tarjetaCreditoL, &bitcoinL, &precioXKmL, &flagCalcular);
						difPrecio = calcularDif(precioAerolineas, precioLatam);
						printf("\nlos precios ya se calcularon.\n");
				}
				else{
					    printf("\nNo ingresó ningun valor en kilómetros o en precios.\n");
				}

	            break;


			case 4:

				if(flagCalcular == 0){

					printf("\nTodavia no se calcularon los precios.\n");
				}
				else{
					printf("Aerolineas");
					mostrarInformacion(precioAerolineas, km, tarjetaDebitoA, tarjetaCreditoA, bitcoinA, precioXKmA);
					printf("Latam");
					mostrarInformacion(precioLatam, km, tarjetaDebitoL, tarjetaCreditoL, bitcoinL, precioXKmL);

					mostrarDiferencia(difPrecio);
				}

				break;


			case 5:

				calcularPrecio(kmForzado, precioAerolineasForzado, &tarjetaDebitoA, &tarjetaCreditoA, &bitcoinA, &precioXKmA, &flagCalcular);
				calcularPrecio(kmForzado, precioLatamForzado, &tarjetaDebitoL, &tarjetaCreditoL, &bitcoinL, &precioXKmL, &flagCalcular);
				difPrecioForzado = calcularDif(precioAerolineasForzado, precioLatamForzado);

				mostrarInformacion(precioAerolineasForzado, kmForzado, tarjetaDebitoA, tarjetaCreditoA, bitcoinA, precioXKmA);
				mostrarInformacion(precioLatamForzado, kmForzado, tarjetaDebitoL, tarjetaCreditoL, bitcoinL, precioXKmL);
				mostrarDiferencia(difPrecioForzado);

				flagCalcular = 0;
				break;


			case 6:

				printf("finalizado.\n");

				break;


			default:

				printf("\nError, ingrese opcion del menu.\n");
				break;
		}

	}while(opcion != 6);




	return EXIT_SUCCESS;
}
