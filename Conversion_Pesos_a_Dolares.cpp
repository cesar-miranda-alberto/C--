/*
							***** CONVERSOR DE PESOS A DOLARES *****
		
		Descripción:
		El siguiente programa muestra un convertidor de moneda de pesos a dolares
		a partir de los datos dados por el usuario.
		
		Fecha: 03-Febrero-2021
		Version: 1.0
		
*/

#include <iostream>																	// Biblioteca estandar de Entrada y Salida de datos
		
using namespace std;																	// Acceso a todas las funciones
	
main()																			// Función principal
{
	
	float pesos, tcambio, dolares;															// Declaración de variabes para moneda en pesos, tipo de cambio y equivalente en dolares 
				
	
	cout<<"\t\t\t CONVERSOR DE PESOS A DOLARES";													// Impresión de texto en consola
	cout<<"\n\n";																	// Asigna dos saltos de lines
	cout<<"Ingresa los pesos que deseas convertir a dolares: ";											// Impresión de requerimiento de moneda en pesos
	cin>>pesos;																	// Asignación de dato dado por el usuario a la variable pesos
	cout<<"Ingresa el tipo de cambio: ";														// Requerimiento del tipo de cambio
	cin>>tcambio;																	// Asignación del tipo de cambio a la variable tcambio
	dolares=pesos/tcambio;																// Conversión de pesos a dolares
	cout<<"\n\nTus "<<pesos<<" pesos equivalen, a "<<dolares<<" dolares";										// Impresión de resultado con dos saltos de linea partiendo del ultimo texto impreso en consola
}
