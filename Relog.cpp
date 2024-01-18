/*
							***** RELOJ DIGITAL *****
			
			Descripción:									
			Programa que implementa un reloj apartir de ciclos FOR
			Fecha: 24-Febrero-2021
			Version: 1.0
	
*/

#include <iostream>												// Biblioteca estandar de salida y entrada												

using namespace std;												// Acceso a todas la funciones

int main()													// Función Principal
{
	

	
	for(int i=0; i<24; i++)											// Contador para las horas
	{
		for(int j=0; j<60; j++)										// Contador para los minutos
		{
			for(int k=0; k<60; k++)									// Contador para los segundos
			{
				cout<<"HORA: "<<i<<": "<<j<<": "<<k<<"\n";					// Impresión de la hora
			}
		}
	}
	
	return 0;												// Programa finalizado con éxito 
}
