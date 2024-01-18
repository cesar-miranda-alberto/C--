/*
		***** NUMERO PAR *****
	
	Descripci�n:
	El siguiente programa determina si un n�mero es par o no a partir de los datos
	dados por el usuario.
	Fecha: 08-Febrero-2021
	Version: 1.0
	
*/

#include <iostream>																						// Biblioteca estandar de entrada y salida de datos

using namespace std;																					// Acceso a todas las funciones 

main()																									// Funci�n principal

{	
	
	int num;																							// Declaraci�n de variables a utilizar 
	
	cout<<"\t\tPrograma que indica si un numero es par y escriba dicho numero";							// Impresi�n de texto en consola con dos tabulaciones
	cout<<"\n\n";																						// Agrega dos saltos de linea
	cout<<"Ingresa el numero: ";																		// Toma de requerimientos
	cin>>num;																							// Asignaci�n de valor a la variable
	if(num % 2 == 0)																					// Toma de desici�n si el residuo del numero divido es cero
	{
		cout<<num<<" es un numero par.";																// Impresi�n del texto en consola si el n�mero es para
	}
  	 else
	 {
	 		cout<<num<<" es impar";
 	 }
}
