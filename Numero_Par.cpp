/*
		***** NUMERO PAR *****
	
	Descripción:
	El siguiente programa determina si un número es par o no a partir de los datos
	dados por el usuario.
	Fecha: 08-Febrero-2021
	Version: 1.0
	
*/

#include <iostream>																						// Biblioteca estandar de entrada y salida de datos

using namespace std;																					// Acceso a todas las funciones 

main()																									// Función principal

{	
	
	int num;																							// Declaración de variables a utilizar 
	
	cout<<"\t\tPrograma que indica si un numero es par y escriba dicho numero";							// Impresión de texto en consola con dos tabulaciones
	cout<<"\n\n";																						// Agrega dos saltos de linea
	cout<<"Ingresa el numero: ";																		// Toma de requerimientos
	cin>>num;																							// Asignación de valor a la variable
	if(num % 2 == 0)																					// Toma de desición si el residuo del numero divido es cero
	{
		cout<<num<<" es un numero par.";																// Impresión del texto en consola si el número es para
	}
  	 else
	 {
	 		cout<<num<<" es impar";
 	 }
}
