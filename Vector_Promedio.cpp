/*
				***** PROMEDIO DEL VECTOR *****
		
		Descripción:		
		El siguiente código calcula el promedio de los valores dados por el usuario 
		de un vector de diez posiciones.
		Fecha: 25-Marzo-2021
		Versión: 1.0
*/

#include <iostream>																	// Biblioteca estandar de estrada y salida de datos

using namespace std;																// Acceso a las funciones					
						
main()																				// Función principal
{

	int vector[10],acum=0;															// Declaración del vector e inicialización de un acumulador					
	float promedio;																	// Declaración de la variable del promedio como tipo flotante	
	system("color f3");																// Establece el color de fondo en blanco claro
	
	for(int i=0; i<=9; i++)															// Ciclo for de diez iteraciones correspondientes a los espacios del vector
	{
		cout<<"Ingresa el valor "<<i+1<<": ";										// Imprime texto en consola para la toma de valores
		cin>>vector[i];																// Asignación de valor en la posición del vector según la iteración
		acum=vector[i]+acum;														// Suma del acumulador con el vector según su iteración
		system("cls");																// Limpia texto en la consola
	
	}
		
			promedio=acum/10; 	  												// Cálculo del promedio 
	     	
	    cout<<"\n\n";																// Agrega dos saltos de linea 
		cout<<"\t\tEl promedio del vector es: "<<promedio;							// Imprime texto en consola junto con el valor promedio		
			
	return 0;																		// Programa terminado con éxito
}	
