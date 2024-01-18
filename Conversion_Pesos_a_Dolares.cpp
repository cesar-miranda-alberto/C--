/*
							***** CONVERSOR DE PESOS A DOLARES *****
		
		Descripci�n:
		El siguiente programa muestra un convertidor de moneda de pesos a dolares
		a partir de los datos dados por el usuario.
		
		Fecha: 03-Febrero-2021
		Version: 1.0
		
*/

#include <iostream>																								// Biblioteca estandar de Entrada y Salida de datos
		
using namespace std;																							// Acceso a todas las funciones
	
main()																											// Funci�n principal
{
	
	float pesos, tcambio, dolares;																				// Declaraci�n de variabes para moneda en pesos, tipo de cambio y equivalente en dolares 
				
	
	cout<<"\t\t\t CONVERSOR DE PESOS A DOLARES";																// Impresi�n de texto en consola
	cout<<"\n\n";																								// Asigna dos saltos de lines
	cout<<"Ingresa los pesos que deseas convertir a dolares: ";													// Impresi�n de requerimiento de moneda en pesos
	cin>>pesos;																									// Asignaci�n de dato dado por el usuario a la variable pesos
	cout<<"Ingresa el tipo de cambio: ";																		// Requerimiento del tipo de cambio
	cin>>tcambio;																								// Asignaci�n del tipo de cambio a la variable tcambio
	dolares=pesos/tcambio;																						// Conversi�n de pesos a dolares
	cout<<"\n\nTus "<<pesos<<" pesos equivalen, a "<<dolares<<" dolares";										// Impresi�n de resultado con dos saltos de linea partiendo del ultimo texto impreso en consola
}
