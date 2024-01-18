/*
							***** CALCULADORA DE PULSASIONES *****
		
		Descripción:
		El siguiente programa calcula la frecuencia cardiaca de una persona a partir de la formula
		220 ó 226 - Edad
		Donde:
		220 si eres hombre
		226 si eres mujer
		Fecha: 05-Febrero-2021
		Version: 1.0
		
*/

#include <iostream>																				// Biblioteca estandar de Entrada y Salida de datos

using namespace std;																				// Acceso a todas la funciones

main()																						// Función principal
{
    
    
	float edad, pulsam, pulsah;																		// Declaración de variables edad y pulsamh para resultado	
	cout<<"\t\tPrograma que calcula a frecuencia cardiaca de una persona";													// Impresión de texto en consola con dos tabulaciones
	cout<<"\n\n";																				// Agrega dos saltos de linea																							// Impresión de opciones en consola conun salto de linea																											// Agrega dos saltos de linea																												// Asignación de valor a la opción
	cout<<"Ingresa tu edad: ";																		// Requerimiento de edad
	cin>>edad;																				// Asignación del valor a la variable
		
	pulsam=(226-edad);																			// Calculo para frecuencia cardiaca de una mujer
	
	pulsah=(220-edad);     																			// Calculo para frecuencia cardiaca de un hombre
	     																									
	cout<<"\n\n";																				// Agrega tres saltos de linea desde el ultimo texto impreo  
	cout<<"La frecuencia cardiaca para una persona con edad de "<<edad<<" es de:";												// Impresión del resultado
	cout<<"\nMujer: "<<pulsam;
	cout<<"\nHombre: "<<pulsah;
	return 0;																												// Programa terminado con éxito
}

