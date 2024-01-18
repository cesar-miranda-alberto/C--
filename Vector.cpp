/*
			***** VECTOR *****
	
	Descripción:	
	El siguiente código implementa el uso de un vector a partir de los valores dados por el usuario
	Fecha: 25-Marzo-2021
	Version: 1.0
*/

#include <iostream>																			// Biblioteca estandar de entrada y salida de datos

using namespace std;																		// Acceso a todas las funciones

main()																						// Función principal
{
	int vector[10];																	    	// Variable que será el vector 

	for(int i=0; i<10; i++)																    // Ciclo for de diez iteraciones para ingreso de valores al vector
	{
		cout<<"Ingresa un numero entero: ";													// Toma de valores
		cin>>vector[i];		
		system("cls"); 															 	        // Asignación de valor al vector en la posición i que va cambiando con respecto a las iteraciones 
	}
	
	cout<<"El vector queda de la siguiente manera: ";										// Impresión de texto en consola para avisar el resultado del vector
	
		for(int j=0; j<10; j++)																// Ciclo for de diez iteraciones para impresión de valores al vector en consola
		{
			cout<<vector[j];																// Impresión en consola del valor del vector en la posición j que va cambiando con respecto a las iteraciones 
		}
	
	return 0;																				// Programa terminado exitosamente
}
